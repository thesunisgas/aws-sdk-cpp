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

#include <aws/elastic-inference/model/AcceleratorType.h>
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

AcceleratorType::AcceleratorType() : 
    m_acceleratorTypeNameHasBeenSet(false),
    m_memoryInfoHasBeenSet(false),
    m_throughputInfoHasBeenSet(false)
{
}

AcceleratorType::AcceleratorType(JsonView jsonValue) : 
    m_acceleratorTypeNameHasBeenSet(false),
    m_memoryInfoHasBeenSet(false),
    m_throughputInfoHasBeenSet(false)
{
  *this = jsonValue;
}

AcceleratorType& AcceleratorType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("acceleratorTypeName"))
  {
    m_acceleratorTypeName = jsonValue.GetString("acceleratorTypeName");

    m_acceleratorTypeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("memoryInfo"))
  {
    m_memoryInfo = jsonValue.GetObject("memoryInfo");

    m_memoryInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("throughputInfo"))
  {
    Array<JsonView> throughputInfoJsonList = jsonValue.GetArray("throughputInfo");
    for(unsigned throughputInfoIndex = 0; throughputInfoIndex < throughputInfoJsonList.GetLength(); ++throughputInfoIndex)
    {
      m_throughputInfo.push_back(throughputInfoJsonList[throughputInfoIndex].AsObject());
    }
    m_throughputInfoHasBeenSet = true;
  }

  return *this;
}

JsonValue AcceleratorType::Jsonize() const
{
  JsonValue payload;

  if(m_acceleratorTypeNameHasBeenSet)
  {
   payload.WithString("acceleratorTypeName", m_acceleratorTypeName);

  }

  if(m_memoryInfoHasBeenSet)
  {
   payload.WithObject("memoryInfo", m_memoryInfo.Jsonize());

  }

  if(m_throughputInfoHasBeenSet)
  {
   Array<JsonValue> throughputInfoJsonList(m_throughputInfo.size());
   for(unsigned throughputInfoIndex = 0; throughputInfoIndex < throughputInfoJsonList.GetLength(); ++throughputInfoIndex)
   {
     throughputInfoJsonList[throughputInfoIndex].AsObject(m_throughputInfo[throughputInfoIndex].Jsonize());
   }
   payload.WithArray("throughputInfo", std::move(throughputInfoJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ElasticInference
} // namespace Aws
