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
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/codeguru-reviewer/CodeGuruReviewerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CodeGuruReviewer
{
namespace Model
{

  /**
   */
  class AWS_CODEGURUREVIEWER_API ListRecommendationFeedbackRequest : public CodeGuruReviewerRequest
  {
  public:
    ListRecommendationFeedbackRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRecommendationFeedback"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> If nextToken is returned, there are more results available. The value of
     * nextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page. Keep all other arguments
     * unchanged. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> If nextToken is returned, there are more results available. The value of
     * nextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page. Keep all other arguments
     * unchanged. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> If nextToken is returned, there are more results available. The value of
     * nextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page. Keep all other arguments
     * unchanged. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> If nextToken is returned, there are more results available. The value of
     * nextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page. Keep all other arguments
     * unchanged. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> If nextToken is returned, there are more results available. The value of
     * nextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page. Keep all other arguments
     * unchanged. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> If nextToken is returned, there are more results available. The value of
     * nextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page. Keep all other arguments
     * unchanged. </p>
     */
    inline ListRecommendationFeedbackRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> If nextToken is returned, there are more results available. The value of
     * nextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page. Keep all other arguments
     * unchanged. </p>
     */
    inline ListRecommendationFeedbackRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> If nextToken is returned, there are more results available. The value of
     * nextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page. Keep all other arguments
     * unchanged. </p>
     */
    inline ListRecommendationFeedbackRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> The maximum number of results that are returned per call. The default is
     * 100. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> The maximum number of results that are returned per call. The default is
     * 100. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> The maximum number of results that are returned per call. The default is
     * 100. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> The maximum number of results that are returned per call. The default is
     * 100. </p>
     */
    inline ListRecommendationFeedbackRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) that identifies the code review. </p>
     */
    inline const Aws::String& GetCodeReviewArn() const{ return m_codeReviewArn; }

    /**
     * <p> The Amazon Resource Name (ARN) that identifies the code review. </p>
     */
    inline bool CodeReviewArnHasBeenSet() const { return m_codeReviewArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) that identifies the code review. </p>
     */
    inline void SetCodeReviewArn(const Aws::String& value) { m_codeReviewArnHasBeenSet = true; m_codeReviewArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) that identifies the code review. </p>
     */
    inline void SetCodeReviewArn(Aws::String&& value) { m_codeReviewArnHasBeenSet = true; m_codeReviewArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) that identifies the code review. </p>
     */
    inline void SetCodeReviewArn(const char* value) { m_codeReviewArnHasBeenSet = true; m_codeReviewArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) that identifies the code review. </p>
     */
    inline ListRecommendationFeedbackRequest& WithCodeReviewArn(const Aws::String& value) { SetCodeReviewArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) that identifies the code review. </p>
     */
    inline ListRecommendationFeedbackRequest& WithCodeReviewArn(Aws::String&& value) { SetCodeReviewArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) that identifies the code review. </p>
     */
    inline ListRecommendationFeedbackRequest& WithCodeReviewArn(const char* value) { SetCodeReviewArn(value); return *this;}


    /**
     * <p> Filter on userIds that need to be applied before displaying the result. This
     * can be used to query all the recommendation feedback for a code review from a
     * given user. </p>
     */
    inline const Aws::Vector<Aws::String>& GetUserIds() const{ return m_userIds; }

    /**
     * <p> Filter on userIds that need to be applied before displaying the result. This
     * can be used to query all the recommendation feedback for a code review from a
     * given user. </p>
     */
    inline bool UserIdsHasBeenSet() const { return m_userIdsHasBeenSet; }

    /**
     * <p> Filter on userIds that need to be applied before displaying the result. This
     * can be used to query all the recommendation feedback for a code review from a
     * given user. </p>
     */
    inline void SetUserIds(const Aws::Vector<Aws::String>& value) { m_userIdsHasBeenSet = true; m_userIds = value; }

    /**
     * <p> Filter on userIds that need to be applied before displaying the result. This
     * can be used to query all the recommendation feedback for a code review from a
     * given user. </p>
     */
    inline void SetUserIds(Aws::Vector<Aws::String>&& value) { m_userIdsHasBeenSet = true; m_userIds = std::move(value); }

    /**
     * <p> Filter on userIds that need to be applied before displaying the result. This
     * can be used to query all the recommendation feedback for a code review from a
     * given user. </p>
     */
    inline ListRecommendationFeedbackRequest& WithUserIds(const Aws::Vector<Aws::String>& value) { SetUserIds(value); return *this;}

    /**
     * <p> Filter on userIds that need to be applied before displaying the result. This
     * can be used to query all the recommendation feedback for a code review from a
     * given user. </p>
     */
    inline ListRecommendationFeedbackRequest& WithUserIds(Aws::Vector<Aws::String>&& value) { SetUserIds(std::move(value)); return *this;}

    /**
     * <p> Filter on userIds that need to be applied before displaying the result. This
     * can be used to query all the recommendation feedback for a code review from a
     * given user. </p>
     */
    inline ListRecommendationFeedbackRequest& AddUserIds(const Aws::String& value) { m_userIdsHasBeenSet = true; m_userIds.push_back(value); return *this; }

    /**
     * <p> Filter on userIds that need to be applied before displaying the result. This
     * can be used to query all the recommendation feedback for a code review from a
     * given user. </p>
     */
    inline ListRecommendationFeedbackRequest& AddUserIds(Aws::String&& value) { m_userIdsHasBeenSet = true; m_userIds.push_back(std::move(value)); return *this; }

    /**
     * <p> Filter on userIds that need to be applied before displaying the result. This
     * can be used to query all the recommendation feedback for a code review from a
     * given user. </p>
     */
    inline ListRecommendationFeedbackRequest& AddUserIds(const char* value) { m_userIdsHasBeenSet = true; m_userIds.push_back(value); return *this; }


    /**
     * <p> Filter on recommendationIds that need to be applied before displaying the
     * result. This can be used to query all the recommendation feedback for a given
     * recommendation. </p>
     */
    inline const Aws::Vector<Aws::String>& GetRecommendationIds() const{ return m_recommendationIds; }

    /**
     * <p> Filter on recommendationIds that need to be applied before displaying the
     * result. This can be used to query all the recommendation feedback for a given
     * recommendation. </p>
     */
    inline bool RecommendationIdsHasBeenSet() const { return m_recommendationIdsHasBeenSet; }

    /**
     * <p> Filter on recommendationIds that need to be applied before displaying the
     * result. This can be used to query all the recommendation feedback for a given
     * recommendation. </p>
     */
    inline void SetRecommendationIds(const Aws::Vector<Aws::String>& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds = value; }

    /**
     * <p> Filter on recommendationIds that need to be applied before displaying the
     * result. This can be used to query all the recommendation feedback for a given
     * recommendation. </p>
     */
    inline void SetRecommendationIds(Aws::Vector<Aws::String>&& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds = std::move(value); }

    /**
     * <p> Filter on recommendationIds that need to be applied before displaying the
     * result. This can be used to query all the recommendation feedback for a given
     * recommendation. </p>
     */
    inline ListRecommendationFeedbackRequest& WithRecommendationIds(const Aws::Vector<Aws::String>& value) { SetRecommendationIds(value); return *this;}

    /**
     * <p> Filter on recommendationIds that need to be applied before displaying the
     * result. This can be used to query all the recommendation feedback for a given
     * recommendation. </p>
     */
    inline ListRecommendationFeedbackRequest& WithRecommendationIds(Aws::Vector<Aws::String>&& value) { SetRecommendationIds(std::move(value)); return *this;}

    /**
     * <p> Filter on recommendationIds that need to be applied before displaying the
     * result. This can be used to query all the recommendation feedback for a given
     * recommendation. </p>
     */
    inline ListRecommendationFeedbackRequest& AddRecommendationIds(const Aws::String& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds.push_back(value); return *this; }

    /**
     * <p> Filter on recommendationIds that need to be applied before displaying the
     * result. This can be used to query all the recommendation feedback for a given
     * recommendation. </p>
     */
    inline ListRecommendationFeedbackRequest& AddRecommendationIds(Aws::String&& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds.push_back(std::move(value)); return *this; }

    /**
     * <p> Filter on recommendationIds that need to be applied before displaying the
     * result. This can be used to query all the recommendation feedback for a given
     * recommendation. </p>
     */
    inline ListRecommendationFeedbackRequest& AddRecommendationIds(const char* value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds.push_back(value); return *this; }

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_codeReviewArn;
    bool m_codeReviewArnHasBeenSet;

    Aws::Vector<Aws::String> m_userIds;
    bool m_userIdsHasBeenSet;

    Aws::Vector<Aws::String> m_recommendationIds;
    bool m_recommendationIdsHasBeenSet;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
