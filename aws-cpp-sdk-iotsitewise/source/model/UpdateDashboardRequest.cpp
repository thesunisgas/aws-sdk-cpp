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

#include <aws/iotsitewise/model/UpdateDashboardRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDashboardRequest::UpdateDashboardRequest() : 
    m_dashboardIdHasBeenSet(false),
    m_dashboardNameHasBeenSet(false),
    m_dashboardDescriptionHasBeenSet(false),
    m_dashboardDefinitionHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String UpdateDashboardRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dashboardNameHasBeenSet)
  {
   payload.WithString("dashboardName", m_dashboardName);

  }

  if(m_dashboardDescriptionHasBeenSet)
  {
   payload.WithString("dashboardDescription", m_dashboardDescription);

  }

  if(m_dashboardDefinitionHasBeenSet)
  {
   payload.WithString("dashboardDefinition", m_dashboardDefinition);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




