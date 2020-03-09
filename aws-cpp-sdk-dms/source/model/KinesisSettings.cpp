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

#include <aws/dms/model/KinesisSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

KinesisSettings::KinesisSettings() : 
    m_streamArnHasBeenSet(false),
    m_messageFormat(MessageFormatValue::NOT_SET),
    m_messageFormatHasBeenSet(false),
    m_serviceAccessRoleArnHasBeenSet(false),
    m_includeTransactionDetails(false),
    m_includeTransactionDetailsHasBeenSet(false),
    m_includePartitionValue(false),
    m_includePartitionValueHasBeenSet(false),
    m_partitionIncludeSchemaTable(false),
    m_partitionIncludeSchemaTableHasBeenSet(false),
    m_includeTableAlterOperations(false),
    m_includeTableAlterOperationsHasBeenSet(false),
    m_includeControlDetails(false),
    m_includeControlDetailsHasBeenSet(false)
{
}

KinesisSettings::KinesisSettings(JsonView jsonValue) : 
    m_streamArnHasBeenSet(false),
    m_messageFormat(MessageFormatValue::NOT_SET),
    m_messageFormatHasBeenSet(false),
    m_serviceAccessRoleArnHasBeenSet(false),
    m_includeTransactionDetails(false),
    m_includeTransactionDetailsHasBeenSet(false),
    m_includePartitionValue(false),
    m_includePartitionValueHasBeenSet(false),
    m_partitionIncludeSchemaTable(false),
    m_partitionIncludeSchemaTableHasBeenSet(false),
    m_includeTableAlterOperations(false),
    m_includeTableAlterOperationsHasBeenSet(false),
    m_includeControlDetails(false),
    m_includeControlDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

KinesisSettings& KinesisSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StreamArn"))
  {
    m_streamArn = jsonValue.GetString("StreamArn");

    m_streamArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MessageFormat"))
  {
    m_messageFormat = MessageFormatValueMapper::GetMessageFormatValueForName(jsonValue.GetString("MessageFormat"));

    m_messageFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceAccessRoleArn"))
  {
    m_serviceAccessRoleArn = jsonValue.GetString("ServiceAccessRoleArn");

    m_serviceAccessRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeTransactionDetails"))
  {
    m_includeTransactionDetails = jsonValue.GetBool("IncludeTransactionDetails");

    m_includeTransactionDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludePartitionValue"))
  {
    m_includePartitionValue = jsonValue.GetBool("IncludePartitionValue");

    m_includePartitionValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PartitionIncludeSchemaTable"))
  {
    m_partitionIncludeSchemaTable = jsonValue.GetBool("PartitionIncludeSchemaTable");

    m_partitionIncludeSchemaTableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeTableAlterOperations"))
  {
    m_includeTableAlterOperations = jsonValue.GetBool("IncludeTableAlterOperations");

    m_includeTableAlterOperationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeControlDetails"))
  {
    m_includeControlDetails = jsonValue.GetBool("IncludeControlDetails");

    m_includeControlDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue KinesisSettings::Jsonize() const
{
  JsonValue payload;

  if(m_streamArnHasBeenSet)
  {
   payload.WithString("StreamArn", m_streamArn);

  }

  if(m_messageFormatHasBeenSet)
  {
   payload.WithString("MessageFormat", MessageFormatValueMapper::GetNameForMessageFormatValue(m_messageFormat));
  }

  if(m_serviceAccessRoleArnHasBeenSet)
  {
   payload.WithString("ServiceAccessRoleArn", m_serviceAccessRoleArn);

  }

  if(m_includeTransactionDetailsHasBeenSet)
  {
   payload.WithBool("IncludeTransactionDetails", m_includeTransactionDetails);

  }

  if(m_includePartitionValueHasBeenSet)
  {
   payload.WithBool("IncludePartitionValue", m_includePartitionValue);

  }

  if(m_partitionIncludeSchemaTableHasBeenSet)
  {
   payload.WithBool("PartitionIncludeSchemaTable", m_partitionIncludeSchemaTable);

  }

  if(m_includeTableAlterOperationsHasBeenSet)
  {
   payload.WithBool("IncludeTableAlterOperations", m_includeTableAlterOperations);

  }

  if(m_includeControlDetailsHasBeenSet)
  {
   payload.WithBool("IncludeControlDetails", m_includeControlDetails);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
