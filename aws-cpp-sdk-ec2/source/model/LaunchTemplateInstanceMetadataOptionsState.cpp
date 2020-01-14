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

#include <aws/ec2/model/LaunchTemplateInstanceMetadataOptionsState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace LaunchTemplateInstanceMetadataOptionsStateMapper
      {

        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int applied_HASH = HashingUtils::HashString("applied");


        LaunchTemplateInstanceMetadataOptionsState GetLaunchTemplateInstanceMetadataOptionsStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return LaunchTemplateInstanceMetadataOptionsState::pending;
          }
          else if (hashCode == applied_HASH)
          {
            return LaunchTemplateInstanceMetadataOptionsState::applied;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LaunchTemplateInstanceMetadataOptionsState>(hashCode);
          }

          return LaunchTemplateInstanceMetadataOptionsState::NOT_SET;
        }

        Aws::String GetNameForLaunchTemplateInstanceMetadataOptionsState(LaunchTemplateInstanceMetadataOptionsState enumValue)
        {
          switch(enumValue)
          {
          case LaunchTemplateInstanceMetadataOptionsState::pending:
            return "pending";
          case LaunchTemplateInstanceMetadataOptionsState::applied:
            return "applied";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LaunchTemplateInstanceMetadataOptionsStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
