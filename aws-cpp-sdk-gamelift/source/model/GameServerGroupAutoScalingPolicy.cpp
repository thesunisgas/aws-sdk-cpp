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

#include <aws/gamelift/model/GameServerGroupAutoScalingPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

GameServerGroupAutoScalingPolicy::GameServerGroupAutoScalingPolicy() : 
    m_estimatedInstanceWarmup(0),
    m_estimatedInstanceWarmupHasBeenSet(false),
    m_targetTrackingConfigurationHasBeenSet(false)
{
}

GameServerGroupAutoScalingPolicy::GameServerGroupAutoScalingPolicy(JsonView jsonValue) : 
    m_estimatedInstanceWarmup(0),
    m_estimatedInstanceWarmupHasBeenSet(false),
    m_targetTrackingConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

GameServerGroupAutoScalingPolicy& GameServerGroupAutoScalingPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EstimatedInstanceWarmup"))
  {
    m_estimatedInstanceWarmup = jsonValue.GetInteger("EstimatedInstanceWarmup");

    m_estimatedInstanceWarmupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetTrackingConfiguration"))
  {
    m_targetTrackingConfiguration = jsonValue.GetObject("TargetTrackingConfiguration");

    m_targetTrackingConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue GameServerGroupAutoScalingPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_estimatedInstanceWarmupHasBeenSet)
  {
   payload.WithInteger("EstimatedInstanceWarmup", m_estimatedInstanceWarmup);

  }

  if(m_targetTrackingConfigurationHasBeenSet)
  {
   payload.WithObject("TargetTrackingConfiguration", m_targetTrackingConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
