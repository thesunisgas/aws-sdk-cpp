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

#include <aws/glue/model/ConnectionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace ConnectionTypeMapper
      {

        static const int JDBC_HASH = HashingUtils::HashString("JDBC");
        static const int SFTP_HASH = HashingUtils::HashString("SFTP");
        static const int MONGODB_HASH = HashingUtils::HashString("MONGODB");
        static const int KAFKA_HASH = HashingUtils::HashString("KAFKA");


        ConnectionType GetConnectionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JDBC_HASH)
          {
            return ConnectionType::JDBC;
          }
          else if (hashCode == SFTP_HASH)
          {
            return ConnectionType::SFTP;
          }
          else if (hashCode == MONGODB_HASH)
          {
            return ConnectionType::MONGODB;
          }
          else if (hashCode == KAFKA_HASH)
          {
            return ConnectionType::KAFKA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectionType>(hashCode);
          }

          return ConnectionType::NOT_SET;
        }

        Aws::String GetNameForConnectionType(ConnectionType enumValue)
        {
          switch(enumValue)
          {
          case ConnectionType::JDBC:
            return "JDBC";
          case ConnectionType::SFTP:
            return "SFTP";
          case ConnectionType::MONGODB:
            return "MONGODB";
          case ConnectionType::KAFKA:
            return "KAFKA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectionTypeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
