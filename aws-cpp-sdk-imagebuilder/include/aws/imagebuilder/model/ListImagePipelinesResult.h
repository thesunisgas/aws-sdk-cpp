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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/ImagePipeline.h>
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
  class AWS_IMAGEBUILDER_API ListImagePipelinesResult
  {
  public:
    ListImagePipelinesResult();
    ListImagePipelinesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListImagePipelinesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The request ID that uniquely identifies this request. </p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p> The request ID that uniquely identifies this request. </p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p> The request ID that uniquely identifies this request. </p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p> The request ID that uniquely identifies this request. </p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p> The request ID that uniquely identifies this request. </p>
     */
    inline ListImagePipelinesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p> The request ID that uniquely identifies this request. </p>
     */
    inline ListImagePipelinesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p> The request ID that uniquely identifies this request. </p>
     */
    inline ListImagePipelinesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p> The list of image pipelines. </p>
     */
    inline const Aws::Vector<ImagePipeline>& GetImagePipelineList() const{ return m_imagePipelineList; }

    /**
     * <p> The list of image pipelines. </p>
     */
    inline void SetImagePipelineList(const Aws::Vector<ImagePipeline>& value) { m_imagePipelineList = value; }

    /**
     * <p> The list of image pipelines. </p>
     */
    inline void SetImagePipelineList(Aws::Vector<ImagePipeline>&& value) { m_imagePipelineList = std::move(value); }

    /**
     * <p> The list of image pipelines. </p>
     */
    inline ListImagePipelinesResult& WithImagePipelineList(const Aws::Vector<ImagePipeline>& value) { SetImagePipelineList(value); return *this;}

    /**
     * <p> The list of image pipelines. </p>
     */
    inline ListImagePipelinesResult& WithImagePipelineList(Aws::Vector<ImagePipeline>&& value) { SetImagePipelineList(std::move(value)); return *this;}

    /**
     * <p> The list of image pipelines. </p>
     */
    inline ListImagePipelinesResult& AddImagePipelineList(const ImagePipeline& value) { m_imagePipelineList.push_back(value); return *this; }

    /**
     * <p> The list of image pipelines. </p>
     */
    inline ListImagePipelinesResult& AddImagePipelineList(ImagePipeline&& value) { m_imagePipelineList.push_back(std::move(value)); return *this; }


    /**
     * <p> The next token used for paginated responses. When this is not empty then
     * there are additional elements that the service that not include in this request.
     * Use this token with the next request to retrieve additional object. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The next token used for paginated responses. When this is not empty then
     * there are additional elements that the service that not include in this request.
     * Use this token with the next request to retrieve additional object. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> The next token used for paginated responses. When this is not empty then
     * there are additional elements that the service that not include in this request.
     * Use this token with the next request to retrieve additional object. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> The next token used for paginated responses. When this is not empty then
     * there are additional elements that the service that not include in this request.
     * Use this token with the next request to retrieve additional object. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> The next token used for paginated responses. When this is not empty then
     * there are additional elements that the service that not include in this request.
     * Use this token with the next request to retrieve additional object. </p>
     */
    inline ListImagePipelinesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The next token used for paginated responses. When this is not empty then
     * there are additional elements that the service that not include in this request.
     * Use this token with the next request to retrieve additional object. </p>
     */
    inline ListImagePipelinesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The next token used for paginated responses. When this is not empty then
     * there are additional elements that the service that not include in this request.
     * Use this token with the next request to retrieve additional object. </p>
     */
    inline ListImagePipelinesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_requestId;

    Aws::Vector<ImagePipeline> m_imagePipelineList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
