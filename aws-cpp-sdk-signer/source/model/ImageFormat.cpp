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

#include <aws/signer/model/ImageFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace signer
  {
    namespace Model
    {
      namespace ImageFormatMapper
      {

        static const int JSON_HASH = HashingUtils::HashString("JSON");
        static const int JSONEmbedded_HASH = HashingUtils::HashString("JSONEmbedded");
        static const int JSONDetached_HASH = HashingUtils::HashString("JSONDetached");


        ImageFormat GetImageFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JSON_HASH)
          {
            return ImageFormat::JSON;
          }
          else if (hashCode == JSONEmbedded_HASH)
          {
            return ImageFormat::JSONEmbedded;
          }
          else if (hashCode == JSONDetached_HASH)
          {
            return ImageFormat::JSONDetached;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageFormat>(hashCode);
          }

          return ImageFormat::NOT_SET;
        }

        Aws::String GetNameForImageFormat(ImageFormat enumValue)
        {
          switch(enumValue)
          {
          case ImageFormat::JSON:
            return "JSON";
          case ImageFormat::JSONEmbedded:
            return "JSONEmbedded";
          case ImageFormat::JSONDetached:
            return "JSONDetached";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImageFormatMapper
    } // namespace Model
  } // namespace signer
} // namespace Aws
