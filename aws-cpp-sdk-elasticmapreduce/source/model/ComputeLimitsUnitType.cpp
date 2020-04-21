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

#include <aws/elasticmapreduce/model/ComputeLimitsUnitType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMR
  {
    namespace Model
    {
      namespace ComputeLimitsUnitTypeMapper
      {

        static const int InstanceFleetUnits_HASH = HashingUtils::HashString("InstanceFleetUnits");
        static const int Instances_HASH = HashingUtils::HashString("Instances");
        static const int VCPU_HASH = HashingUtils::HashString("VCPU");


        ComputeLimitsUnitType GetComputeLimitsUnitTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InstanceFleetUnits_HASH)
          {
            return ComputeLimitsUnitType::InstanceFleetUnits;
          }
          else if (hashCode == Instances_HASH)
          {
            return ComputeLimitsUnitType::Instances;
          }
          else if (hashCode == VCPU_HASH)
          {
            return ComputeLimitsUnitType::VCPU;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComputeLimitsUnitType>(hashCode);
          }

          return ComputeLimitsUnitType::NOT_SET;
        }

        Aws::String GetNameForComputeLimitsUnitType(ComputeLimitsUnitType enumValue)
        {
          switch(enumValue)
          {
          case ComputeLimitsUnitType::InstanceFleetUnits:
            return "InstanceFleetUnits";
          case ComputeLimitsUnitType::Instances:
            return "Instances";
          case ComputeLimitsUnitType::VCPU:
            return "VCPU";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComputeLimitsUnitTypeMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
