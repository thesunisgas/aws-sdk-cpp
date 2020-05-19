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

#include <aws/dataexchange/model/ServerSideEncryptionTypes.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataExchange
  {
    namespace Model
    {
      namespace ServerSideEncryptionTypesMapper
      {

        static const int aws_kms_HASH = HashingUtils::HashString("aws:kms");
        static const int AES256_HASH = HashingUtils::HashString("AES256");


        ServerSideEncryptionTypes GetServerSideEncryptionTypesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == aws_kms_HASH)
          {
            return ServerSideEncryptionTypes::aws_kms;
          }
          else if (hashCode == AES256_HASH)
          {
            return ServerSideEncryptionTypes::AES256;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServerSideEncryptionTypes>(hashCode);
          }

          return ServerSideEncryptionTypes::NOT_SET;
        }

        Aws::String GetNameForServerSideEncryptionTypes(ServerSideEncryptionTypes enumValue)
        {
          switch(enumValue)
          {
          case ServerSideEncryptionTypes::aws_kms:
            return "aws:kms";
          case ServerSideEncryptionTypes::AES256:
            return "AES256";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServerSideEncryptionTypesMapper
    } // namespace Model
  } // namespace DataExchange
} // namespace Aws
