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

#include <aws/chime/model/UserType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Chime
  {
    namespace Model
    {
      namespace UserTypeMapper
      {

        static const int PrivateUser_HASH = HashingUtils::HashString("PrivateUser");
        static const int SharedDevice_HASH = HashingUtils::HashString("SharedDevice");


        UserType GetUserTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PrivateUser_HASH)
          {
            return UserType::PrivateUser;
          }
          else if (hashCode == SharedDevice_HASH)
          {
            return UserType::SharedDevice;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UserType>(hashCode);
          }

          return UserType::NOT_SET;
        }

        Aws::String GetNameForUserType(UserType enumValue)
        {
          switch(enumValue)
          {
          case UserType::PrivateUser:
            return "PrivateUser";
          case UserType::SharedDevice:
            return "SharedDevice";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UserTypeMapper
    } // namespace Model
  } // namespace Chime
} // namespace Aws
