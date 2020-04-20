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

#include <aws/synthetics/model/CanaryCodeInput.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Synthetics
{
namespace Model
{

CanaryCodeInput::CanaryCodeInput() : 
    m_s3BucketHasBeenSet(false),
    m_s3KeyHasBeenSet(false),
    m_s3VersionHasBeenSet(false),
    m_zipFileHasBeenSet(false),
    m_handlerHasBeenSet(false)
{
}

CanaryCodeInput::CanaryCodeInput(JsonView jsonValue) : 
    m_s3BucketHasBeenSet(false),
    m_s3KeyHasBeenSet(false),
    m_s3VersionHasBeenSet(false),
    m_zipFileHasBeenSet(false),
    m_handlerHasBeenSet(false)
{
  *this = jsonValue;
}

CanaryCodeInput& CanaryCodeInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Bucket"))
  {
    m_s3Bucket = jsonValue.GetString("S3Bucket");

    m_s3BucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Key"))
  {
    m_s3Key = jsonValue.GetString("S3Key");

    m_s3KeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Version"))
  {
    m_s3Version = jsonValue.GetString("S3Version");

    m_s3VersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ZipFile"))
  {
    m_zipFile = HashingUtils::Base64Decode(jsonValue.GetString("ZipFile"));
    m_zipFileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Handler"))
  {
    m_handler = jsonValue.GetString("Handler");

    m_handlerHasBeenSet = true;
  }

  return *this;
}

JsonValue CanaryCodeInput::Jsonize() const
{
  JsonValue payload;

  if(m_s3BucketHasBeenSet)
  {
   payload.WithString("S3Bucket", m_s3Bucket);

  }

  if(m_s3KeyHasBeenSet)
  {
   payload.WithString("S3Key", m_s3Key);

  }

  if(m_s3VersionHasBeenSet)
  {
   payload.WithString("S3Version", m_s3Version);

  }

  if(m_zipFileHasBeenSet)
  {
   payload.WithString("ZipFile", HashingUtils::Base64Encode(m_zipFile));
  }

  if(m_handlerHasBeenSet)
  {
   payload.WithString("Handler", m_handler);

  }

  return payload;
}

} // namespace Model
} // namespace Synthetics
} // namespace Aws
