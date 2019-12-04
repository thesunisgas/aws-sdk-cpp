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

#include <aws/rds/model/TargetType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RDS
  {
    namespace Model
    {
      namespace TargetTypeMapper
      {

        static const int RDS_INSTANCE_HASH = HashingUtils::HashString("RDS_INSTANCE");
        static const int RDS_SERVERLESS_ENDPOINT_HASH = HashingUtils::HashString("RDS_SERVERLESS_ENDPOINT");
        static const int TRACKED_CLUSTER_HASH = HashingUtils::HashString("TRACKED_CLUSTER");


        TargetType GetTargetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RDS_INSTANCE_HASH)
          {
            return TargetType::RDS_INSTANCE;
          }
          else if (hashCode == RDS_SERVERLESS_ENDPOINT_HASH)
          {
            return TargetType::RDS_SERVERLESS_ENDPOINT;
          }
          else if (hashCode == TRACKED_CLUSTER_HASH)
          {
            return TargetType::TRACKED_CLUSTER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetType>(hashCode);
          }

          return TargetType::NOT_SET;
        }

        Aws::String GetNameForTargetType(TargetType enumValue)
        {
          switch(enumValue)
          {
          case TargetType::RDS_INSTANCE:
            return "RDS_INSTANCE";
          case TargetType::RDS_SERVERLESS_ENDPOINT:
            return "RDS_SERVERLESS_ENDPOINT";
          case TargetType::TRACKED_CLUSTER:
            return "TRACKED_CLUSTER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetTypeMapper
    } // namespace Model
  } // namespace RDS
} // namespace Aws
