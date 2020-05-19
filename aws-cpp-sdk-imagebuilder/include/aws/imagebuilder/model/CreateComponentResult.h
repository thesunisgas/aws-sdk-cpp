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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace imagebuilder
{
namespace Model
{
  class AWS_IMAGEBUILDER_API CreateComponentResult
  {
  public:
    CreateComponentResult();
    CreateComponentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateComponentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>CThe request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>CThe request ID that uniquely identifies this request.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>CThe request ID that uniquely identifies this request.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>CThe request ID that uniquely identifies this request.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>CThe request ID that uniquely identifies this request.</p>
     */
    inline CreateComponentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>CThe request ID that uniquely identifies this request.</p>
     */
    inline CreateComponentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>CThe request ID that uniquely identifies this request.</p>
     */
    inline CreateComponentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>CThe idempotency token used to make this request idempotent.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>CThe idempotency token used to make this request idempotent.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientToken = value; }

    /**
     * <p>CThe idempotency token used to make this request idempotent.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientToken = std::move(value); }

    /**
     * <p>CThe idempotency token used to make this request idempotent.</p>
     */
    inline void SetClientToken(const char* value) { m_clientToken.assign(value); }

    /**
     * <p>CThe idempotency token used to make this request idempotent.</p>
     */
    inline CreateComponentResult& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>CThe idempotency token used to make this request idempotent.</p>
     */
    inline CreateComponentResult& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>CThe idempotency token used to make this request idempotent.</p>
     */
    inline CreateComponentResult& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>CThe Amazon Resource Name (ARN) of the component that was created by this
     * request.</p>
     */
    inline const Aws::String& GetComponentBuildVersionArn() const{ return m_componentBuildVersionArn; }

    /**
     * <p>CThe Amazon Resource Name (ARN) of the component that was created by this
     * request.</p>
     */
    inline void SetComponentBuildVersionArn(const Aws::String& value) { m_componentBuildVersionArn = value; }

    /**
     * <p>CThe Amazon Resource Name (ARN) of the component that was created by this
     * request.</p>
     */
    inline void SetComponentBuildVersionArn(Aws::String&& value) { m_componentBuildVersionArn = std::move(value); }

    /**
     * <p>CThe Amazon Resource Name (ARN) of the component that was created by this
     * request.</p>
     */
    inline void SetComponentBuildVersionArn(const char* value) { m_componentBuildVersionArn.assign(value); }

    /**
     * <p>CThe Amazon Resource Name (ARN) of the component that was created by this
     * request.</p>
     */
    inline CreateComponentResult& WithComponentBuildVersionArn(const Aws::String& value) { SetComponentBuildVersionArn(value); return *this;}

    /**
     * <p>CThe Amazon Resource Name (ARN) of the component that was created by this
     * request.</p>
     */
    inline CreateComponentResult& WithComponentBuildVersionArn(Aws::String&& value) { SetComponentBuildVersionArn(std::move(value)); return *this;}

    /**
     * <p>CThe Amazon Resource Name (ARN) of the component that was created by this
     * request.</p>
     */
    inline CreateComponentResult& WithComponentBuildVersionArn(const char* value) { SetComponentBuildVersionArn(value); return *this;}

  private:

    Aws::String m_requestId;

    Aws::String m_clientToken;

    Aws::String m_componentBuildVersionArn;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
