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

#include <aws/frauddetector/model/ModelEndpointStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FraudDetector
  {
    namespace Model
    {
      namespace ModelEndpointStatusMapper
      {

        static const int ASSOCIATED_HASH = HashingUtils::HashString("ASSOCIATED");
        static const int DISSOCIATED_HASH = HashingUtils::HashString("DISSOCIATED");


        ModelEndpointStatus GetModelEndpointStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASSOCIATED_HASH)
          {
            return ModelEndpointStatus::ASSOCIATED;
          }
          else if (hashCode == DISSOCIATED_HASH)
          {
            return ModelEndpointStatus::DISSOCIATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelEndpointStatus>(hashCode);
          }

          return ModelEndpointStatus::NOT_SET;
        }

        Aws::String GetNameForModelEndpointStatus(ModelEndpointStatus enumValue)
        {
          switch(enumValue)
          {
          case ModelEndpointStatus::ASSOCIATED:
            return "ASSOCIATED";
          case ModelEndpointStatus::DISSOCIATED:
            return "DISSOCIATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModelEndpointStatusMapper
    } // namespace Model
  } // namespace FraudDetector
} // namespace Aws
