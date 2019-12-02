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
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/ImagebuilderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/ImageTestsConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

  /**
   */
  class AWS_IMAGEBUILDER_API CreateImageRequest : public ImagebuilderRequest
  {
  public:
    CreateImageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateImage"; }

    Aws::String SerializePayload() const override;


    /**
     * <p> The Amazon Resource Name (ARN) of the image recipe that defines how images
     * are configured, tested and assessed. </p>
     */
    inline const Aws::String& GetImageRecipeArn() const{ return m_imageRecipeArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the image recipe that defines how images
     * are configured, tested and assessed. </p>
     */
    inline bool ImageRecipeArnHasBeenSet() const { return m_imageRecipeArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the image recipe that defines how images
     * are configured, tested and assessed. </p>
     */
    inline void SetImageRecipeArn(const Aws::String& value) { m_imageRecipeArnHasBeenSet = true; m_imageRecipeArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the image recipe that defines how images
     * are configured, tested and assessed. </p>
     */
    inline void SetImageRecipeArn(Aws::String&& value) { m_imageRecipeArnHasBeenSet = true; m_imageRecipeArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the image recipe that defines how images
     * are configured, tested and assessed. </p>
     */
    inline void SetImageRecipeArn(const char* value) { m_imageRecipeArnHasBeenSet = true; m_imageRecipeArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the image recipe that defines how images
     * are configured, tested and assessed. </p>
     */
    inline CreateImageRequest& WithImageRecipeArn(const Aws::String& value) { SetImageRecipeArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the image recipe that defines how images
     * are configured, tested and assessed. </p>
     */
    inline CreateImageRequest& WithImageRecipeArn(Aws::String&& value) { SetImageRecipeArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the image recipe that defines how images
     * are configured, tested and assessed. </p>
     */
    inline CreateImageRequest& WithImageRecipeArn(const char* value) { SetImageRecipeArn(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the distribution configuration that
     * defines and configures the outputs of your pipeline. </p>
     */
    inline const Aws::String& GetDistributionConfigurationArn() const{ return m_distributionConfigurationArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the distribution configuration that
     * defines and configures the outputs of your pipeline. </p>
     */
    inline bool DistributionConfigurationArnHasBeenSet() const { return m_distributionConfigurationArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the distribution configuration that
     * defines and configures the outputs of your pipeline. </p>
     */
    inline void SetDistributionConfigurationArn(const Aws::String& value) { m_distributionConfigurationArnHasBeenSet = true; m_distributionConfigurationArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the distribution configuration that
     * defines and configures the outputs of your pipeline. </p>
     */
    inline void SetDistributionConfigurationArn(Aws::String&& value) { m_distributionConfigurationArnHasBeenSet = true; m_distributionConfigurationArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the distribution configuration that
     * defines and configures the outputs of your pipeline. </p>
     */
    inline void SetDistributionConfigurationArn(const char* value) { m_distributionConfigurationArnHasBeenSet = true; m_distributionConfigurationArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the distribution configuration that
     * defines and configures the outputs of your pipeline. </p>
     */
    inline CreateImageRequest& WithDistributionConfigurationArn(const Aws::String& value) { SetDistributionConfigurationArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the distribution configuration that
     * defines and configures the outputs of your pipeline. </p>
     */
    inline CreateImageRequest& WithDistributionConfigurationArn(Aws::String&& value) { SetDistributionConfigurationArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the distribution configuration that
     * defines and configures the outputs of your pipeline. </p>
     */
    inline CreateImageRequest& WithDistributionConfigurationArn(const char* value) { SetDistributionConfigurationArn(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the infrastructure configuration that
     * defines the environment in which your image will be built and tested. </p>
     */
    inline const Aws::String& GetInfrastructureConfigurationArn() const{ return m_infrastructureConfigurationArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the infrastructure configuration that
     * defines the environment in which your image will be built and tested. </p>
     */
    inline bool InfrastructureConfigurationArnHasBeenSet() const { return m_infrastructureConfigurationArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the infrastructure configuration that
     * defines the environment in which your image will be built and tested. </p>
     */
    inline void SetInfrastructureConfigurationArn(const Aws::String& value) { m_infrastructureConfigurationArnHasBeenSet = true; m_infrastructureConfigurationArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the infrastructure configuration that
     * defines the environment in which your image will be built and tested. </p>
     */
    inline void SetInfrastructureConfigurationArn(Aws::String&& value) { m_infrastructureConfigurationArnHasBeenSet = true; m_infrastructureConfigurationArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the infrastructure configuration that
     * defines the environment in which your image will be built and tested. </p>
     */
    inline void SetInfrastructureConfigurationArn(const char* value) { m_infrastructureConfigurationArnHasBeenSet = true; m_infrastructureConfigurationArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the infrastructure configuration that
     * defines the environment in which your image will be built and tested. </p>
     */
    inline CreateImageRequest& WithInfrastructureConfigurationArn(const Aws::String& value) { SetInfrastructureConfigurationArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the infrastructure configuration that
     * defines the environment in which your image will be built and tested. </p>
     */
    inline CreateImageRequest& WithInfrastructureConfigurationArn(Aws::String&& value) { SetInfrastructureConfigurationArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the infrastructure configuration that
     * defines the environment in which your image will be built and tested. </p>
     */
    inline CreateImageRequest& WithInfrastructureConfigurationArn(const char* value) { SetInfrastructureConfigurationArn(value); return *this;}


    /**
     * <p> The image tests configuration of the image. </p>
     */
    inline const ImageTestsConfiguration& GetImageTestsConfiguration() const{ return m_imageTestsConfiguration; }

    /**
     * <p> The image tests configuration of the image. </p>
     */
    inline bool ImageTestsConfigurationHasBeenSet() const { return m_imageTestsConfigurationHasBeenSet; }

    /**
     * <p> The image tests configuration of the image. </p>
     */
    inline void SetImageTestsConfiguration(const ImageTestsConfiguration& value) { m_imageTestsConfigurationHasBeenSet = true; m_imageTestsConfiguration = value; }

    /**
     * <p> The image tests configuration of the image. </p>
     */
    inline void SetImageTestsConfiguration(ImageTestsConfiguration&& value) { m_imageTestsConfigurationHasBeenSet = true; m_imageTestsConfiguration = std::move(value); }

    /**
     * <p> The image tests configuration of the image. </p>
     */
    inline CreateImageRequest& WithImageTestsConfiguration(const ImageTestsConfiguration& value) { SetImageTestsConfiguration(value); return *this;}

    /**
     * <p> The image tests configuration of the image. </p>
     */
    inline CreateImageRequest& WithImageTestsConfiguration(ImageTestsConfiguration&& value) { SetImageTestsConfiguration(std::move(value)); return *this;}


    /**
     * <p> The tags of the image. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p> The tags of the image. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> The tags of the image. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> The tags of the image. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> The tags of the image. </p>
     */
    inline CreateImageRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p> The tags of the image. </p>
     */
    inline CreateImageRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> The tags of the image. </p>
     */
    inline CreateImageRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p> The tags of the image. </p>
     */
    inline CreateImageRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> The tags of the image. </p>
     */
    inline CreateImageRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The tags of the image. </p>
     */
    inline CreateImageRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> The tags of the image. </p>
     */
    inline CreateImageRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The tags of the image. </p>
     */
    inline CreateImageRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> The tags of the image. </p>
     */
    inline CreateImageRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p> The idempotency token used to make this request idempotent. </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p> The idempotency token used to make this request idempotent. </p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p> The idempotency token used to make this request idempotent. </p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p> The idempotency token used to make this request idempotent. </p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p> The idempotency token used to make this request idempotent. </p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p> The idempotency token used to make this request idempotent. </p>
     */
    inline CreateImageRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p> The idempotency token used to make this request idempotent. </p>
     */
    inline CreateImageRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p> The idempotency token used to make this request idempotent. </p>
     */
    inline CreateImageRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_imageRecipeArn;
    bool m_imageRecipeArnHasBeenSet;

    Aws::String m_distributionConfigurationArn;
    bool m_distributionConfigurationArnHasBeenSet;

    Aws::String m_infrastructureConfigurationArn;
    bool m_infrastructureConfigurationArnHasBeenSet;

    ImageTestsConfiguration m_imageTestsConfiguration;
    bool m_imageTestsConfigurationHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
