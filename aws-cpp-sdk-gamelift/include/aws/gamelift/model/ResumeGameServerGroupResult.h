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
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/GameServerGroup.h>
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
namespace GameLift
{
namespace Model
{
  class AWS_GAMELIFT_API ResumeGameServerGroupResult
  {
  public:
    ResumeGameServerGroupResult();
    ResumeGameServerGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ResumeGameServerGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that describes the game server group resource, with the
     * <i>SuspendedActions</i> property updated to reflect the resumed activity.</p>
     */
    inline const GameServerGroup& GetGameServerGroup() const{ return m_gameServerGroup; }

    /**
     * <p>An object that describes the game server group resource, with the
     * <i>SuspendedActions</i> property updated to reflect the resumed activity.</p>
     */
    inline void SetGameServerGroup(const GameServerGroup& value) { m_gameServerGroup = value; }

    /**
     * <p>An object that describes the game server group resource, with the
     * <i>SuspendedActions</i> property updated to reflect the resumed activity.</p>
     */
    inline void SetGameServerGroup(GameServerGroup&& value) { m_gameServerGroup = std::move(value); }

    /**
     * <p>An object that describes the game server group resource, with the
     * <i>SuspendedActions</i> property updated to reflect the resumed activity.</p>
     */
    inline ResumeGameServerGroupResult& WithGameServerGroup(const GameServerGroup& value) { SetGameServerGroup(value); return *this;}

    /**
     * <p>An object that describes the game server group resource, with the
     * <i>SuspendedActions</i> property updated to reflect the resumed activity.</p>
     */
    inline ResumeGameServerGroupResult& WithGameServerGroup(GameServerGroup&& value) { SetGameServerGroup(std::move(value)); return *this;}

  private:

    GameServerGroup m_gameServerGroup;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
