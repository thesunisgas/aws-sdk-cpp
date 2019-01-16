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

#include <aws/backup/model/RecoveryPointByResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Backup
{
namespace Model
{

RecoveryPointByResource::RecoveryPointByResource() : 
    m_recoveryPointArnHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_status(RecoveryPointStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_encryptionKeyArnHasBeenSet(false),
    m_backupSizeBytes(0),
    m_backupSizeBytesHasBeenSet(false),
    m_backupVaultNameHasBeenSet(false)
{
}

RecoveryPointByResource::RecoveryPointByResource(JsonView jsonValue) : 
    m_recoveryPointArnHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_status(RecoveryPointStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_encryptionKeyArnHasBeenSet(false),
    m_backupSizeBytes(0),
    m_backupSizeBytesHasBeenSet(false),
    m_backupVaultNameHasBeenSet(false)
{
  *this = jsonValue;
}

RecoveryPointByResource& RecoveryPointByResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RecoveryPointArn"))
  {
    m_recoveryPointArn = jsonValue.GetString("RecoveryPointArn");

    m_recoveryPointArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = RecoveryPointStatusMapper::GetRecoveryPointStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EncryptionKeyArn"))
  {
    m_encryptionKeyArn = jsonValue.GetString("EncryptionKeyArn");

    m_encryptionKeyArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackupSizeBytes"))
  {
    m_backupSizeBytes = jsonValue.GetInt64("BackupSizeBytes");

    m_backupSizeBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackupVaultName"))
  {
    m_backupVaultName = jsonValue.GetString("BackupVaultName");

    m_backupVaultNameHasBeenSet = true;
  }

  return *this;
}

JsonValue RecoveryPointByResource::Jsonize() const
{
  JsonValue payload;

  if(m_recoveryPointArnHasBeenSet)
  {
   payload.WithString("RecoveryPointArn", m_recoveryPointArn);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("CreationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", RecoveryPointStatusMapper::GetNameForRecoveryPointStatus(m_status));
  }

  if(m_encryptionKeyArnHasBeenSet)
  {
   payload.WithString("EncryptionKeyArn", m_encryptionKeyArn);

  }

  if(m_backupSizeBytesHasBeenSet)
  {
   payload.WithInt64("BackupSizeBytes", m_backupSizeBytes);

  }

  if(m_backupVaultNameHasBeenSet)
  {
   payload.WithString("BackupVaultName", m_backupVaultName);

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
