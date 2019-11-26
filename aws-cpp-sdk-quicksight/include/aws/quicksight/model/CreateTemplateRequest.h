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
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/TemplateSourceEntity.h>
#include <aws/quicksight/model/ResourcePermission.h>
#include <aws/quicksight/model/Tag.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class AWS_QUICKSIGHT_API CreateTemplateRequest : public QuickSightRequest
  {
  public:
    CreateTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTemplate"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ID for the AWS account that the group is in. Currently, you use the ID
     * for the AWS account that contains your Amazon QuickSight account.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID for the AWS account that the group is in. Currently, you use the ID
     * for the AWS account that contains your Amazon QuickSight account.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID for the AWS account that the group is in. Currently, you use the ID
     * for the AWS account that contains your Amazon QuickSight account.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID for the AWS account that the group is in. Currently, you use the ID
     * for the AWS account that contains your Amazon QuickSight account.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID for the AWS account that the group is in. Currently, you use the ID
     * for the AWS account that contains your Amazon QuickSight account.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID for the AWS account that the group is in. Currently, you use the ID
     * for the AWS account that contains your Amazon QuickSight account.</p>
     */
    inline CreateTemplateRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID for the AWS account that the group is in. Currently, you use the ID
     * for the AWS account that contains your Amazon QuickSight account.</p>
     */
    inline CreateTemplateRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID for the AWS account that the group is in. Currently, you use the ID
     * for the AWS account that contains your Amazon QuickSight account.</p>
     */
    inline CreateTemplateRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>An ID for the template you want to create. This is unique per AWS region per
     * AWS account.</p>
     */
    inline const Aws::String& GetTemplateId() const{ return m_templateId; }

    /**
     * <p>An ID for the template you want to create. This is unique per AWS region per
     * AWS account.</p>
     */
    inline bool TemplateIdHasBeenSet() const { return m_templateIdHasBeenSet; }

    /**
     * <p>An ID for the template you want to create. This is unique per AWS region per
     * AWS account.</p>
     */
    inline void SetTemplateId(const Aws::String& value) { m_templateIdHasBeenSet = true; m_templateId = value; }

    /**
     * <p>An ID for the template you want to create. This is unique per AWS region per
     * AWS account.</p>
     */
    inline void SetTemplateId(Aws::String&& value) { m_templateIdHasBeenSet = true; m_templateId = std::move(value); }

    /**
     * <p>An ID for the template you want to create. This is unique per AWS region per
     * AWS account.</p>
     */
    inline void SetTemplateId(const char* value) { m_templateIdHasBeenSet = true; m_templateId.assign(value); }

    /**
     * <p>An ID for the template you want to create. This is unique per AWS region per
     * AWS account.</p>
     */
    inline CreateTemplateRequest& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}

    /**
     * <p>An ID for the template you want to create. This is unique per AWS region per
     * AWS account.</p>
     */
    inline CreateTemplateRequest& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}

    /**
     * <p>An ID for the template you want to create. This is unique per AWS region per
     * AWS account.</p>
     */
    inline CreateTemplateRequest& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}


    /**
     * <p>A display name for the template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A display name for the template.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A display name for the template.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A display name for the template.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A display name for the template.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A display name for the template.</p>
     */
    inline CreateTemplateRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A display name for the template.</p>
     */
    inline CreateTemplateRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A display name for the template.</p>
     */
    inline CreateTemplateRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A list of resource permissions to be set on the template. </p>
     */
    inline const Aws::Vector<ResourcePermission>& GetPermissions() const{ return m_permissions; }

    /**
     * <p>A list of resource permissions to be set on the template. </p>
     */
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }

    /**
     * <p>A list of resource permissions to be set on the template. </p>
     */
    inline void SetPermissions(const Aws::Vector<ResourcePermission>& value) { m_permissionsHasBeenSet = true; m_permissions = value; }

    /**
     * <p>A list of resource permissions to be set on the template. </p>
     */
    inline void SetPermissions(Aws::Vector<ResourcePermission>&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }

    /**
     * <p>A list of resource permissions to be set on the template. </p>
     */
    inline CreateTemplateRequest& WithPermissions(const Aws::Vector<ResourcePermission>& value) { SetPermissions(value); return *this;}

    /**
     * <p>A list of resource permissions to be set on the template. </p>
     */
    inline CreateTemplateRequest& WithPermissions(Aws::Vector<ResourcePermission>&& value) { SetPermissions(std::move(value)); return *this;}

    /**
     * <p>A list of resource permissions to be set on the template. </p>
     */
    inline CreateTemplateRequest& AddPermissions(const ResourcePermission& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }

    /**
     * <p>A list of resource permissions to be set on the template. </p>
     */
    inline CreateTemplateRequest& AddPermissions(ResourcePermission&& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the source entity from which this template
     * is being created. Templates can be currently created from an analysis or another
     * template. If the ARN is for an analysis, you must include its dataset
     * references. </p>
     */
    inline const TemplateSourceEntity& GetSourceEntity() const{ return m_sourceEntity; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source entity from which this template
     * is being created. Templates can be currently created from an analysis or another
     * template. If the ARN is for an analysis, you must include its dataset
     * references. </p>
     */
    inline bool SourceEntityHasBeenSet() const { return m_sourceEntityHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source entity from which this template
     * is being created. Templates can be currently created from an analysis or another
     * template. If the ARN is for an analysis, you must include its dataset
     * references. </p>
     */
    inline void SetSourceEntity(const TemplateSourceEntity& value) { m_sourceEntityHasBeenSet = true; m_sourceEntity = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source entity from which this template
     * is being created. Templates can be currently created from an analysis or another
     * template. If the ARN is for an analysis, you must include its dataset
     * references. </p>
     */
    inline void SetSourceEntity(TemplateSourceEntity&& value) { m_sourceEntityHasBeenSet = true; m_sourceEntity = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source entity from which this template
     * is being created. Templates can be currently created from an analysis or another
     * template. If the ARN is for an analysis, you must include its dataset
     * references. </p>
     */
    inline CreateTemplateRequest& WithSourceEntity(const TemplateSourceEntity& value) { SetSourceEntity(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source entity from which this template
     * is being created. Templates can be currently created from an analysis or another
     * template. If the ARN is for an analysis, you must include its dataset
     * references. </p>
     */
    inline CreateTemplateRequest& WithSourceEntity(TemplateSourceEntity&& value) { SetSourceEntity(std::move(value)); return *this;}


    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the resource.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the resource.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the resource.</p>
     */
    inline CreateTemplateRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the resource.</p>
     */
    inline CreateTemplateRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the resource.</p>
     */
    inline CreateTemplateRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the resource.</p>
     */
    inline CreateTemplateRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>A description of the current template version being created. This API created
     * the first version of the template. Every time UpdateTemplate is called a new
     * version is created. Each version of the template maintains a description of the
     * version in the VersionDescription field.</p>
     */
    inline const Aws::String& GetVersionDescription() const{ return m_versionDescription; }

    /**
     * <p>A description of the current template version being created. This API created
     * the first version of the template. Every time UpdateTemplate is called a new
     * version is created. Each version of the template maintains a description of the
     * version in the VersionDescription field.</p>
     */
    inline bool VersionDescriptionHasBeenSet() const { return m_versionDescriptionHasBeenSet; }

    /**
     * <p>A description of the current template version being created. This API created
     * the first version of the template. Every time UpdateTemplate is called a new
     * version is created. Each version of the template maintains a description of the
     * version in the VersionDescription field.</p>
     */
    inline void SetVersionDescription(const Aws::String& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = value; }

    /**
     * <p>A description of the current template version being created. This API created
     * the first version of the template. Every time UpdateTemplate is called a new
     * version is created. Each version of the template maintains a description of the
     * version in the VersionDescription field.</p>
     */
    inline void SetVersionDescription(Aws::String&& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = std::move(value); }

    /**
     * <p>A description of the current template version being created. This API created
     * the first version of the template. Every time UpdateTemplate is called a new
     * version is created. Each version of the template maintains a description of the
     * version in the VersionDescription field.</p>
     */
    inline void SetVersionDescription(const char* value) { m_versionDescriptionHasBeenSet = true; m_versionDescription.assign(value); }

    /**
     * <p>A description of the current template version being created. This API created
     * the first version of the template. Every time UpdateTemplate is called a new
     * version is created. Each version of the template maintains a description of the
     * version in the VersionDescription field.</p>
     */
    inline CreateTemplateRequest& WithVersionDescription(const Aws::String& value) { SetVersionDescription(value); return *this;}

    /**
     * <p>A description of the current template version being created. This API created
     * the first version of the template. Every time UpdateTemplate is called a new
     * version is created. Each version of the template maintains a description of the
     * version in the VersionDescription field.</p>
     */
    inline CreateTemplateRequest& WithVersionDescription(Aws::String&& value) { SetVersionDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the current template version being created. This API created
     * the first version of the template. Every time UpdateTemplate is called a new
     * version is created. Each version of the template maintains a description of the
     * version in the VersionDescription field.</p>
     */
    inline CreateTemplateRequest& WithVersionDescription(const char* value) { SetVersionDescription(value); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet;

    Aws::String m_templateId;
    bool m_templateIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<ResourcePermission> m_permissions;
    bool m_permissionsHasBeenSet;

    TemplateSourceEntity m_sourceEntity;
    bool m_sourceEntityHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_versionDescription;
    bool m_versionDescriptionHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
