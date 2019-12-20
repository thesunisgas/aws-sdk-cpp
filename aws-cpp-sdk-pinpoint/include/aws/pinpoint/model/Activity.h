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

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/ConditionalSplitActivity.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/EmailMessageActivity.h>
#include <aws/pinpoint/model/HoldoutActivity.h>
#include <aws/pinpoint/model/MultiConditionalSplitActivity.h>
#include <aws/pinpoint/model/RandomSplitActivity.h>
#include <aws/pinpoint/model/WaitActivity.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the configuration and other settings for an activity in a
   * journey.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/Activity">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API Activity
  {
  public:
    Activity();
    Activity(Aws::Utils::Json::JsonView jsonValue);
    Activity& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The settings for a yes/no split activity. This type of activity sends
     * participants down one of two paths in a journey, based on conditions that you
     * specify.</p>
     */
    inline const ConditionalSplitActivity& GetConditionalSplit() const{ return m_conditionalSplit; }

    /**
     * <p>The settings for a yes/no split activity. This type of activity sends
     * participants down one of two paths in a journey, based on conditions that you
     * specify.</p>
     */
    inline bool ConditionalSplitHasBeenSet() const { return m_conditionalSplitHasBeenSet; }

    /**
     * <p>The settings for a yes/no split activity. This type of activity sends
     * participants down one of two paths in a journey, based on conditions that you
     * specify.</p>
     */
    inline void SetConditionalSplit(const ConditionalSplitActivity& value) { m_conditionalSplitHasBeenSet = true; m_conditionalSplit = value; }

    /**
     * <p>The settings for a yes/no split activity. This type of activity sends
     * participants down one of two paths in a journey, based on conditions that you
     * specify.</p>
     */
    inline void SetConditionalSplit(ConditionalSplitActivity&& value) { m_conditionalSplitHasBeenSet = true; m_conditionalSplit = std::move(value); }

    /**
     * <p>The settings for a yes/no split activity. This type of activity sends
     * participants down one of two paths in a journey, based on conditions that you
     * specify.</p>
     */
    inline Activity& WithConditionalSplit(const ConditionalSplitActivity& value) { SetConditionalSplit(value); return *this;}

    /**
     * <p>The settings for a yes/no split activity. This type of activity sends
     * participants down one of two paths in a journey, based on conditions that you
     * specify.</p>
     */
    inline Activity& WithConditionalSplit(ConditionalSplitActivity&& value) { SetConditionalSplit(std::move(value)); return *this;}


    /**
     * <p>The custom description of the activity.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The custom description of the activity.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The custom description of the activity.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The custom description of the activity.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The custom description of the activity.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The custom description of the activity.</p>
     */
    inline Activity& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The custom description of the activity.</p>
     */
    inline Activity& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The custom description of the activity.</p>
     */
    inline Activity& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The settings for an email activity. This type of activity sends an email
     * message to participants.</p>
     */
    inline const EmailMessageActivity& GetEMAIL() const{ return m_eMAIL; }

    /**
     * <p>The settings for an email activity. This type of activity sends an email
     * message to participants.</p>
     */
    inline bool EMAILHasBeenSet() const { return m_eMAILHasBeenSet; }

    /**
     * <p>The settings for an email activity. This type of activity sends an email
     * message to participants.</p>
     */
    inline void SetEMAIL(const EmailMessageActivity& value) { m_eMAILHasBeenSet = true; m_eMAIL = value; }

    /**
     * <p>The settings for an email activity. This type of activity sends an email
     * message to participants.</p>
     */
    inline void SetEMAIL(EmailMessageActivity&& value) { m_eMAILHasBeenSet = true; m_eMAIL = std::move(value); }

    /**
     * <p>The settings for an email activity. This type of activity sends an email
     * message to participants.</p>
     */
    inline Activity& WithEMAIL(const EmailMessageActivity& value) { SetEMAIL(value); return *this;}

    /**
     * <p>The settings for an email activity. This type of activity sends an email
     * message to participants.</p>
     */
    inline Activity& WithEMAIL(EmailMessageActivity&& value) { SetEMAIL(std::move(value)); return *this;}


    /**
     * <p>The settings for a holdout activity. This type of activity stops a journey
     * for a specified percentage of participants.</p>
     */
    inline const HoldoutActivity& GetHoldout() const{ return m_holdout; }

    /**
     * <p>The settings for a holdout activity. This type of activity stops a journey
     * for a specified percentage of participants.</p>
     */
    inline bool HoldoutHasBeenSet() const { return m_holdoutHasBeenSet; }

    /**
     * <p>The settings for a holdout activity. This type of activity stops a journey
     * for a specified percentage of participants.</p>
     */
    inline void SetHoldout(const HoldoutActivity& value) { m_holdoutHasBeenSet = true; m_holdout = value; }

    /**
     * <p>The settings for a holdout activity. This type of activity stops a journey
     * for a specified percentage of participants.</p>
     */
    inline void SetHoldout(HoldoutActivity&& value) { m_holdoutHasBeenSet = true; m_holdout = std::move(value); }

    /**
     * <p>The settings for a holdout activity. This type of activity stops a journey
     * for a specified percentage of participants.</p>
     */
    inline Activity& WithHoldout(const HoldoutActivity& value) { SetHoldout(value); return *this;}

    /**
     * <p>The settings for a holdout activity. This type of activity stops a journey
     * for a specified percentage of participants.</p>
     */
    inline Activity& WithHoldout(HoldoutActivity&& value) { SetHoldout(std::move(value)); return *this;}


    /**
     * <p>The settings for a multivariate split activity. This type of activity sends
     * participants down one of as many as five paths (including a default <i>Else</i>
     * path) in a journey, based on conditions that you specify.</p>
     */
    inline const MultiConditionalSplitActivity& GetMultiCondition() const{ return m_multiCondition; }

    /**
     * <p>The settings for a multivariate split activity. This type of activity sends
     * participants down one of as many as five paths (including a default <i>Else</i>
     * path) in a journey, based on conditions that you specify.</p>
     */
    inline bool MultiConditionHasBeenSet() const { return m_multiConditionHasBeenSet; }

    /**
     * <p>The settings for a multivariate split activity. This type of activity sends
     * participants down one of as many as five paths (including a default <i>Else</i>
     * path) in a journey, based on conditions that you specify.</p>
     */
    inline void SetMultiCondition(const MultiConditionalSplitActivity& value) { m_multiConditionHasBeenSet = true; m_multiCondition = value; }

    /**
     * <p>The settings for a multivariate split activity. This type of activity sends
     * participants down one of as many as five paths (including a default <i>Else</i>
     * path) in a journey, based on conditions that you specify.</p>
     */
    inline void SetMultiCondition(MultiConditionalSplitActivity&& value) { m_multiConditionHasBeenSet = true; m_multiCondition = std::move(value); }

    /**
     * <p>The settings for a multivariate split activity. This type of activity sends
     * participants down one of as many as five paths (including a default <i>Else</i>
     * path) in a journey, based on conditions that you specify.</p>
     */
    inline Activity& WithMultiCondition(const MultiConditionalSplitActivity& value) { SetMultiCondition(value); return *this;}

    /**
     * <p>The settings for a multivariate split activity. This type of activity sends
     * participants down one of as many as five paths (including a default <i>Else</i>
     * path) in a journey, based on conditions that you specify.</p>
     */
    inline Activity& WithMultiCondition(MultiConditionalSplitActivity&& value) { SetMultiCondition(std::move(value)); return *this;}


    /**
     * <p>The settings for a random split activity. This type of activity randomly
     * sends specified percentages of participants down one of as many as five paths in
     * a journey, based on conditions that you specify.</p>
     */
    inline const RandomSplitActivity& GetRandomSplit() const{ return m_randomSplit; }

    /**
     * <p>The settings for a random split activity. This type of activity randomly
     * sends specified percentages of participants down one of as many as five paths in
     * a journey, based on conditions that you specify.</p>
     */
    inline bool RandomSplitHasBeenSet() const { return m_randomSplitHasBeenSet; }

    /**
     * <p>The settings for a random split activity. This type of activity randomly
     * sends specified percentages of participants down one of as many as five paths in
     * a journey, based on conditions that you specify.</p>
     */
    inline void SetRandomSplit(const RandomSplitActivity& value) { m_randomSplitHasBeenSet = true; m_randomSplit = value; }

    /**
     * <p>The settings for a random split activity. This type of activity randomly
     * sends specified percentages of participants down one of as many as five paths in
     * a journey, based on conditions that you specify.</p>
     */
    inline void SetRandomSplit(RandomSplitActivity&& value) { m_randomSplitHasBeenSet = true; m_randomSplit = std::move(value); }

    /**
     * <p>The settings for a random split activity. This type of activity randomly
     * sends specified percentages of participants down one of as many as five paths in
     * a journey, based on conditions that you specify.</p>
     */
    inline Activity& WithRandomSplit(const RandomSplitActivity& value) { SetRandomSplit(value); return *this;}

    /**
     * <p>The settings for a random split activity. This type of activity randomly
     * sends specified percentages of participants down one of as many as five paths in
     * a journey, based on conditions that you specify.</p>
     */
    inline Activity& WithRandomSplit(RandomSplitActivity&& value) { SetRandomSplit(std::move(value)); return *this;}


    /**
     * <p>The settings for a wait activity. This type of activity waits for a certain
     * amount of time or until a specific date and time before moving participants to
     * the next activity in a journey.</p>
     */
    inline const WaitActivity& GetWait() const{ return m_wait; }

    /**
     * <p>The settings for a wait activity. This type of activity waits for a certain
     * amount of time or until a specific date and time before moving participants to
     * the next activity in a journey.</p>
     */
    inline bool WaitHasBeenSet() const { return m_waitHasBeenSet; }

    /**
     * <p>The settings for a wait activity. This type of activity waits for a certain
     * amount of time or until a specific date and time before moving participants to
     * the next activity in a journey.</p>
     */
    inline void SetWait(const WaitActivity& value) { m_waitHasBeenSet = true; m_wait = value; }

    /**
     * <p>The settings for a wait activity. This type of activity waits for a certain
     * amount of time or until a specific date and time before moving participants to
     * the next activity in a journey.</p>
     */
    inline void SetWait(WaitActivity&& value) { m_waitHasBeenSet = true; m_wait = std::move(value); }

    /**
     * <p>The settings for a wait activity. This type of activity waits for a certain
     * amount of time or until a specific date and time before moving participants to
     * the next activity in a journey.</p>
     */
    inline Activity& WithWait(const WaitActivity& value) { SetWait(value); return *this;}

    /**
     * <p>The settings for a wait activity. This type of activity waits for a certain
     * amount of time or until a specific date and time before moving participants to
     * the next activity in a journey.</p>
     */
    inline Activity& WithWait(WaitActivity&& value) { SetWait(std::move(value)); return *this;}

  private:

    ConditionalSplitActivity m_conditionalSplit;
    bool m_conditionalSplitHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    EmailMessageActivity m_eMAIL;
    bool m_eMAILHasBeenSet;

    HoldoutActivity m_holdout;
    bool m_holdoutHasBeenSet;

    MultiConditionalSplitActivity m_multiCondition;
    bool m_multiConditionHasBeenSet;

    RandomSplitActivity m_randomSplit;
    bool m_randomSplitHasBeenSet;

    WaitActivity m_wait;
    bool m_waitHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
