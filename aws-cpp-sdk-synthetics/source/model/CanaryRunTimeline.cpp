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

#include <aws/synthetics/model/CanaryRunTimeline.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Synthetics
{
namespace Model
{

CanaryRunTimeline::CanaryRunTimeline() : 
    m_startedHasBeenSet(false),
    m_completedHasBeenSet(false)
{
}

CanaryRunTimeline::CanaryRunTimeline(JsonView jsonValue) : 
    m_startedHasBeenSet(false),
    m_completedHasBeenSet(false)
{
  *this = jsonValue;
}

CanaryRunTimeline& CanaryRunTimeline::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Started"))
  {
    m_started = jsonValue.GetDouble("Started");

    m_startedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Completed"))
  {
    m_completed = jsonValue.GetDouble("Completed");

    m_completedHasBeenSet = true;
  }

  return *this;
}

JsonValue CanaryRunTimeline::Jsonize() const
{
  JsonValue payload;

  if(m_startedHasBeenSet)
  {
   payload.WithDouble("Started", m_started.SecondsWithMSPrecision());
  }

  if(m_completedHasBeenSet)
  {
   payload.WithDouble("Completed", m_completed.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Synthetics
} // namespace Aws
