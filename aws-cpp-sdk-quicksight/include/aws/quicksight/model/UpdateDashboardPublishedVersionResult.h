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
  class AWS_QUICKSIGHT_API UpdateDashboardPublishedVersionResult
  {
  public:
    UpdateDashboardPublishedVersionResult();
    UpdateDashboardPublishedVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateDashboardPublishedVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID for the dashboard.</p>
     */
    inline const Aws::String& GetDashboardId() const{ return m_dashboardId; }

    /**
     * <p>The ID for the dashboard.</p>
     */
    inline void SetDashboardId(const Aws::String& value) { m_dashboardId = value; }

    /**
     * <p>The ID for the dashboard.</p>
     */
    inline void SetDashboardId(Aws::String&& value) { m_dashboardId = std::move(value); }

    /**
     * <p>The ID for the dashboard.</p>
     */
    inline void SetDashboardId(const char* value) { m_dashboardId.assign(value); }

    /**
     * <p>The ID for the dashboard.</p>
     */
    inline UpdateDashboardPublishedVersionResult& WithDashboardId(const Aws::String& value) { SetDashboardId(value); return *this;}

    /**
     * <p>The ID for the dashboard.</p>
     */
    inline UpdateDashboardPublishedVersionResult& WithDashboardId(Aws::String&& value) { SetDashboardId(std::move(value)); return *this;}

    /**
     * <p>The ID for the dashboard.</p>
     */
    inline UpdateDashboardPublishedVersionResult& WithDashboardId(const char* value) { SetDashboardId(value); return *this;}


    /**
     * <p>The ARN of the dashboard.</p>
     */
    inline const Aws::String& GetDashboardArn() const{ return m_dashboardArn; }

    /**
     * <p>The ARN of the dashboard.</p>
     */
    inline void SetDashboardArn(const Aws::String& value) { m_dashboardArn = value; }

    /**
     * <p>The ARN of the dashboard.</p>
     */
    inline void SetDashboardArn(Aws::String&& value) { m_dashboardArn = std::move(value); }

    /**
     * <p>The ARN of the dashboard.</p>
     */
    inline void SetDashboardArn(const char* value) { m_dashboardArn.assign(value); }

    /**
     * <p>The ARN of the dashboard.</p>
     */
    inline UpdateDashboardPublishedVersionResult& WithDashboardArn(const Aws::String& value) { SetDashboardArn(value); return *this;}

    /**
     * <p>The ARN of the dashboard.</p>
     */
    inline UpdateDashboardPublishedVersionResult& WithDashboardArn(Aws::String&& value) { SetDashboardArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the dashboard.</p>
     */
    inline UpdateDashboardPublishedVersionResult& WithDashboardArn(const char* value) { SetDashboardArn(value); return *this;}


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
    inline UpdateDashboardPublishedVersionResult& WithStatus(int value) { SetStatus(value); return *this;}


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
    inline UpdateDashboardPublishedVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The AWS request ID for this operation.</p>
     */
    inline UpdateDashboardPublishedVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The AWS request ID for this operation.</p>
     */
    inline UpdateDashboardPublishedVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_dashboardId;

    Aws::String m_dashboardArn;

    int m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
