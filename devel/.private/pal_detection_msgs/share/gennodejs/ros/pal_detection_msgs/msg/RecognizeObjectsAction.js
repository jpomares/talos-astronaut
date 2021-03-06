// Auto-generated. Do not edit!

// (in-package pal_detection_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let RecognizeObjectsActionGoal = require('./RecognizeObjectsActionGoal.js');
let RecognizeObjectsActionResult = require('./RecognizeObjectsActionResult.js');
let RecognizeObjectsActionFeedback = require('./RecognizeObjectsActionFeedback.js');

//-----------------------------------------------------------

class RecognizeObjectsAction {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.action_goal = null;
      this.action_result = null;
      this.action_feedback = null;
    }
    else {
      if (initObj.hasOwnProperty('action_goal')) {
        this.action_goal = initObj.action_goal
      }
      else {
        this.action_goal = new RecognizeObjectsActionGoal();
      }
      if (initObj.hasOwnProperty('action_result')) {
        this.action_result = initObj.action_result
      }
      else {
        this.action_result = new RecognizeObjectsActionResult();
      }
      if (initObj.hasOwnProperty('action_feedback')) {
        this.action_feedback = initObj.action_feedback
      }
      else {
        this.action_feedback = new RecognizeObjectsActionFeedback();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type RecognizeObjectsAction
    // Serialize message field [action_goal]
    bufferOffset = RecognizeObjectsActionGoal.serialize(obj.action_goal, buffer, bufferOffset);
    // Serialize message field [action_result]
    bufferOffset = RecognizeObjectsActionResult.serialize(obj.action_result, buffer, bufferOffset);
    // Serialize message field [action_feedback]
    bufferOffset = RecognizeObjectsActionFeedback.serialize(obj.action_feedback, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type RecognizeObjectsAction
    let len;
    let data = new RecognizeObjectsAction(null);
    // Deserialize message field [action_goal]
    data.action_goal = RecognizeObjectsActionGoal.deserialize(buffer, bufferOffset);
    // Deserialize message field [action_result]
    data.action_result = RecognizeObjectsActionResult.deserialize(buffer, bufferOffset);
    // Deserialize message field [action_feedback]
    data.action_feedback = RecognizeObjectsActionFeedback.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += RecognizeObjectsActionGoal.getMessageSize(object.action_goal);
    length += RecognizeObjectsActionResult.getMessageSize(object.action_result);
    length += RecognizeObjectsActionFeedback.getMessageSize(object.action_feedback);
    return length;
  }

  static datatype() {
    // Returns string type for a message object
    return 'pal_detection_msgs/RecognizeObjectsAction';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'ff6e623bde3f5b96aae74e564c1c1660';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    
    RecognizeObjectsActionGoal action_goal
    RecognizeObjectsActionResult action_result
    RecognizeObjectsActionFeedback action_feedback
    
    ================================================================================
    MSG: pal_detection_msgs/RecognizeObjectsActionGoal
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    
    Header header
    actionlib_msgs/GoalID goal_id
    RecognizeObjectsGoal goal
    
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    # 0: no frame
    # 1: global frame
    string frame_id
    
    ================================================================================
    MSG: actionlib_msgs/GoalID
    # The stamp should store the time at which this goal was requested.
    # It is used by an action server when it tries to preempt all
    # goals that were requested before a certain time
    time stamp
    
    # The id provides a way to associate feedback and
    # result message with specific goal requests. The id
    # specified must be unique.
    string id
    
    
    ================================================================================
    MSG: pal_detection_msgs/RecognizeObjectsGoal
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    # input_image: An optional image field, when given performs the recognition on the input_image
    # else, will perform the recognition on the recent captured image from robot's camera
    sensor_msgs/CompressedImage input_image
    
    ================================================================================
    MSG: sensor_msgs/CompressedImage
    # This message contains a compressed image
    
    Header header        # Header timestamp should be acquisition time of image
                         # Header frame_id should be optical frame of camera
                         # origin of frame should be optical center of camera
                         # +x should point to the right in the image
                         # +y should point down in the image
                         # +z should point into to plane of the image
    
    string format        # Specifies the format of the data
                         #   Acceptable values:
                         #     jpeg, png
    uint8[] data         # Compressed image buffer
    
    ================================================================================
    MSG: pal_detection_msgs/RecognizeObjectsActionResult
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    
    Header header
    actionlib_msgs/GoalStatus status
    RecognizeObjectsResult result
    
    ================================================================================
    MSG: actionlib_msgs/GoalStatus
    GoalID goal_id
    uint8 status
    uint8 PENDING         = 0   # The goal has yet to be processed by the action server
    uint8 ACTIVE          = 1   # The goal is currently being processed by the action server
    uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing
                                #   and has since completed its execution (Terminal State)
    uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)
    uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due
                                #    to some failure (Terminal State)
    uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,
                                #    because the goal was unattainable or invalid (Terminal State)
    uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing
                                #    and has not yet completed execution
    uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,
                                #    but the action server has not yet confirmed that the goal is canceled
    uint8 RECALLED        = 8   # The goal received a cancel request before it started executing
                                #    and was successfully cancelled (Terminal State)
    uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be
                                #    sent over the wire by an action server
    
    #Allow for the user to associate a string with GoalStatus for debugging
    string text
    
    
    ================================================================================
    MSG: pal_detection_msgs/RecognizeObjectsResult
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    # image: The resultant image with recognized objects
    sensor_msgs/CompressedImage image
    
    # num_detections: The number of detected objects
    int16 num_detections
    
    # Send the found objects, see the msg files for docs
    pal_detection_msgs/RecognizedObjectArray recognized_objects
    
    ================================================================================
    MSG: pal_detection_msgs/RecognizedObjectArray
    Header header
    
    # This message type describes a potential scene configuration: a set of objects that can explain the scene
    pal_detection_msgs/RecognizedObject[] objects
    
    ================================================================================
    MSG: pal_detection_msgs/RecognizedObject
    # Contains information about the class of a found object, along with its confidence and ROI of detection
    
    # class: The respective class type of the found object
    string object_class
    
    # confidence: how sure you are it is that object and not another one.
    # It is between 0 and 1 and the closer to one it is the better
    float32 confidence
    
    # bounding_box: The region of the image, where the object is found
    sensor_msgs/RegionOfInterest bounding_box
    
    ================================================================================
    MSG: sensor_msgs/RegionOfInterest
    # This message is used to specify a region of interest within an image.
    #
    # When used to specify the ROI setting of the camera when the image was
    # taken, the height and width fields should either match the height and
    # width fields for the associated image; or height = width = 0
    # indicates that the full resolution image was captured.
    
    uint32 x_offset  # Leftmost pixel of the ROI
                     # (0 if the ROI includes the left edge of the image)
    uint32 y_offset  # Topmost pixel of the ROI
                     # (0 if the ROI includes the top edge of the image)
    uint32 height    # Height of ROI
    uint32 width     # Width of ROI
    
    # True if a distinct rectified ROI should be calculated from the "raw"
    # ROI in this message. Typically this should be False if the full image
    # is captured (ROI not used), and True if a subwindow is captured (ROI
    # used).
    bool do_rectify
    
    ================================================================================
    MSG: pal_detection_msgs/RecognizeObjectsActionFeedback
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    
    Header header
    actionlib_msgs/GoalStatus status
    RecognizeObjectsFeedback feedback
    
    ================================================================================
    MSG: pal_detection_msgs/RecognizeObjectsFeedback
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    #no feedback
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new RecognizeObjectsAction(null);
    if (msg.action_goal !== undefined) {
      resolved.action_goal = RecognizeObjectsActionGoal.Resolve(msg.action_goal)
    }
    else {
      resolved.action_goal = new RecognizeObjectsActionGoal()
    }

    if (msg.action_result !== undefined) {
      resolved.action_result = RecognizeObjectsActionResult.Resolve(msg.action_result)
    }
    else {
      resolved.action_result = new RecognizeObjectsActionResult()
    }

    if (msg.action_feedback !== undefined) {
      resolved.action_feedback = RecognizeObjectsActionFeedback.Resolve(msg.action_feedback)
    }
    else {
      resolved.action_feedback = new RecognizeObjectsActionFeedback()
    }

    return resolved;
    }
};

module.exports = RecognizeObjectsAction;
