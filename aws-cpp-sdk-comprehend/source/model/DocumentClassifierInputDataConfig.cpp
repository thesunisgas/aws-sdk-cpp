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

#include <aws/comprehend/model/DocumentClassifierInputDataConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

DocumentClassifierInputDataConfig::DocumentClassifierInputDataConfig() : 
    m_s3UriHasBeenSet(false),
    m_labelDelimiterHasBeenSet(false)
{
}

DocumentClassifierInputDataConfig::DocumentClassifierInputDataConfig(JsonView jsonValue) : 
    m_s3UriHasBeenSet(false),
    m_labelDelimiterHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentClassifierInputDataConfig& DocumentClassifierInputDataConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Uri"))
  {
    m_s3Uri = jsonValue.GetString("S3Uri");

    m_s3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LabelDelimiter"))
  {
    m_labelDelimiter = jsonValue.GetString("LabelDelimiter");

    m_labelDelimiterHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentClassifierInputDataConfig::Jsonize() const
{
  JsonValue payload;

  if(m_s3UriHasBeenSet)
  {
   payload.WithString("S3Uri", m_s3Uri);

  }

  if(m_labelDelimiterHasBeenSet)
  {
   payload.WithString("LabelDelimiter", m_labelDelimiter);

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
