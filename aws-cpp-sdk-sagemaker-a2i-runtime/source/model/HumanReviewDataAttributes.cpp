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

#include <aws/sagemaker-a2i-runtime/model/HumanReviewDataAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AugmentedAIRuntime
{
namespace Model
{

HumanReviewDataAttributes::HumanReviewDataAttributes() : 
    m_contentClassifiersHasBeenSet(false)
{
}

HumanReviewDataAttributes::HumanReviewDataAttributes(JsonView jsonValue) : 
    m_contentClassifiersHasBeenSet(false)
{
  *this = jsonValue;
}

HumanReviewDataAttributes& HumanReviewDataAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContentClassifiers"))
  {
    Array<JsonView> contentClassifiersJsonList = jsonValue.GetArray("ContentClassifiers");
    for(unsigned contentClassifiersIndex = 0; contentClassifiersIndex < contentClassifiersJsonList.GetLength(); ++contentClassifiersIndex)
    {
      m_contentClassifiers.push_back(ContentClassifierMapper::GetContentClassifierForName(contentClassifiersJsonList[contentClassifiersIndex].AsString()));
    }
    m_contentClassifiersHasBeenSet = true;
  }

  return *this;
}

JsonValue HumanReviewDataAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_contentClassifiersHasBeenSet)
  {
   Array<JsonValue> contentClassifiersJsonList(m_contentClassifiers.size());
   for(unsigned contentClassifiersIndex = 0; contentClassifiersIndex < contentClassifiersJsonList.GetLength(); ++contentClassifiersIndex)
   {
     contentClassifiersJsonList[contentClassifiersIndex].AsString(ContentClassifierMapper::GetNameForContentClassifier(m_contentClassifiers[contentClassifiersIndex]));
   }
   payload.WithArray("ContentClassifiers", std::move(contentClassifiersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AugmentedAIRuntime
} // namespace Aws
