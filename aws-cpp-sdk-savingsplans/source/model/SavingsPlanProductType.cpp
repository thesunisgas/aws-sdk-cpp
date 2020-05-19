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

#include <aws/savingsplans/model/SavingsPlanProductType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SavingsPlans
  {
    namespace Model
    {
      namespace SavingsPlanProductTypeMapper
      {

        static const int EC2_HASH = HashingUtils::HashString("EC2");
        static const int Fargate_HASH = HashingUtils::HashString("Fargate");


        SavingsPlanProductType GetSavingsPlanProductTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EC2_HASH)
          {
            return SavingsPlanProductType::EC2;
          }
          else if (hashCode == Fargate_HASH)
          {
            return SavingsPlanProductType::Fargate;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SavingsPlanProductType>(hashCode);
          }

          return SavingsPlanProductType::NOT_SET;
        }

        Aws::String GetNameForSavingsPlanProductType(SavingsPlanProductType enumValue)
        {
          switch(enumValue)
          {
          case SavingsPlanProductType::EC2:
            return "EC2";
          case SavingsPlanProductType::Fargate:
            return "Fargate";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SavingsPlanProductTypeMapper
    } // namespace Model
  } // namespace SavingsPlans
} // namespace Aws
