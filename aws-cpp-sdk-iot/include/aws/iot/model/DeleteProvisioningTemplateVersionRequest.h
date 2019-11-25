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

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class AWS_IOT_API DeleteProvisioningTemplateVersionRequest : public IoTRequest
  {
  public:
    DeleteProvisioningTemplateVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteProvisioningTemplateVersion"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the fleet provisioning template version to delete.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the fleet provisioning template version to delete.</p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>The name of the fleet provisioning template version to delete.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The name of the fleet provisioning template version to delete.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>The name of the fleet provisioning template version to delete.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>The name of the fleet provisioning template version to delete.</p>
     */
    inline DeleteProvisioningTemplateVersionRequest& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the fleet provisioning template version to delete.</p>
     */
    inline DeleteProvisioningTemplateVersionRequest& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the fleet provisioning template version to delete.</p>
     */
    inline DeleteProvisioningTemplateVersionRequest& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}


    /**
     * <p>The fleet provisioning template version ID to delete.</p>
     */
    inline int GetVersionId() const{ return m_versionId; }

    /**
     * <p>The fleet provisioning template version ID to delete.</p>
     */
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }

    /**
     * <p>The fleet provisioning template version ID to delete.</p>
     */
    inline void SetVersionId(int value) { m_versionIdHasBeenSet = true; m_versionId = value; }

    /**
     * <p>The fleet provisioning template version ID to delete.</p>
     */
    inline DeleteProvisioningTemplateVersionRequest& WithVersionId(int value) { SetVersionId(value); return *this;}

  private:

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet;

    int m_versionId;
    bool m_versionIdHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
