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
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/model/ApiCache.h>
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
namespace AppSync
{
namespace Model
{
  /**
   * <p>Represents the output of a <code>GetApiCache</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetApiCacheResponse">AWS
   * API Reference</a></p>
   */
  class AWS_APPSYNC_API GetApiCacheResult
  {
  public:
    GetApiCacheResult();
    GetApiCacheResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetApiCacheResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const ApiCache& GetApiCache() const{ return m_apiCache; }

    
    inline void SetApiCache(const ApiCache& value) { m_apiCache = value; }

    
    inline void SetApiCache(ApiCache&& value) { m_apiCache = std::move(value); }

    
    inline GetApiCacheResult& WithApiCache(const ApiCache& value) { SetApiCache(value); return *this;}

    
    inline GetApiCacheResult& WithApiCache(ApiCache&& value) { SetApiCache(std::move(value)); return *this;}

  private:

    ApiCache m_apiCache;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
