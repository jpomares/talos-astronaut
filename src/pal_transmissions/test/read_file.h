///////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2013, PAL Robotics S.L.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//   * Redistributions of source code must retain the above copyright notice,
//     this list of conditions and the following disclaimer.
//   * Redistributions in binary form must reproduce the above copyright
//     notice, this list of conditions and the following disclaimer in the
//     documentation and/or other materials provided with the distribution.
//   * Neither the name of PAL Robotics S.L. nor the names of its
//     contributors may be used to endorse or promote products derived from
//     this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.
//////////////////////////////////////////////////////////////////////////////

/// \author Adolfo Rodriguez Tsouroukdissian

#ifndef TRANSMISSIONS_READ_FILE_H
#define TRANSMISSIONS_READ_FILE_H

#include <string>
#include <vector>
#include <resource_retriever/retriever.h>
#include <transmission_interface/transmission_info.h>
#include <transmission_interface/transmission_parser.h>

namespace pal_transmissions
{

inline bool readFile(const std::string& filename, std::string& contents)
{
  resource_retriever::Retriever retriever;
  resource_retriever::MemoryResource resource;

  try
  {
     resource = retriever.get("package://pal_transmissions/" + filename);
  }
  catch (resource_retriever::Exception& e)
  {
    ROS_ERROR("Failed to retrieve file: %s", e.what());
    return false;
  }

  contents.assign(resource.data.get(), resource.data.get() + resource.size);
  return true;
}

typedef transmission_interface::TransmissionInfo TransmissionInfo;
typedef transmission_interface::TransmissionParser TransmissionParser;

inline std::vector<TransmissionInfo> parseUrdf(const std::string& filename)
{
  std::vector<TransmissionInfo> infos;

  std::string urdf;
  if (!readFile(filename, urdf)) {return std::vector<TransmissionInfo>();}

  TransmissionParser parser;
  if (!parser.parse(urdf, infos)) {return std::vector<TransmissionInfo>();}
  return infos;
}

} // namespace

#endif // header guard
