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

#include <aws/devicefarm/model/TestGridSessionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DeviceFarm
  {
    namespace Model
    {
      namespace TestGridSessionStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int CLOSED_HASH = HashingUtils::HashString("CLOSED");
        static const int ERRORED_HASH = HashingUtils::HashString("ERRORED");


        TestGridSessionStatus GetTestGridSessionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return TestGridSessionStatus::ACTIVE;
          }
          else if (hashCode == CLOSED_HASH)
          {
            return TestGridSessionStatus::CLOSED;
          }
          else if (hashCode == ERRORED_HASH)
          {
            return TestGridSessionStatus::ERRORED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TestGridSessionStatus>(hashCode);
          }

          return TestGridSessionStatus::NOT_SET;
        }

        Aws::String GetNameForTestGridSessionStatus(TestGridSessionStatus enumValue)
        {
          switch(enumValue)
          {
          case TestGridSessionStatus::ACTIVE:
            return "ACTIVE";
          case TestGridSessionStatus::CLOSED:
            return "CLOSED";
          case TestGridSessionStatus::ERRORED:
            return "ERRORED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TestGridSessionStatusMapper
    } // namespace Model
  } // namespace DeviceFarm
} // namespace Aws
