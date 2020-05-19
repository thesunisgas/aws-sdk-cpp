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

#include <aws/amplify/model/CreateBackendEnvironmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Amplify::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateBackendEnvironmentRequest::CreateBackendEnvironmentRequest() : 
    m_appIdHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_stackNameHasBeenSet(false),
    m_deploymentArtifactsHasBeenSet(false)
{
}

Aws::String CreateBackendEnvironmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_environmentNameHasBeenSet)
  {
   payload.WithString("environmentName", m_environmentName);

  }

  if(m_stackNameHasBeenSet)
  {
   payload.WithString("stackName", m_stackName);

  }

  if(m_deploymentArtifactsHasBeenSet)
  {
   payload.WithString("deploymentArtifacts", m_deploymentArtifacts);

  }

  return payload.View().WriteReadable();
}




