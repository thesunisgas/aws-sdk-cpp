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

#include <aws/managedblockchain/model/NodeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ManagedBlockchain
{
namespace Model
{

NodeConfiguration::NodeConfiguration() : 
    m_instanceTypeHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_logPublishingConfigurationHasBeenSet(false)
{
}

NodeConfiguration::NodeConfiguration(JsonView jsonValue) : 
    m_instanceTypeHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_logPublishingConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

NodeConfiguration& NodeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = jsonValue.GetString("InstanceType");

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("AvailabilityZone");

    m_availabilityZoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogPublishingConfiguration"))
  {
    m_logPublishingConfiguration = jsonValue.GetObject("LogPublishingConfiguration");

    m_logPublishingConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue NodeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", m_instanceType);

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("AvailabilityZone", m_availabilityZone);

  }

  if(m_logPublishingConfigurationHasBeenSet)
  {
   payload.WithObject("LogPublishingConfiguration", m_logPublishingConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
