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
#include <aws/codeguruprofiler/model/ProfilingGroupDescription.h>
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
   * <p>Response for ListProfilingGroups operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/ListProfilingGroupsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_CODEGURUPROFILER_API ListProfilingGroupsResult
  {
  public:
    ListProfilingGroupsResult();
    ListProfilingGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListProfilingGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListProfilingGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListProfilingGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListProfilingGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetProfilingGroupNames() const{ return m_profilingGroupNames; }

    
    inline void SetProfilingGroupNames(const Aws::Vector<Aws::String>& value) { m_profilingGroupNames = value; }

    
    inline void SetProfilingGroupNames(Aws::Vector<Aws::String>&& value) { m_profilingGroupNames = std::move(value); }

    
    inline ListProfilingGroupsResult& WithProfilingGroupNames(const Aws::Vector<Aws::String>& value) { SetProfilingGroupNames(value); return *this;}

    
    inline ListProfilingGroupsResult& WithProfilingGroupNames(Aws::Vector<Aws::String>&& value) { SetProfilingGroupNames(std::move(value)); return *this;}

    
    inline ListProfilingGroupsResult& AddProfilingGroupNames(const Aws::String& value) { m_profilingGroupNames.push_back(value); return *this; }

    
    inline ListProfilingGroupsResult& AddProfilingGroupNames(Aws::String&& value) { m_profilingGroupNames.push_back(std::move(value)); return *this; }

    
    inline ListProfilingGroupsResult& AddProfilingGroupNames(const char* value) { m_profilingGroupNames.push_back(value); return *this; }


    
    inline const Aws::Vector<ProfilingGroupDescription>& GetProfilingGroups() const{ return m_profilingGroups; }

    
    inline void SetProfilingGroups(const Aws::Vector<ProfilingGroupDescription>& value) { m_profilingGroups = value; }

    
    inline void SetProfilingGroups(Aws::Vector<ProfilingGroupDescription>&& value) { m_profilingGroups = std::move(value); }

    
    inline ListProfilingGroupsResult& WithProfilingGroups(const Aws::Vector<ProfilingGroupDescription>& value) { SetProfilingGroups(value); return *this;}

    
    inline ListProfilingGroupsResult& WithProfilingGroups(Aws::Vector<ProfilingGroupDescription>&& value) { SetProfilingGroups(std::move(value)); return *this;}

    
    inline ListProfilingGroupsResult& AddProfilingGroups(const ProfilingGroupDescription& value) { m_profilingGroups.push_back(value); return *this; }

    
    inline ListProfilingGroupsResult& AddProfilingGroups(ProfilingGroupDescription&& value) { m_profilingGroups.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<Aws::String> m_profilingGroupNames;

    Aws::Vector<ProfilingGroupDescription> m_profilingGroups;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
