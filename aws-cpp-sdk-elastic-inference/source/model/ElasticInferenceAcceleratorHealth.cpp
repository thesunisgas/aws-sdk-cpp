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

#include <aws/elastic-inference/model/ElasticInferenceAcceleratorHealth.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticInference
{
namespace Model
{

ElasticInferenceAcceleratorHealth::ElasticInferenceAcceleratorHealth() : 
    m_statusHasBeenSet(false)
{
}

ElasticInferenceAcceleratorHealth::ElasticInferenceAcceleratorHealth(JsonView jsonValue) : 
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

ElasticInferenceAcceleratorHealth& ElasticInferenceAcceleratorHealth::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue ElasticInferenceAcceleratorHealth::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticInference
} // namespace Aws
