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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/Filter.h>
#include <utility>

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

  /**
   */
  class AWS_IMAGEBUILDER_API ListImageBuildVersionsRequest : public ImagebuilderRequest
  {
  public:
    ListImageBuildVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListImageBuildVersions"; }

    Aws::String SerializePayload() const override;


    /**
     * <p> The Amazon Resource Name (ARN) of the image whose build versions you want to
     * retrieve. </p>
     */
    inline const Aws::String& GetImageVersionArn() const{ return m_imageVersionArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the image whose build versions you want to
     * retrieve. </p>
     */
    inline bool ImageVersionArnHasBeenSet() const { return m_imageVersionArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the image whose build versions you want to
     * retrieve. </p>
     */
    inline void SetImageVersionArn(const Aws::String& value) { m_imageVersionArnHasBeenSet = true; m_imageVersionArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the image whose build versions you want to
     * retrieve. </p>
     */
    inline void SetImageVersionArn(Aws::String&& value) { m_imageVersionArnHasBeenSet = true; m_imageVersionArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the image whose build versions you want to
     * retrieve. </p>
     */
    inline void SetImageVersionArn(const char* value) { m_imageVersionArnHasBeenSet = true; m_imageVersionArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the image whose build versions you want to
     * retrieve. </p>
     */
    inline ListImageBuildVersionsRequest& WithImageVersionArn(const Aws::String& value) { SetImageVersionArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the image whose build versions you want to
     * retrieve. </p>
     */
    inline ListImageBuildVersionsRequest& WithImageVersionArn(Aws::String&& value) { SetImageVersionArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the image whose build versions you want to
     * retrieve. </p>
     */
    inline ListImageBuildVersionsRequest& WithImageVersionArn(const char* value) { SetImageVersionArn(value); return *this;}


    /**
     * <p> The filters. </p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p> The filters. </p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p> The filters. </p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p> The filters. </p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p> The filters. </p>
     */
    inline ListImageBuildVersionsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p> The filters. </p>
     */
    inline ListImageBuildVersionsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p> The filters. </p>
     */
    inline ListImageBuildVersionsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p> The filters. </p>
     */
    inline ListImageBuildVersionsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p> The maximum items to return in a request. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> The maximum items to return in a request. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> The maximum items to return in a request. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> The maximum items to return in a request. </p>
     */
    inline ListImageBuildVersionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p> A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response. </p>
     */
    inline ListImageBuildVersionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response. </p>
     */
    inline ListImageBuildVersionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response. </p>
     */
    inline ListImageBuildVersionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_imageVersionArn;
    bool m_imageVersionArnHasBeenSet;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
