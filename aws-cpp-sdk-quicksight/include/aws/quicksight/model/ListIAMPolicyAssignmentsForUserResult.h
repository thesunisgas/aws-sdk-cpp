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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ActiveIAMPolicyAssignment.h>
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
  class AWS_QUICKSIGHT_API ListIAMPolicyAssignmentsForUserResult
  {
  public:
    ListIAMPolicyAssignmentsForUserResult();
    ListIAMPolicyAssignmentsForUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListIAMPolicyAssignmentsForUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Active assignments for this user.</p>
     */
    inline const Aws::Vector<ActiveIAMPolicyAssignment>& GetActiveAssignments() const{ return m_activeAssignments; }

    /**
     * <p>Active assignments for this user.</p>
     */
    inline void SetActiveAssignments(const Aws::Vector<ActiveIAMPolicyAssignment>& value) { m_activeAssignments = value; }

    /**
     * <p>Active assignments for this user.</p>
     */
    inline void SetActiveAssignments(Aws::Vector<ActiveIAMPolicyAssignment>&& value) { m_activeAssignments = std::move(value); }

    /**
     * <p>Active assignments for this user.</p>
     */
    inline ListIAMPolicyAssignmentsForUserResult& WithActiveAssignments(const Aws::Vector<ActiveIAMPolicyAssignment>& value) { SetActiveAssignments(value); return *this;}

    /**
     * <p>Active assignments for this user.</p>
     */
    inline ListIAMPolicyAssignmentsForUserResult& WithActiveAssignments(Aws::Vector<ActiveIAMPolicyAssignment>&& value) { SetActiveAssignments(std::move(value)); return *this;}

    /**
     * <p>Active assignments for this user.</p>
     */
    inline ListIAMPolicyAssignmentsForUserResult& AddActiveAssignments(const ActiveIAMPolicyAssignment& value) { m_activeAssignments.push_back(value); return *this; }

    /**
     * <p>Active assignments for this user.</p>
     */
    inline ListIAMPolicyAssignmentsForUserResult& AddActiveAssignments(ActiveIAMPolicyAssignment&& value) { m_activeAssignments.push_back(std::move(value)); return *this; }


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
    inline ListIAMPolicyAssignmentsForUserResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The AWS request ID for this operation.</p>
     */
    inline ListIAMPolicyAssignmentsForUserResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The AWS request ID for this operation.</p>
     */
    inline ListIAMPolicyAssignmentsForUserResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListIAMPolicyAssignmentsForUserResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListIAMPolicyAssignmentsForUserResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListIAMPolicyAssignmentsForUserResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline ListIAMPolicyAssignmentsForUserResult& WithStatus(int value) { SetStatus(value); return *this;}

  private:

    Aws::Vector<ActiveIAMPolicyAssignment> m_activeAssignments;

    Aws::String m_requestId;

    Aws::String m_nextToken;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
