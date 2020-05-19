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

#include <aws/securityhub/model/StandardsControl.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

StandardsControl::StandardsControl() : 
    m_standardsControlArnHasBeenSet(false),
    m_controlStatus(ControlStatus::NOT_SET),
    m_controlStatusHasBeenSet(false),
    m_disabledReasonHasBeenSet(false),
    m_controlStatusUpdatedAtHasBeenSet(false),
    m_controlIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_remediationUrlHasBeenSet(false),
    m_severityRating(SeverityRating::NOT_SET),
    m_severityRatingHasBeenSet(false)
{
}

StandardsControl::StandardsControl(JsonView jsonValue) : 
    m_standardsControlArnHasBeenSet(false),
    m_controlStatus(ControlStatus::NOT_SET),
    m_controlStatusHasBeenSet(false),
    m_disabledReasonHasBeenSet(false),
    m_controlStatusUpdatedAtHasBeenSet(false),
    m_controlIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_remediationUrlHasBeenSet(false),
    m_severityRating(SeverityRating::NOT_SET),
    m_severityRatingHasBeenSet(false)
{
  *this = jsonValue;
}

StandardsControl& StandardsControl::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StandardsControlArn"))
  {
    m_standardsControlArn = jsonValue.GetString("StandardsControlArn");

    m_standardsControlArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ControlStatus"))
  {
    m_controlStatus = ControlStatusMapper::GetControlStatusForName(jsonValue.GetString("ControlStatus"));

    m_controlStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisabledReason"))
  {
    m_disabledReason = jsonValue.GetString("DisabledReason");

    m_disabledReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ControlStatusUpdatedAt"))
  {
    m_controlStatusUpdatedAt = jsonValue.GetString("ControlStatusUpdatedAt");

    m_controlStatusUpdatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ControlId"))
  {
    m_controlId = jsonValue.GetString("ControlId");

    m_controlIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RemediationUrl"))
  {
    m_remediationUrl = jsonValue.GetString("RemediationUrl");

    m_remediationUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SeverityRating"))
  {
    m_severityRating = SeverityRatingMapper::GetSeverityRatingForName(jsonValue.GetString("SeverityRating"));

    m_severityRatingHasBeenSet = true;
  }

  return *this;
}

JsonValue StandardsControl::Jsonize() const
{
  JsonValue payload;

  if(m_standardsControlArnHasBeenSet)
  {
   payload.WithString("StandardsControlArn", m_standardsControlArn);

  }

  if(m_controlStatusHasBeenSet)
  {
   payload.WithString("ControlStatus", ControlStatusMapper::GetNameForControlStatus(m_controlStatus));
  }

  if(m_disabledReasonHasBeenSet)
  {
   payload.WithString("DisabledReason", m_disabledReason);

  }

  if(m_controlStatusUpdatedAtHasBeenSet)
  {
   payload.WithString("ControlStatusUpdatedAt", m_controlStatusUpdatedAt.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_controlIdHasBeenSet)
  {
   payload.WithString("ControlId", m_controlId);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_remediationUrlHasBeenSet)
  {
   payload.WithString("RemediationUrl", m_remediationUrl);

  }

  if(m_severityRatingHasBeenSet)
  {
   payload.WithString("SeverityRating", SeverityRatingMapper::GetNameForSeverityRating(m_severityRating));
  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
