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
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/CodeBuildRequest.h>
#include <aws/codebuild/model/SortOrderType.h>
#include <aws/codebuild/model/SharedResourceSortByType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

  /**
   */
  class AWS_CODEBUILD_API ListSharedReportGroupsRequest : public CodeBuildRequest
  {
  public:
    ListSharedReportGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSharedReportGroups"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The order in which to list shared report groups. Valid values include:</p>
     * <ul> <li> <p> <code>ASCENDING</code>: List in ascending order.</p> </li> <li>
     * <p> <code>DESCENDING</code>: List in descending order.</p> </li> </ul>
     */
    inline const SortOrderType& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The order in which to list shared report groups. Valid values include:</p>
     * <ul> <li> <p> <code>ASCENDING</code>: List in ascending order.</p> </li> <li>
     * <p> <code>DESCENDING</code>: List in descending order.</p> </li> </ul>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The order in which to list shared report groups. Valid values include:</p>
     * <ul> <li> <p> <code>ASCENDING</code>: List in ascending order.</p> </li> <li>
     * <p> <code>DESCENDING</code>: List in descending order.</p> </li> </ul>
     */
    inline void SetSortOrder(const SortOrderType& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The order in which to list shared report groups. Valid values include:</p>
     * <ul> <li> <p> <code>ASCENDING</code>: List in ascending order.</p> </li> <li>
     * <p> <code>DESCENDING</code>: List in descending order.</p> </li> </ul>
     */
    inline void SetSortOrder(SortOrderType&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The order in which to list shared report groups. Valid values include:</p>
     * <ul> <li> <p> <code>ASCENDING</code>: List in ascending order.</p> </li> <li>
     * <p> <code>DESCENDING</code>: List in descending order.</p> </li> </ul>
     */
    inline ListSharedReportGroupsRequest& WithSortOrder(const SortOrderType& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The order in which to list shared report groups. Valid values include:</p>
     * <ul> <li> <p> <code>ASCENDING</code>: List in ascending order.</p> </li> <li>
     * <p> <code>DESCENDING</code>: List in descending order.</p> </li> </ul>
     */
    inline ListSharedReportGroupsRequest& WithSortOrder(SortOrderType&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p> The criterion to be used to list report groups shared with the current AWS
     * account or user. Valid values include: </p> <ul> <li> <p> <code>ARN</code>: List
     * based on the ARN. </p> </li> <li> <p> <code>MODIFIED_TIME</code>: List based on
     * when information about the shared report group was last changed. </p> </li>
     * </ul>
     */
    inline const SharedResourceSortByType& GetSortBy() const{ return m_sortBy; }

    /**
     * <p> The criterion to be used to list report groups shared with the current AWS
     * account or user. Valid values include: </p> <ul> <li> <p> <code>ARN</code>: List
     * based on the ARN. </p> </li> <li> <p> <code>MODIFIED_TIME</code>: List based on
     * when information about the shared report group was last changed. </p> </li>
     * </ul>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p> The criterion to be used to list report groups shared with the current AWS
     * account or user. Valid values include: </p> <ul> <li> <p> <code>ARN</code>: List
     * based on the ARN. </p> </li> <li> <p> <code>MODIFIED_TIME</code>: List based on
     * when information about the shared report group was last changed. </p> </li>
     * </ul>
     */
    inline void SetSortBy(const SharedResourceSortByType& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p> The criterion to be used to list report groups shared with the current AWS
     * account or user. Valid values include: </p> <ul> <li> <p> <code>ARN</code>: List
     * based on the ARN. </p> </li> <li> <p> <code>MODIFIED_TIME</code>: List based on
     * when information about the shared report group was last changed. </p> </li>
     * </ul>
     */
    inline void SetSortBy(SharedResourceSortByType&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p> The criterion to be used to list report groups shared with the current AWS
     * account or user. Valid values include: </p> <ul> <li> <p> <code>ARN</code>: List
     * based on the ARN. </p> </li> <li> <p> <code>MODIFIED_TIME</code>: List based on
     * when information about the shared report group was last changed. </p> </li>
     * </ul>
     */
    inline ListSharedReportGroupsRequest& WithSortBy(const SharedResourceSortByType& value) { SetSortBy(value); return *this;}

    /**
     * <p> The criterion to be used to list report groups shared with the current AWS
     * account or user. Valid values include: </p> <ul> <li> <p> <code>ARN</code>: List
     * based on the ARN. </p> </li> <li> <p> <code>MODIFIED_TIME</code>: List based on
     * when information about the shared report group was last changed. </p> </li>
     * </ul>
     */
    inline ListSharedReportGroupsRequest& WithSortBy(SharedResourceSortByType&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p> During a previous call, the maximum number of items that can be returned is
     * the value specified in <code>maxResults</code>. If there more items in the list,
     * then a unique string called a <i>nextToken</i> is returned. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call. To get all of the items in the list, keep calling this operation with
     * each subsequent next token that is returned, until no more next tokens are
     * returned. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> During a previous call, the maximum number of items that can be returned is
     * the value specified in <code>maxResults</code>. If there more items in the list,
     * then a unique string called a <i>nextToken</i> is returned. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call. To get all of the items in the list, keep calling this operation with
     * each subsequent next token that is returned, until no more next tokens are
     * returned. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> During a previous call, the maximum number of items that can be returned is
     * the value specified in <code>maxResults</code>. If there more items in the list,
     * then a unique string called a <i>nextToken</i> is returned. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call. To get all of the items in the list, keep calling this operation with
     * each subsequent next token that is returned, until no more next tokens are
     * returned. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> During a previous call, the maximum number of items that can be returned is
     * the value specified in <code>maxResults</code>. If there more items in the list,
     * then a unique string called a <i>nextToken</i> is returned. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call. To get all of the items in the list, keep calling this operation with
     * each subsequent next token that is returned, until no more next tokens are
     * returned. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> During a previous call, the maximum number of items that can be returned is
     * the value specified in <code>maxResults</code>. If there more items in the list,
     * then a unique string called a <i>nextToken</i> is returned. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call. To get all of the items in the list, keep calling this operation with
     * each subsequent next token that is returned, until no more next tokens are
     * returned. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> During a previous call, the maximum number of items that can be returned is
     * the value specified in <code>maxResults</code>. If there more items in the list,
     * then a unique string called a <i>nextToken</i> is returned. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call. To get all of the items in the list, keep calling this operation with
     * each subsequent next token that is returned, until no more next tokens are
     * returned. </p>
     */
    inline ListSharedReportGroupsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> During a previous call, the maximum number of items that can be returned is
     * the value specified in <code>maxResults</code>. If there more items in the list,
     * then a unique string called a <i>nextToken</i> is returned. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call. To get all of the items in the list, keep calling this operation with
     * each subsequent next token that is returned, until no more next tokens are
     * returned. </p>
     */
    inline ListSharedReportGroupsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> During a previous call, the maximum number of items that can be returned is
     * the value specified in <code>maxResults</code>. If there more items in the list,
     * then a unique string called a <i>nextToken</i> is returned. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call. To get all of the items in the list, keep calling this operation with
     * each subsequent next token that is returned, until no more next tokens are
     * returned. </p>
     */
    inline ListSharedReportGroupsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> The maximum number of paginated shared report groups per response. Use
     * <code>nextToken</code> to iterate pages in the list of returned
     * <code>ReportGroup</code> objects. The default value is 100. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> The maximum number of paginated shared report groups per response. Use
     * <code>nextToken</code> to iterate pages in the list of returned
     * <code>ReportGroup</code> objects. The default value is 100. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> The maximum number of paginated shared report groups per response. Use
     * <code>nextToken</code> to iterate pages in the list of returned
     * <code>ReportGroup</code> objects. The default value is 100. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> The maximum number of paginated shared report groups per response. Use
     * <code>nextToken</code> to iterate pages in the list of returned
     * <code>ReportGroup</code> objects. The default value is 100. </p>
     */
    inline ListSharedReportGroupsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    SortOrderType m_sortOrder;
    bool m_sortOrderHasBeenSet;

    SharedResourceSortByType m_sortBy;
    bool m_sortByHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
