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

#include <aws/codeguru-reviewer/model/ListCodeReviewsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeGuruReviewer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListCodeReviewsRequest::ListCodeReviewsRequest() : 
    m_providerTypesHasBeenSet(false),
    m_statesHasBeenSet(false),
    m_repositoryNamesHasBeenSet(false),
    m_type(Type::NOT_SET),
    m_typeHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListCodeReviewsRequest::SerializePayload() const
{
  return {};
}

void ListCodeReviewsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_providerTypesHasBeenSet)
    {
      for(const auto& item : m_providerTypes)
      {
        ss << ProviderTypeMapper::GetNameForProviderType(item);
        uri.AddQueryStringParameter("ProviderTypes", ss.str());
        ss.str("");
      }
    }

    if(m_statesHasBeenSet)
    {
      for(const auto& item : m_states)
      {
        ss << JobStateMapper::GetNameForJobState(item);
        uri.AddQueryStringParameter("States", ss.str());
        ss.str("");
      }
    }

    if(m_repositoryNamesHasBeenSet)
    {
      for(const auto& item : m_repositoryNames)
      {
        ss << item;
        uri.AddQueryStringParameter("RepositoryNames", ss.str());
        ss.str("");
      }
    }

    if(m_typeHasBeenSet)
    {
      ss << TypeMapper::GetNameForType(m_type);
      uri.AddQueryStringParameter("Type", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("MaxResults", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("NextToken", ss.str());
      ss.str("");
    }

}



