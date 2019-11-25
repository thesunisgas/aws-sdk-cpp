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

#include <aws/lambda/model/FunctionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lambda
{
namespace Model
{

FunctionConfiguration::FunctionConfiguration() : 
    m_functionNameHasBeenSet(false),
    m_functionArnHasBeenSet(false),
    m_runtime(Runtime::NOT_SET),
    m_runtimeHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_handlerHasBeenSet(false),
    m_codeSize(0),
    m_codeSizeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_timeout(0),
    m_timeoutHasBeenSet(false),
    m_memorySize(0),
    m_memorySizeHasBeenSet(false),
    m_lastModifiedHasBeenSet(false),
    m_codeSha256HasBeenSet(false),
    m_versionHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_deadLetterConfigHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_kMSKeyArnHasBeenSet(false),
    m_tracingConfigHasBeenSet(false),
    m_masterArnHasBeenSet(false),
    m_revisionIdHasBeenSet(false),
    m_layersHasBeenSet(false),
    m_state(State::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateReasonHasBeenSet(false),
    m_stateReasonCode(StateReasonCode::NOT_SET),
    m_stateReasonCodeHasBeenSet(false),
    m_lastUpdateStatus(LastUpdateStatus::NOT_SET),
    m_lastUpdateStatusHasBeenSet(false),
    m_lastUpdateStatusReasonHasBeenSet(false),
    m_lastUpdateStatusReasonCode(LastUpdateStatusReasonCode::NOT_SET),
    m_lastUpdateStatusReasonCodeHasBeenSet(false)
{
}

FunctionConfiguration::FunctionConfiguration(JsonView jsonValue) : 
    m_functionNameHasBeenSet(false),
    m_functionArnHasBeenSet(false),
    m_runtime(Runtime::NOT_SET),
    m_runtimeHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_handlerHasBeenSet(false),
    m_codeSize(0),
    m_codeSizeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_timeout(0),
    m_timeoutHasBeenSet(false),
    m_memorySize(0),
    m_memorySizeHasBeenSet(false),
    m_lastModifiedHasBeenSet(false),
    m_codeSha256HasBeenSet(false),
    m_versionHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_deadLetterConfigHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_kMSKeyArnHasBeenSet(false),
    m_tracingConfigHasBeenSet(false),
    m_masterArnHasBeenSet(false),
    m_revisionIdHasBeenSet(false),
    m_layersHasBeenSet(false),
    m_state(State::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateReasonHasBeenSet(false),
    m_stateReasonCode(StateReasonCode::NOT_SET),
    m_stateReasonCodeHasBeenSet(false),
    m_lastUpdateStatus(LastUpdateStatus::NOT_SET),
    m_lastUpdateStatusHasBeenSet(false),
    m_lastUpdateStatusReasonHasBeenSet(false),
    m_lastUpdateStatusReasonCode(LastUpdateStatusReasonCode::NOT_SET),
    m_lastUpdateStatusReasonCodeHasBeenSet(false)
{
  *this = jsonValue;
}

FunctionConfiguration& FunctionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FunctionName"))
  {
    m_functionName = jsonValue.GetString("FunctionName");

    m_functionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FunctionArn"))
  {
    m_functionArn = jsonValue.GetString("FunctionArn");

    m_functionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Runtime"))
  {
    m_runtime = RuntimeMapper::GetRuntimeForName(jsonValue.GetString("Runtime"));

    m_runtimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Role"))
  {
    m_role = jsonValue.GetString("Role");

    m_roleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Handler"))
  {
    m_handler = jsonValue.GetString("Handler");

    m_handlerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CodeSize"))
  {
    m_codeSize = jsonValue.GetInt64("CodeSize");

    m_codeSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Timeout"))
  {
    m_timeout = jsonValue.GetInteger("Timeout");

    m_timeoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MemorySize"))
  {
    m_memorySize = jsonValue.GetInteger("MemorySize");

    m_memorySizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModified"))
  {
    m_lastModified = jsonValue.GetString("LastModified");

    m_lastModifiedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CodeSha256"))
  {
    m_codeSha256 = jsonValue.GetString("CodeSha256");

    m_codeSha256HasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcConfig"))
  {
    m_vpcConfig = jsonValue.GetObject("VpcConfig");

    m_vpcConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeadLetterConfig"))
  {
    m_deadLetterConfig = jsonValue.GetObject("DeadLetterConfig");

    m_deadLetterConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Environment"))
  {
    m_environment = jsonValue.GetObject("Environment");

    m_environmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KMSKeyArn"))
  {
    m_kMSKeyArn = jsonValue.GetString("KMSKeyArn");

    m_kMSKeyArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TracingConfig"))
  {
    m_tracingConfig = jsonValue.GetObject("TracingConfig");

    m_tracingConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MasterArn"))
  {
    m_masterArn = jsonValue.GetString("MasterArn");

    m_masterArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RevisionId"))
  {
    m_revisionId = jsonValue.GetString("RevisionId");

    m_revisionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Layers"))
  {
    Array<JsonView> layersJsonList = jsonValue.GetArray("Layers");
    for(unsigned layersIndex = 0; layersIndex < layersJsonList.GetLength(); ++layersIndex)
    {
      m_layers.push_back(layersJsonList[layersIndex].AsObject());
    }
    m_layersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = StateMapper::GetStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StateReason"))
  {
    m_stateReason = jsonValue.GetString("StateReason");

    m_stateReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StateReasonCode"))
  {
    m_stateReasonCode = StateReasonCodeMapper::GetStateReasonCodeForName(jsonValue.GetString("StateReasonCode"));

    m_stateReasonCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdateStatus"))
  {
    m_lastUpdateStatus = LastUpdateStatusMapper::GetLastUpdateStatusForName(jsonValue.GetString("LastUpdateStatus"));

    m_lastUpdateStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdateStatusReason"))
  {
    m_lastUpdateStatusReason = jsonValue.GetString("LastUpdateStatusReason");

    m_lastUpdateStatusReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdateStatusReasonCode"))
  {
    m_lastUpdateStatusReasonCode = LastUpdateStatusReasonCodeMapper::GetLastUpdateStatusReasonCodeForName(jsonValue.GetString("LastUpdateStatusReasonCode"));

    m_lastUpdateStatusReasonCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue FunctionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_functionNameHasBeenSet)
  {
   payload.WithString("FunctionName", m_functionName);

  }

  if(m_functionArnHasBeenSet)
  {
   payload.WithString("FunctionArn", m_functionArn);

  }

  if(m_runtimeHasBeenSet)
  {
   payload.WithString("Runtime", RuntimeMapper::GetNameForRuntime(m_runtime));
  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", m_role);

  }

  if(m_handlerHasBeenSet)
  {
   payload.WithString("Handler", m_handler);

  }

  if(m_codeSizeHasBeenSet)
  {
   payload.WithInt64("CodeSize", m_codeSize);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_timeoutHasBeenSet)
  {
   payload.WithInteger("Timeout", m_timeout);

  }

  if(m_memorySizeHasBeenSet)
  {
   payload.WithInteger("MemorySize", m_memorySize);

  }

  if(m_lastModifiedHasBeenSet)
  {
   payload.WithString("LastModified", m_lastModified);

  }

  if(m_codeSha256HasBeenSet)
  {
   payload.WithString("CodeSha256", m_codeSha256);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("VpcConfig", m_vpcConfig.Jsonize());

  }

  if(m_deadLetterConfigHasBeenSet)
  {
   payload.WithObject("DeadLetterConfig", m_deadLetterConfig.Jsonize());

  }

  if(m_environmentHasBeenSet)
  {
   payload.WithObject("Environment", m_environment.Jsonize());

  }

  if(m_kMSKeyArnHasBeenSet)
  {
   payload.WithString("KMSKeyArn", m_kMSKeyArn);

  }

  if(m_tracingConfigHasBeenSet)
  {
   payload.WithObject("TracingConfig", m_tracingConfig.Jsonize());

  }

  if(m_masterArnHasBeenSet)
  {
   payload.WithString("MasterArn", m_masterArn);

  }

  if(m_revisionIdHasBeenSet)
  {
   payload.WithString("RevisionId", m_revisionId);

  }

  if(m_layersHasBeenSet)
  {
   Array<JsonValue> layersJsonList(m_layers.size());
   for(unsigned layersIndex = 0; layersIndex < layersJsonList.GetLength(); ++layersIndex)
   {
     layersJsonList[layersIndex].AsObject(m_layers[layersIndex].Jsonize());
   }
   payload.WithArray("Layers", std::move(layersJsonList));

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", StateMapper::GetNameForState(m_state));
  }

  if(m_stateReasonHasBeenSet)
  {
   payload.WithString("StateReason", m_stateReason);

  }

  if(m_stateReasonCodeHasBeenSet)
  {
   payload.WithString("StateReasonCode", StateReasonCodeMapper::GetNameForStateReasonCode(m_stateReasonCode));
  }

  if(m_lastUpdateStatusHasBeenSet)
  {
   payload.WithString("LastUpdateStatus", LastUpdateStatusMapper::GetNameForLastUpdateStatus(m_lastUpdateStatus));
  }

  if(m_lastUpdateStatusReasonHasBeenSet)
  {
   payload.WithString("LastUpdateStatusReason", m_lastUpdateStatusReason);

  }

  if(m_lastUpdateStatusReasonCodeHasBeenSet)
  {
   payload.WithString("LastUpdateStatusReasonCode", LastUpdateStatusReasonCodeMapper::GetNameForLastUpdateStatusReasonCode(m_lastUpdateStatusReasonCode));
  }

  return payload;
}

} // namespace Model
} // namespace Lambda
} // namespace Aws
