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
  class AWS_IMAGEBUILDER_API DeleteComponentRequest : public ImagebuilderRequest
  {
  public:
    DeleteComponentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteComponent"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the component build version to delete. </p>
     */
    inline const Aws::String& GetComponentBuildVersionArn() const{ return m_componentBuildVersionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the component build version to delete. </p>
     */
    inline bool ComponentBuildVersionArnHasBeenSet() const { return m_componentBuildVersionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the component build version to delete. </p>
     */
    inline void SetComponentBuildVersionArn(const Aws::String& value) { m_componentBuildVersionArnHasBeenSet = true; m_componentBuildVersionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the component build version to delete. </p>
     */
    inline void SetComponentBuildVersionArn(Aws::String&& value) { m_componentBuildVersionArnHasBeenSet = true; m_componentBuildVersionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the component build version to delete. </p>
     */
    inline void SetComponentBuildVersionArn(const char* value) { m_componentBuildVersionArnHasBeenSet = true; m_componentBuildVersionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the component build version to delete. </p>
     */
    inline DeleteComponentRequest& WithComponentBuildVersionArn(const Aws::String& value) { SetComponentBuildVersionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the component build version to delete. </p>
     */
    inline DeleteComponentRequest& WithComponentBuildVersionArn(Aws::String&& value) { SetComponentBuildVersionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the component build version to delete. </p>
     */
    inline DeleteComponentRequest& WithComponentBuildVersionArn(const char* value) { SetComponentBuildVersionArn(value); return *this;}

  private:

    Aws::String m_componentBuildVersionArn;
    bool m_componentBuildVersionArnHasBeenSet;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
