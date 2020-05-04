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

#include <aws/waf/model/WAFInvalidParameterException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAF
{
namespace Model
{

WAFInvalidParameterException::WAFInvalidParameterException() : 
    m_field(ParameterExceptionField::NOT_SET),
    m_fieldHasBeenSet(false),
    m_parameterHasBeenSet(false),
    m_reason(ParameterExceptionReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
}

WAFInvalidParameterException::WAFInvalidParameterException(JsonView jsonValue) : 
    m_field(ParameterExceptionField::NOT_SET),
    m_fieldHasBeenSet(false),
    m_parameterHasBeenSet(false),
    m_reason(ParameterExceptionReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

WAFInvalidParameterException& WAFInvalidParameterException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("field"))
  {
    m_field = ParameterExceptionFieldMapper::GetParameterExceptionFieldForName(jsonValue.GetString("field"));

    m_fieldHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parameter"))
  {
    m_parameter = jsonValue.GetString("parameter");

    m_parameterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reason"))
  {
    m_reason = ParameterExceptionReasonMapper::GetParameterExceptionReasonForName(jsonValue.GetString("reason"));

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue WAFInvalidParameterException::Jsonize() const
{
  JsonValue payload;

  if(m_fieldHasBeenSet)
  {
   payload.WithString("field", ParameterExceptionFieldMapper::GetNameForParameterExceptionField(m_field));
  }

  if(m_parameterHasBeenSet)
  {
   payload.WithString("parameter", m_parameter);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", ParameterExceptionReasonMapper::GetNameForParameterExceptionReason(m_reason));
  }

  return payload;
}

} // namespace Model
} // namespace WAF
} // namespace Aws
