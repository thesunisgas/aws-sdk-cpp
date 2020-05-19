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

#include <aws/comprehendmedical/model/ICD10CMTraitName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComprehendMedical
  {
    namespace Model
    {
      namespace ICD10CMTraitNameMapper
      {

        static const int NEGATION_HASH = HashingUtils::HashString("NEGATION");
        static const int DIAGNOSIS_HASH = HashingUtils::HashString("DIAGNOSIS");
        static const int SIGN_HASH = HashingUtils::HashString("SIGN");
        static const int SYMPTOM_HASH = HashingUtils::HashString("SYMPTOM");


        ICD10CMTraitName GetICD10CMTraitNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NEGATION_HASH)
          {
            return ICD10CMTraitName::NEGATION;
          }
          else if (hashCode == DIAGNOSIS_HASH)
          {
            return ICD10CMTraitName::DIAGNOSIS;
          }
          else if (hashCode == SIGN_HASH)
          {
            return ICD10CMTraitName::SIGN;
          }
          else if (hashCode == SYMPTOM_HASH)
          {
            return ICD10CMTraitName::SYMPTOM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ICD10CMTraitName>(hashCode);
          }

          return ICD10CMTraitName::NOT_SET;
        }

        Aws::String GetNameForICD10CMTraitName(ICD10CMTraitName enumValue)
        {
          switch(enumValue)
          {
          case ICD10CMTraitName::NEGATION:
            return "NEGATION";
          case ICD10CMTraitName::DIAGNOSIS:
            return "DIAGNOSIS";
          case ICD10CMTraitName::SIGN:
            return "SIGN";
          case ICD10CMTraitName::SYMPTOM:
            return "SYMPTOM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ICD10CMTraitNameMapper
    } // namespace Model
  } // namespace ComprehendMedical
} // namespace Aws
