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

#include <aws/sagemaker/model/CandidateStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace CandidateStatusMapper
      {

        static const int Completed_HASH = HashingUtils::HashString("Completed");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Stopped_HASH = HashingUtils::HashString("Stopped");
        static const int Stopping_HASH = HashingUtils::HashString("Stopping");


        CandidateStatus GetCandidateStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Completed_HASH)
          {
            return CandidateStatus::Completed;
          }
          else if (hashCode == InProgress_HASH)
          {
            return CandidateStatus::InProgress;
          }
          else if (hashCode == Failed_HASH)
          {
            return CandidateStatus::Failed;
          }
          else if (hashCode == Stopped_HASH)
          {
            return CandidateStatus::Stopped;
          }
          else if (hashCode == Stopping_HASH)
          {
            return CandidateStatus::Stopping;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CandidateStatus>(hashCode);
          }

          return CandidateStatus::NOT_SET;
        }

        Aws::String GetNameForCandidateStatus(CandidateStatus enumValue)
        {
          switch(enumValue)
          {
          case CandidateStatus::Completed:
            return "Completed";
          case CandidateStatus::InProgress:
            return "InProgress";
          case CandidateStatus::Failed:
            return "Failed";
          case CandidateStatus::Stopped:
            return "Stopped";
          case CandidateStatus::Stopping:
            return "Stopping";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CandidateStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
