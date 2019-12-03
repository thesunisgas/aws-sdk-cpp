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
#include <aws/textract/Textract_EXPORTS.h>
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
namespace Textract
{
namespace Model
{
  class AWS_TEXTRACT_API StartDocumentTextDetectionResult
  {
  public:
    StartDocumentTextDetectionResult();
    StartDocumentTextDetectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StartDocumentTextDetectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the text detection job for the document. Use
     * <code>JobId</code> to identify the job in a subsequent call to
     * <code>GetDocumentTextDetection</code>. A <code>JobId</code> value is only valid
     * for 7 days.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The identifier of the text detection job for the document. Use
     * <code>JobId</code> to identify the job in a subsequent call to
     * <code>GetDocumentTextDetection</code>. A <code>JobId</code> value is only valid
     * for 7 days.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>The identifier of the text detection job for the document. Use
     * <code>JobId</code> to identify the job in a subsequent call to
     * <code>GetDocumentTextDetection</code>. A <code>JobId</code> value is only valid
     * for 7 days.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p>The identifier of the text detection job for the document. Use
     * <code>JobId</code> to identify the job in a subsequent call to
     * <code>GetDocumentTextDetection</code>. A <code>JobId</code> value is only valid
     * for 7 days.</p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>The identifier of the text detection job for the document. Use
     * <code>JobId</code> to identify the job in a subsequent call to
     * <code>GetDocumentTextDetection</code>. A <code>JobId</code> value is only valid
     * for 7 days.</p>
     */
    inline StartDocumentTextDetectionResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The identifier of the text detection job for the document. Use
     * <code>JobId</code> to identify the job in a subsequent call to
     * <code>GetDocumentTextDetection</code>. A <code>JobId</code> value is only valid
     * for 7 days.</p>
     */
    inline StartDocumentTextDetectionResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the text detection job for the document. Use
     * <code>JobId</code> to identify the job in a subsequent call to
     * <code>GetDocumentTextDetection</code>. A <code>JobId</code> value is only valid
     * for 7 days.</p>
     */
    inline StartDocumentTextDetectionResult& WithJobId(const char* value) { SetJobId(value); return *this;}

  private:

    Aws::String m_jobId;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
