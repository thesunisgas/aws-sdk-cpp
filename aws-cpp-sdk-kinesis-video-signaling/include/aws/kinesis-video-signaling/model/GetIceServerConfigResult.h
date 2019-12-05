﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannels_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesis-video-signaling/model/IceServer.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace KinesisVideoSignalingChannels
{
namespace Model
{
  class AWS_KINESISVIDEOSIGNALINGCHANNELS_API GetIceServerConfigResult
  {
  public:
    GetIceServerConfigResult();
    GetIceServerConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetIceServerConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of ICE server information objects.</p>
     */
    inline const Aws::Vector<IceServer>& GetIceServerList() const{ return m_iceServerList; }

    /**
     * <p>The list of ICE server information objects.</p>
     */
    inline void SetIceServerList(const Aws::Vector<IceServer>& value) { m_iceServerList = value; }

    /**
     * <p>The list of ICE server information objects.</p>
     */
    inline void SetIceServerList(Aws::Vector<IceServer>&& value) { m_iceServerList = std::move(value); }

    /**
     * <p>The list of ICE server information objects.</p>
     */
    inline GetIceServerConfigResult& WithIceServerList(const Aws::Vector<IceServer>& value) { SetIceServerList(value); return *this;}

    /**
     * <p>The list of ICE server information objects.</p>
     */
    inline GetIceServerConfigResult& WithIceServerList(Aws::Vector<IceServer>&& value) { SetIceServerList(std::move(value)); return *this;}

    /**
     * <p>The list of ICE server information objects.</p>
     */
    inline GetIceServerConfigResult& AddIceServerList(const IceServer& value) { m_iceServerList.push_back(value); return *this; }

    /**
     * <p>The list of ICE server information objects.</p>
     */
    inline GetIceServerConfigResult& AddIceServerList(IceServer&& value) { m_iceServerList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<IceServer> m_iceServerList;
  };

} // namespace Model
} // namespace KinesisVideoSignalingChannels
} // namespace Aws
