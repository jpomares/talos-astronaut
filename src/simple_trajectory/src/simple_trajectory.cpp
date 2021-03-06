#include <ros/ros.h>
#include <control_msgs/JointTrajectoryAction.h>
#include <actionlib/client/simple_action_client.h>

typedef actionlib::SimpleActionClient<control_msgs::JointTrajectoryAction> TrajClient;

class right_hand
{
private:
  // Action client for the joint trajectory action 
  // used to trigger the arm movement action
  TrajClient* traj_client_;

public:
  //! Initialize the action client and wait for action server to come up
  right_hand() 
  {
    // tell the action client that we want to spin a thread by default
    traj_client_ = new TrajClient("right_hand_grasping_action", true);

    // wait for action server to come up
    while(!traj_client_->waitForServer(ros::Duration(5.0))){
      ROS_INFO("Waiting for the joint_trajectory_action server");
    }
  }

  //! Clean up the action client
  ~right_hand()
  {
    delete traj_client_;
  }

  //! Sends the command to start a given trajectory
  void startTrajectory(control_msgs::JointTrajectoryGoal goal)
  {
    // When to start the trajectory: 1s from now
    goal.trajectory.header.stamp = ros::Time::now() + ros::Duration(1.0);
    traj_client_->sendGoal(goal);
  }

  //! Generates a simple trajectory with two waypoints, used as an example
  /*! Note that this trajectory contains two waypoints, joined together
      as a single trajectory. Alternatively, each of these waypoints could
      be in its own trajectory - a trajectory can have one or more waypoints
      depending on the desired application.
  */
  control_msgs::JointTrajectoryGoal closing_trajecory()
  {
    //our goal variable
    control_msgs::JointTrajectoryGoal goal;

    // First, the joint names, which apply to all waypoints
    goal.trajectory.joint_names.push_back("hand_right_thumb_joint");
    goal.trajectory.joint_names.push_back("hand_right_index_joint");
    goal.trajectory.joint_names.push_back("hand_right_mrl_joint");


    // We will have two waypoints in this goal trajectory
    goal.trajectory.points.resize(2);

    // First trajectory point
    // Positions
    int ind = 0;
    goal.trajectory.points[ind].positions.resize(3);
    goal.trajectory.points[ind].positions[0] = 2.37;
    goal.trajectory.points[ind].positions[1] = 0.0;
    goal.trajectory.points[ind].positions[2] = 0.0;

    // Velocities
    goal.trajectory.points[ind].velocities.resize(3);
    for (size_t j = 0; j < 7; ++j)
    {
      goal.trajectory.points[ind].velocities[j] = 0.0;
    }
    // To be reached 1 second after starting along the trajectory
    goal.trajectory.points[ind].time_from_start = ros::Duration(0.1);

    // Second trajectory point
    // Positions

    ind += 1;
    goal.trajectory.points[ind].positions.resize(3);
    goal.trajectory.points[ind].positions[0] = 6.2;
    goal.trajectory.points[ind].positions[1] = 6.8;
    goal.trajectory.points[ind].positions[2] = 9.2;

    // Velocities
    goal.trajectory.points[ind].velocities.resize(3);
    for (size_t j = 0; j < 7; ++j)
    {
      goal.trajectory.points[ind].velocities[j] = 0.0;
    }
    // To be reached 2 seconds after starting along the trajectory
    goal.trajectory.points[ind].time_from_start = ros::Duration(2.5);

    //we are done; return the goal
    return goal;
  }

  //! Returns the current state of the action
  actionlib::SimpleClientGoalState getState()
  {
    return traj_client_->getState();
  }
 
};

int main(int argc, char** argv)
{
  // Init the ROS node
  ros::init(argc, argv, "Close_hand");

  right_hand hand;
  // Start the trajectory
  hand.startTrajectory(hand.closing_trajecory());
  // Wait for trajectory completion
  while(!hand.getState().isDone() && ros::ok())
  {
    usleep(50000);
  }
  return 0;
}