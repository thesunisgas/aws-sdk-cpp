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
  class AWS_IMAGEBUILDER_API GetComponentPolicyRequest : public ImagebuilderRequest
  {
  public:
    GetComponentPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetComponentPolicy"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> The Amazon Resource Name (ARN) of the component whose policy you wish to
     * retrieve. </p>
     */
    inline const Aws::String& GetComponentArn() const{ return m_componentArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the component whose policy you wish to
     * retrieve. </p>
     */
    inline bool ComponentArnHasBeenSet() const { return m_componentArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the component whose policy you wish to
     * retrieve. </p>
     */
    inline void SetComponentArn(const Aws::String& value) { m_componentArnHasBeenSet = true; m_componentArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the component whose policy you wish to
     * retrieve. </p>
     */
    inline void SetComponentArn(Aws::String&& value) { m_componentArnHasBeenSet = true; m_componentArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the component whose policy you wish to
     * retrieve. </p>
     */
    inline void SetComponentArn(const char* value) { m_componentArnHasBeenSet = true; m_componentArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the component whose policy you wish to
     * retrieve. </p>
     */
    inline GetComponentPolicyRequest& WithComponentArn(const Aws::String& value) { SetComponentArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the component whose policy you wish to
     * retrieve. </p>
     */
    inline GetComponentPolicyRequest& WithComponentArn(Aws::String&& value) { SetComponentArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the component whose policy you wish to
     * retrieve. </p>
     */
    inline GetComponentPolicyRequest& WithComponentArn(const char* value) { SetComponentArn(value); return *this;}

  private:

    Aws::String m_componentArn;
    bool m_componentArnHasBeenSet;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
