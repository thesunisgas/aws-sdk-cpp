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

#include <aws/iotsitewise/model/ImageFile.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

ImageFile::ImageFile() : 
    m_encodedStringHasBeenSet(false),
    m_fileType(ImageFileType::NOT_SET),
    m_fileTypeHasBeenSet(false)
{
}

ImageFile::ImageFile(JsonView jsonValue) : 
    m_encodedStringHasBeenSet(false),
    m_fileType(ImageFileType::NOT_SET),
    m_fileTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ImageFile& ImageFile::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("encodedString"))
  {
    m_encodedString = HashingUtils::Base64Decode(jsonValue.GetString("encodedString"));
    m_encodedStringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fileType"))
  {
    m_fileType = ImageFileTypeMapper::GetImageFileTypeForName(jsonValue.GetString("fileType"));

    m_fileTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ImageFile::Jsonize() const
{
  JsonValue payload;

  if(m_encodedStringHasBeenSet)
  {
   payload.WithString("encodedString", HashingUtils::Base64Encode(m_encodedString));
  }

  if(m_fileTypeHasBeenSet)
  {
   payload.WithString("fileType", ImageFileTypeMapper::GetNameForImageFileType(m_fileType));
  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
