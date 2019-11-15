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

#include <aws/eks/model/UpdateType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EKS
  {
    namespace Model
    {
      namespace UpdateTypeMapper
      {

        static const int VersionUpdate_HASH = HashingUtils::HashString("VersionUpdate");
        static const int EndpointAccessUpdate_HASH = HashingUtils::HashString("EndpointAccessUpdate");
        static const int LoggingUpdate_HASH = HashingUtils::HashString("LoggingUpdate");
        static const int ConfigUpdate_HASH = HashingUtils::HashString("ConfigUpdate");


        UpdateType GetUpdateTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VersionUpdate_HASH)
          {
            return UpdateType::VersionUpdate;
          }
          else if (hashCode == EndpointAccessUpdate_HASH)
          {
            return UpdateType::EndpointAccessUpdate;
          }
          else if (hashCode == LoggingUpdate_HASH)
          {
            return UpdateType::LoggingUpdate;
          }
          else if (hashCode == ConfigUpdate_HASH)
          {
            return UpdateType::ConfigUpdate;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdateType>(hashCode);
          }

          return UpdateType::NOT_SET;
        }

        Aws::String GetNameForUpdateType(UpdateType enumValue)
        {
          switch(enumValue)
          {
          case UpdateType::VersionUpdate:
            return "VersionUpdate";
          case UpdateType::EndpointAccessUpdate:
            return "EndpointAccessUpdate";
          case UpdateType::LoggingUpdate:
            return "LoggingUpdate";
          case UpdateType::ConfigUpdate:
            return "ConfigUpdate";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UpdateTypeMapper
    } // namespace Model
  } // namespace EKS
} // namespace Aws
