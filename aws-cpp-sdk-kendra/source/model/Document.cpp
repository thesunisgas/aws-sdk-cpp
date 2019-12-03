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

#include <aws/kendra/model/Document.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

Document::Document() : 
    m_idHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_blobHasBeenSet(false),
    m_s3PathHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_accessControlListHasBeenSet(false),
    m_contentType(ContentType::NOT_SET),
    m_contentTypeHasBeenSet(false)
{
}

Document::Document(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_blobHasBeenSet(false),
    m_s3PathHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_accessControlListHasBeenSet(false),
    m_contentType(ContentType::NOT_SET),
    m_contentTypeHasBeenSet(false)
{
  *this = jsonValue;
}

Document& Document::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Blob"))
  {
    m_blob = HashingUtils::Base64Decode(jsonValue.GetString("Blob"));
    m_blobHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Path"))
  {
    m_s3Path = jsonValue.GetObject("S3Path");

    m_s3PathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Attributes"))
  {
    Array<JsonView> attributesJsonList = jsonValue.GetArray("Attributes");
    for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
    {
      m_attributes.push_back(attributesJsonList[attributesIndex].AsObject());
    }
    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccessControlList"))
  {
    Array<JsonView> accessControlListJsonList = jsonValue.GetArray("AccessControlList");
    for(unsigned accessControlListIndex = 0; accessControlListIndex < accessControlListJsonList.GetLength(); ++accessControlListIndex)
    {
      m_accessControlList.push_back(accessControlListJsonList[accessControlListIndex].AsObject());
    }
    m_accessControlListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentType"))
  {
    m_contentType = ContentTypeMapper::GetContentTypeForName(jsonValue.GetString("ContentType"));

    m_contentTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue Document::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_blobHasBeenSet)
  {
   payload.WithString("Blob", HashingUtils::Base64Encode(m_blob));
  }

  if(m_s3PathHasBeenSet)
  {
   payload.WithObject("S3Path", m_s3Path.Jsonize());

  }

  if(m_attributesHasBeenSet)
  {
   Array<JsonValue> attributesJsonList(m_attributes.size());
   for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
   {
     attributesJsonList[attributesIndex].AsObject(m_attributes[attributesIndex].Jsonize());
   }
   payload.WithArray("Attributes", std::move(attributesJsonList));

  }

  if(m_accessControlListHasBeenSet)
  {
   Array<JsonValue> accessControlListJsonList(m_accessControlList.size());
   for(unsigned accessControlListIndex = 0; accessControlListIndex < accessControlListJsonList.GetLength(); ++accessControlListIndex)
   {
     accessControlListJsonList[accessControlListIndex].AsObject(m_accessControlList[accessControlListIndex].Jsonize());
   }
   payload.WithArray("AccessControlList", std::move(accessControlListJsonList));

  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("ContentType", ContentTypeMapper::GetNameForContentType(m_contentType));
  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
