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

#include <aws/rekognition/model/ProjectDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

ProjectDescription::ProjectDescription() : 
    m_projectArnHasBeenSet(false),
    m_creationTimestampHasBeenSet(false),
    m_status(ProjectStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

ProjectDescription::ProjectDescription(JsonView jsonValue) : 
    m_projectArnHasBeenSet(false),
    m_creationTimestampHasBeenSet(false),
    m_status(ProjectStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

ProjectDescription& ProjectDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProjectArn"))
  {
    m_projectArn = jsonValue.GetString("ProjectArn");

    m_projectArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTimestamp"))
  {
    m_creationTimestamp = jsonValue.GetDouble("CreationTimestamp");

    m_creationTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ProjectStatusMapper::GetProjectStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue ProjectDescription::Jsonize() const
{
  JsonValue payload;

  if(m_projectArnHasBeenSet)
  {
   payload.WithString("ProjectArn", m_projectArn);

  }

  if(m_creationTimestampHasBeenSet)
  {
   payload.WithDouble("CreationTimestamp", m_creationTimestamp.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ProjectStatusMapper::GetNameForProjectStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
