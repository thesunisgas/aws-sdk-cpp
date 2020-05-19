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

#include <aws/fsx/model/ActiveDirectoryError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

ActiveDirectoryError::ActiveDirectoryError() : 
    m_activeDirectoryIdHasBeenSet(false),
    m_type(ActiveDirectoryErrorType::NOT_SET),
    m_typeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

ActiveDirectoryError::ActiveDirectoryError(JsonView jsonValue) : 
    m_activeDirectoryIdHasBeenSet(false),
    m_type(ActiveDirectoryErrorType::NOT_SET),
    m_typeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

ActiveDirectoryError& ActiveDirectoryError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ActiveDirectoryId"))
  {
    m_activeDirectoryId = jsonValue.GetString("ActiveDirectoryId");

    m_activeDirectoryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = ActiveDirectoryErrorTypeMapper::GetActiveDirectoryErrorTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue ActiveDirectoryError::Jsonize() const
{
  JsonValue payload;

  if(m_activeDirectoryIdHasBeenSet)
  {
   payload.WithString("ActiveDirectoryId", m_activeDirectoryId);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ActiveDirectoryErrorTypeMapper::GetNameForActiveDirectoryErrorType(m_type));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
