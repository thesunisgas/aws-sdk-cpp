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
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/RegexPatternSetSummary.h>
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
namespace WAFV2
{
namespace Model
{
  class AWS_WAFV2_API CreateRegexPatternSetResult
  {
  public:
    CreateRegexPatternSetResult();
    CreateRegexPatternSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateRegexPatternSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>High-level information about a <a>RegexPatternSet</a>, returned by operations
     * like create and list. This provides information like the ID, that you can use to
     * retrieve and manage a <code>RegexPatternSet</code>, and the ARN, that you
     * provide to the <a>RegexPatternSetReferenceStatement</a> to use the pattern set
     * in a <a>Rule</a>.</p>
     */
    inline const RegexPatternSetSummary& GetSummary() const{ return m_summary; }

    /**
     * <p>High-level information about a <a>RegexPatternSet</a>, returned by operations
     * like create and list. This provides information like the ID, that you can use to
     * retrieve and manage a <code>RegexPatternSet</code>, and the ARN, that you
     * provide to the <a>RegexPatternSetReferenceStatement</a> to use the pattern set
     * in a <a>Rule</a>.</p>
     */
    inline void SetSummary(const RegexPatternSetSummary& value) { m_summary = value; }

    /**
     * <p>High-level information about a <a>RegexPatternSet</a>, returned by operations
     * like create and list. This provides information like the ID, that you can use to
     * retrieve and manage a <code>RegexPatternSet</code>, and the ARN, that you
     * provide to the <a>RegexPatternSetReferenceStatement</a> to use the pattern set
     * in a <a>Rule</a>.</p>
     */
    inline void SetSummary(RegexPatternSetSummary&& value) { m_summary = std::move(value); }

    /**
     * <p>High-level information about a <a>RegexPatternSet</a>, returned by operations
     * like create and list. This provides information like the ID, that you can use to
     * retrieve and manage a <code>RegexPatternSet</code>, and the ARN, that you
     * provide to the <a>RegexPatternSetReferenceStatement</a> to use the pattern set
     * in a <a>Rule</a>.</p>
     */
    inline CreateRegexPatternSetResult& WithSummary(const RegexPatternSetSummary& value) { SetSummary(value); return *this;}

    /**
     * <p>High-level information about a <a>RegexPatternSet</a>, returned by operations
     * like create and list. This provides information like the ID, that you can use to
     * retrieve and manage a <code>RegexPatternSet</code>, and the ARN, that you
     * provide to the <a>RegexPatternSetReferenceStatement</a> to use the pattern set
     * in a <a>Rule</a>.</p>
     */
    inline CreateRegexPatternSetResult& WithSummary(RegexPatternSetSummary&& value) { SetSummary(std::move(value)); return *this;}

  private:

    RegexPatternSetSummary m_summary;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
