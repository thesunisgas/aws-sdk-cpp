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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_GAMELIFT_API ListGameServerGroupsResult
  {
  public:
    ListGameServerGroupsResult();
    ListGameServerGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListGameServerGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A collection of game server group objects that match the request.</p>
     */
    inline const Aws::Vector<GameServerGroup>& GetGameServerGroups() const{ return m_gameServerGroups; }

    /**
     * <p>A collection of game server group objects that match the request.</p>
     */
    inline void SetGameServerGroups(const Aws::Vector<GameServerGroup>& value) { m_gameServerGroups = value; }

    /**
     * <p>A collection of game server group objects that match the request.</p>
     */
    inline void SetGameServerGroups(Aws::Vector<GameServerGroup>&& value) { m_gameServerGroups = std::move(value); }

    /**
     * <p>A collection of game server group objects that match the request.</p>
     */
    inline ListGameServerGroupsResult& WithGameServerGroups(const Aws::Vector<GameServerGroup>& value) { SetGameServerGroups(value); return *this;}

    /**
     * <p>A collection of game server group objects that match the request.</p>
     */
    inline ListGameServerGroupsResult& WithGameServerGroups(Aws::Vector<GameServerGroup>&& value) { SetGameServerGroups(std::move(value)); return *this;}

    /**
     * <p>A collection of game server group objects that match the request.</p>
     */
    inline ListGameServerGroupsResult& AddGameServerGroups(const GameServerGroup& value) { m_gameServerGroups.push_back(value); return *this; }

    /**
     * <p>A collection of game server group objects that match the request.</p>
     */
    inline ListGameServerGroupsResult& AddGameServerGroups(GameServerGroup&& value) { m_gameServerGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline ListGameServerGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline ListGameServerGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline ListGameServerGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<GameServerGroup> m_gameServerGroups;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
