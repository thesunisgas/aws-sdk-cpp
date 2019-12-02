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
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace imagebuilder
{
namespace Model
{

  /**
   */
  class AWS_IMAGEBUILDER_API GetImagePipelineRequest : public ImagebuilderRequest
  {
  public:
    GetImagePipelineRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetImagePipeline"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> The Amazon Resource Name (ARN) of the image pipeline that you wish to
     * retrieve. </p>
     */
    inline const Aws::String& GetImagePipelineArn() const{ return m_imagePipelineArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the image pipeline that you wish to
     * retrieve. </p>
     */
    inline bool ImagePipelineArnHasBeenSet() const { return m_imagePipelineArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the image pipeline that you wish to
     * retrieve. </p>
     */
    inline void SetImagePipelineArn(const Aws::String& value) { m_imagePipelineArnHasBeenSet = true; m_imagePipelineArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the image pipeline that you wish to
     * retrieve. </p>
     */
    inline void SetImagePipelineArn(Aws::String&& value) { m_imagePipelineArnHasBeenSet = true; m_imagePipelineArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the image pipeline that you wish to
     * retrieve. </p>
     */
    inline void SetImagePipelineArn(const char* value) { m_imagePipelineArnHasBeenSet = true; m_imagePipelineArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the image pipeline that you wish to
     * retrieve. </p>
     */
    inline GetImagePipelineRequest& WithImagePipelineArn(const Aws::String& value) { SetImagePipelineArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the image pipeline that you wish to
     * retrieve. </p>
     */
    inline GetImagePipelineRequest& WithImagePipelineArn(Aws::String&& value) { SetImagePipelineArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the image pipeline that you wish to
     * retrieve. </p>
     */
    inline GetImagePipelineRequest& WithImagePipelineArn(const char* value) { SetImagePipelineArn(value); return *this;}

  private:

    Aws::String m_imagePipelineArn;
    bool m_imagePipelineArnHasBeenSet;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
