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

#include <aws/codebuild/model/ReportFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

ReportFilter::ReportFilter() : 
    m_status(ReportStatusType::NOT_SET),
    m_statusHasBeenSet(false)
{
}

ReportFilter::ReportFilter(JsonView jsonValue) : 
    m_status(ReportStatusType::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

ReportFilter& ReportFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = ReportStatusTypeMapper::GetReportStatusTypeForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue ReportFilter::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ReportStatusTypeMapper::GetNameForReportStatusType(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
