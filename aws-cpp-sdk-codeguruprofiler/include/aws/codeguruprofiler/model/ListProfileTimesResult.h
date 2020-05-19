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
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codeguruprofiler/model/ProfileTime.h>
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
namespace CodeGuruProfiler
{
namespace Model
{
  /**
   * <p>Response for ListProfileTimes operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/ListProfileTimesResponse">AWS
   * API Reference</a></p>
   */
  class AWS_CODEGURUPROFILER_API ListProfileTimesResult
  {
  public:
    ListProfileTimesResult();
    ListProfileTimesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListProfileTimesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListProfileTimesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListProfileTimesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListProfileTimesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>List of start times of the available profiles for the aggregation period in
     * the specified time range.</p>
     */
    inline const Aws::Vector<ProfileTime>& GetProfileTimes() const{ return m_profileTimes; }

    /**
     * <p>List of start times of the available profiles for the aggregation period in
     * the specified time range.</p>
     */
    inline void SetProfileTimes(const Aws::Vector<ProfileTime>& value) { m_profileTimes = value; }

    /**
     * <p>List of start times of the available profiles for the aggregation period in
     * the specified time range.</p>
     */
    inline void SetProfileTimes(Aws::Vector<ProfileTime>&& value) { m_profileTimes = std::move(value); }

    /**
     * <p>List of start times of the available profiles for the aggregation period in
     * the specified time range.</p>
     */
    inline ListProfileTimesResult& WithProfileTimes(const Aws::Vector<ProfileTime>& value) { SetProfileTimes(value); return *this;}

    /**
     * <p>List of start times of the available profiles for the aggregation period in
     * the specified time range.</p>
     */
    inline ListProfileTimesResult& WithProfileTimes(Aws::Vector<ProfileTime>&& value) { SetProfileTimes(std::move(value)); return *this;}

    /**
     * <p>List of start times of the available profiles for the aggregation period in
     * the specified time range.</p>
     */
    inline ListProfileTimesResult& AddProfileTimes(const ProfileTime& value) { m_profileTimes.push_back(value); return *this; }

    /**
     * <p>List of start times of the available profiles for the aggregation period in
     * the specified time range.</p>
     */
    inline ListProfileTimesResult& AddProfileTimes(ProfileTime&& value) { m_profileTimes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ProfileTime> m_profileTimes;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
