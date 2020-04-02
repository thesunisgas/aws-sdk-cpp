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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/GameServerGroupAction.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class AWS_GAMELIFT_API SuspendGameServerGroupRequest : public GameLiftRequest
  {
  public:
    SuspendGameServerGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SuspendGameServerGroup"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier of the game server group to stop activity on. Use
     * either the <a>GameServerGroup</a> name or ARN value.</p>
     */
    inline const Aws::String& GetGameServerGroupName() const{ return m_gameServerGroupName; }

    /**
     * <p>The unique identifier of the game server group to stop activity on. Use
     * either the <a>GameServerGroup</a> name or ARN value.</p>
     */
    inline bool GameServerGroupNameHasBeenSet() const { return m_gameServerGroupNameHasBeenSet; }

    /**
     * <p>The unique identifier of the game server group to stop activity on. Use
     * either the <a>GameServerGroup</a> name or ARN value.</p>
     */
    inline void SetGameServerGroupName(const Aws::String& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = value; }

    /**
     * <p>The unique identifier of the game server group to stop activity on. Use
     * either the <a>GameServerGroup</a> name or ARN value.</p>
     */
    inline void SetGameServerGroupName(Aws::String&& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = std::move(value); }

    /**
     * <p>The unique identifier of the game server group to stop activity on. Use
     * either the <a>GameServerGroup</a> name or ARN value.</p>
     */
    inline void SetGameServerGroupName(const char* value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName.assign(value); }

    /**
     * <p>The unique identifier of the game server group to stop activity on. Use
     * either the <a>GameServerGroup</a> name or ARN value.</p>
     */
    inline SuspendGameServerGroupRequest& WithGameServerGroupName(const Aws::String& value) { SetGameServerGroupName(value); return *this;}

    /**
     * <p>The unique identifier of the game server group to stop activity on. Use
     * either the <a>GameServerGroup</a> name or ARN value.</p>
     */
    inline SuspendGameServerGroupRequest& WithGameServerGroupName(Aws::String&& value) { SetGameServerGroupName(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the game server group to stop activity on. Use
     * either the <a>GameServerGroup</a> name or ARN value.</p>
     */
    inline SuspendGameServerGroupRequest& WithGameServerGroupName(const char* value) { SetGameServerGroupName(value); return *this;}


    /**
     * <p>The action to suspend for this game server group.</p>
     */
    inline const Aws::Vector<GameServerGroupAction>& GetSuspendActions() const{ return m_suspendActions; }

    /**
     * <p>The action to suspend for this game server group.</p>
     */
    inline bool SuspendActionsHasBeenSet() const { return m_suspendActionsHasBeenSet; }

    /**
     * <p>The action to suspend for this game server group.</p>
     */
    inline void SetSuspendActions(const Aws::Vector<GameServerGroupAction>& value) { m_suspendActionsHasBeenSet = true; m_suspendActions = value; }

    /**
     * <p>The action to suspend for this game server group.</p>
     */
    inline void SetSuspendActions(Aws::Vector<GameServerGroupAction>&& value) { m_suspendActionsHasBeenSet = true; m_suspendActions = std::move(value); }

    /**
     * <p>The action to suspend for this game server group.</p>
     */
    inline SuspendGameServerGroupRequest& WithSuspendActions(const Aws::Vector<GameServerGroupAction>& value) { SetSuspendActions(value); return *this;}

    /**
     * <p>The action to suspend for this game server group.</p>
     */
    inline SuspendGameServerGroupRequest& WithSuspendActions(Aws::Vector<GameServerGroupAction>&& value) { SetSuspendActions(std::move(value)); return *this;}

    /**
     * <p>The action to suspend for this game server group.</p>
     */
    inline SuspendGameServerGroupRequest& AddSuspendActions(const GameServerGroupAction& value) { m_suspendActionsHasBeenSet = true; m_suspendActions.push_back(value); return *this; }

    /**
     * <p>The action to suspend for this game server group.</p>
     */
    inline SuspendGameServerGroupRequest& AddSuspendActions(GameServerGroupAction&& value) { m_suspendActionsHasBeenSet = true; m_suspendActions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_gameServerGroupName;
    bool m_gameServerGroupNameHasBeenSet;

    Aws::Vector<GameServerGroupAction> m_suspendActions;
    bool m_suspendActionsHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
