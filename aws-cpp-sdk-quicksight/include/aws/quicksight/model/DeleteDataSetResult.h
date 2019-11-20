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
namespace QuickSight
{
namespace Model
{
  class AWS_QUICKSIGHT_API DeleteDataSetResult
  {
  public:
    DeleteDataSetResult();
    DeleteDataSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteDataSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the dataset.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the dataset.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN of the dataset.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN of the dataset.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN of the dataset.</p>
     */
    inline DeleteDataSetResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the dataset.</p>
     */
    inline DeleteDataSetResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the dataset.</p>
     */
    inline DeleteDataSetResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The ID for the dataset you want to create. This is unique per region per AWS
     * account.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }

    /**
     * <p>The ID for the dataset you want to create. This is unique per region per AWS
     * account.</p>
     */
    inline void SetDataSetId(const Aws::String& value) { m_dataSetId = value; }

    /**
     * <p>The ID for the dataset you want to create. This is unique per region per AWS
     * account.</p>
     */
    inline void SetDataSetId(Aws::String&& value) { m_dataSetId = std::move(value); }

    /**
     * <p>The ID for the dataset you want to create. This is unique per region per AWS
     * account.</p>
     */
    inline void SetDataSetId(const char* value) { m_dataSetId.assign(value); }

    /**
     * <p>The ID for the dataset you want to create. This is unique per region per AWS
     * account.</p>
     */
    inline DeleteDataSetResult& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}

    /**
     * <p>The ID for the dataset you want to create. This is unique per region per AWS
     * account.</p>
     */
    inline DeleteDataSetResult& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}

    /**
     * <p>The ID for the dataset you want to create. This is unique per region per AWS
     * account.</p>
     */
    inline DeleteDataSetResult& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}


    /**
     * <p>The AWS request ID for this operation.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The AWS request ID for this operation.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The AWS request ID for this operation.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The AWS request ID for this operation.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The AWS request ID for this operation.</p>
     */
    inline DeleteDataSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The AWS request ID for this operation.</p>
     */
    inline DeleteDataSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The AWS request ID for this operation.</p>
     */
    inline DeleteDataSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The http status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The http status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The http status of the request.</p>
     */
    inline DeleteDataSetResult& WithStatus(int value) { SetStatus(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_dataSetId;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
