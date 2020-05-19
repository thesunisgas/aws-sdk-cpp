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

#include <aws/snowball/model/SnowballType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Snowball
  {
    namespace Model
    {
      namespace SnowballTypeMapper
      {

        static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
        static const int EDGE_HASH = HashingUtils::HashString("EDGE");
        static const int EDGE_C_HASH = HashingUtils::HashString("EDGE_C");
        static const int EDGE_CG_HASH = HashingUtils::HashString("EDGE_CG");
        static const int EDGE_S_HASH = HashingUtils::HashString("EDGE_S");


        SnowballType GetSnowballTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STANDARD_HASH)
          {
            return SnowballType::STANDARD;
          }
          else if (hashCode == EDGE_HASH)
          {
            return SnowballType::EDGE;
          }
          else if (hashCode == EDGE_C_HASH)
          {
            return SnowballType::EDGE_C;
          }
          else if (hashCode == EDGE_CG_HASH)
          {
            return SnowballType::EDGE_CG;
          }
          else if (hashCode == EDGE_S_HASH)
          {
            return SnowballType::EDGE_S;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SnowballType>(hashCode);
          }

          return SnowballType::NOT_SET;
        }

        Aws::String GetNameForSnowballType(SnowballType enumValue)
        {
          switch(enumValue)
          {
          case SnowballType::STANDARD:
            return "STANDARD";
          case SnowballType::EDGE:
            return "EDGE";
          case SnowballType::EDGE_C:
            return "EDGE_C";
          case SnowballType::EDGE_CG:
            return "EDGE_CG";
          case SnowballType::EDGE_S:
            return "EDGE_S";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SnowballTypeMapper
    } // namespace Model
  } // namespace Snowball
} // namespace Aws
