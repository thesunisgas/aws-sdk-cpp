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
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/GameServerGroupDeleteOption.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class AWS_GAMELIFT_API DeleteGameServerGroupRequest : public GameLiftRequest
  {
  public:
    DeleteGameServerGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteGameServerGroup"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier of the game server group to delete. Use either the
     * <a>GameServerGroup</a> name or ARN value.</p>
     */
    inline const Aws::String& GetGameServerGroupName() const{ return m_gameServerGroupName; }

    /**
     * <p>The unique identifier of the game server group to delete. Use either the
     * <a>GameServerGroup</a> name or ARN value.</p>
     */
    inline bool GameServerGroupNameHasBeenSet() const { return m_gameServerGroupNameHasBeenSet; }

    /**
     * <p>The unique identifier of the game server group to delete. Use either the
     * <a>GameServerGroup</a> name or ARN value.</p>
     */
    inline void SetGameServerGroupName(const Aws::String& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = value; }

    /**
     * <p>The unique identifier of the game server group to delete. Use either the
     * <a>GameServerGroup</a> name or ARN value.</p>
     */
    inline void SetGameServerGroupName(Aws::String&& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = std::move(value); }

    /**
     * <p>The unique identifier of the game server group to delete. Use either the
     * <a>GameServerGroup</a> name or ARN value.</p>
     */
    inline void SetGameServerGroupName(const char* value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName.assign(value); }

    /**
     * <p>The unique identifier of the game server group to delete. Use either the
     * <a>GameServerGroup</a> name or ARN value.</p>
     */
    inline DeleteGameServerGroupRequest& WithGameServerGroupName(const Aws::String& value) { SetGameServerGroupName(value); return *this;}

    /**
     * <p>The unique identifier of the game server group to delete. Use either the
     * <a>GameServerGroup</a> name or ARN value.</p>
     */
    inline DeleteGameServerGroupRequest& WithGameServerGroupName(Aws::String&& value) { SetGameServerGroupName(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the game server group to delete. Use either the
     * <a>GameServerGroup</a> name or ARN value.</p>
     */
    inline DeleteGameServerGroupRequest& WithGameServerGroupName(const char* value) { SetGameServerGroupName(value); return *this;}


    /**
     * <p>The type of delete to perform. Options include:</p> <ul> <li> <p>SAFE_DELETE
     * – Terminates the game server group and EC2 Auto Scaling group only when it has
     * no game servers that are in IN_USE status.</p> </li> <li> <p>FORCE_DELETE –
     * Terminates the game server group, including all active game servers regardless
     * of their utilization status, and the EC2 Auto Scaling group. </p> </li> <li>
     * <p>RETAIN – Does a safe delete of the game server group but retains the EC2 Auto
     * Scaling group as is.</p> </li> </ul>
     */
    inline const GameServerGroupDeleteOption& GetDeleteOption() const{ return m_deleteOption; }

    /**
     * <p>The type of delete to perform. Options include:</p> <ul> <li> <p>SAFE_DELETE
     * – Terminates the game server group and EC2 Auto Scaling group only when it has
     * no game servers that are in IN_USE status.</p> </li> <li> <p>FORCE_DELETE –
     * Terminates the game server group, including all active game servers regardless
     * of their utilization status, and the EC2 Auto Scaling group. </p> </li> <li>
     * <p>RETAIN – Does a safe delete of the game server group but retains the EC2 Auto
     * Scaling group as is.</p> </li> </ul>
     */
    inline bool DeleteOptionHasBeenSet() const { return m_deleteOptionHasBeenSet; }

    /**
     * <p>The type of delete to perform. Options include:</p> <ul> <li> <p>SAFE_DELETE
     * – Terminates the game server group and EC2 Auto Scaling group only when it has
     * no game servers that are in IN_USE status.</p> </li> <li> <p>FORCE_DELETE –
     * Terminates the game server group, including all active game servers regardless
     * of their utilization status, and the EC2 Auto Scaling group. </p> </li> <li>
     * <p>RETAIN – Does a safe delete of the game server group but retains the EC2 Auto
     * Scaling group as is.</p> </li> </ul>
     */
    inline void SetDeleteOption(const GameServerGroupDeleteOption& value) { m_deleteOptionHasBeenSet = true; m_deleteOption = value; }

    /**
     * <p>The type of delete to perform. Options include:</p> <ul> <li> <p>SAFE_DELETE
     * – Terminates the game server group and EC2 Auto Scaling group only when it has
     * no game servers that are in IN_USE status.</p> </li> <li> <p>FORCE_DELETE –
     * Terminates the game server group, including all active game servers regardless
     * of their utilization status, and the EC2 Auto Scaling group. </p> </li> <li>
     * <p>RETAIN – Does a safe delete of the game server group but retains the EC2 Auto
     * Scaling group as is.</p> </li> </ul>
     */
    inline void SetDeleteOption(GameServerGroupDeleteOption&& value) { m_deleteOptionHasBeenSet = true; m_deleteOption = std::move(value); }

    /**
     * <p>The type of delete to perform. Options include:</p> <ul> <li> <p>SAFE_DELETE
     * – Terminates the game server group and EC2 Auto Scaling group only when it has
     * no game servers that are in IN_USE status.</p> </li> <li> <p>FORCE_DELETE –
     * Terminates the game server group, including all active game servers regardless
     * of their utilization status, and the EC2 Auto Scaling group. </p> </li> <li>
     * <p>RETAIN – Does a safe delete of the game server group but retains the EC2 Auto
     * Scaling group as is.</p> </li> </ul>
     */
    inline DeleteGameServerGroupRequest& WithDeleteOption(const GameServerGroupDeleteOption& value) { SetDeleteOption(value); return *this;}

    /**
     * <p>The type of delete to perform. Options include:</p> <ul> <li> <p>SAFE_DELETE
     * – Terminates the game server group and EC2 Auto Scaling group only when it has
     * no game servers that are in IN_USE status.</p> </li> <li> <p>FORCE_DELETE –
     * Terminates the game server group, including all active game servers regardless
     * of their utilization status, and the EC2 Auto Scaling group. </p> </li> <li>
     * <p>RETAIN – Does a safe delete of the game server group but retains the EC2 Auto
     * Scaling group as is.</p> </li> </ul>
     */
    inline DeleteGameServerGroupRequest& WithDeleteOption(GameServerGroupDeleteOption&& value) { SetDeleteOption(std::move(value)); return *this;}

  private:

    Aws::String m_gameServerGroupName;
    bool m_gameServerGroupNameHasBeenSet;

    GameServerGroupDeleteOption m_deleteOption;
    bool m_deleteOptionHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
