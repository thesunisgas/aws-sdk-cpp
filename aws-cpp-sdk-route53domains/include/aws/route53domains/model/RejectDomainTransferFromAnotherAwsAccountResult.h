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
#include <aws/route53domains/Route53Domains_EXPORTS.h>
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
namespace Route53Domains
{
namespace Model
{
  /**
   * <p>The RejectDomainTransferFromAnotherAwsAccount response includes the following
   * element.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/RejectDomainTransferFromAnotherAwsAccountResponse">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53DOMAINS_API RejectDomainTransferFromAnotherAwsAccountResult
  {
  public:
    RejectDomainTransferFromAnotherAwsAccountResult();
    RejectDomainTransferFromAnotherAwsAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    RejectDomainTransferFromAnotherAwsAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier that <code>TransferDomainToAnotherAwsAccount</code> returned
     * to track the progress of the request. Because the transfer request was rejected,
     * the value is no longer valid, and you can't use <code>GetOperationDetail</code>
     * to query the operation status.</p>
     */
    inline const Aws::String& GetOperationId() const{ return m_operationId; }

    /**
     * <p>The identifier that <code>TransferDomainToAnotherAwsAccount</code> returned
     * to track the progress of the request. Because the transfer request was rejected,
     * the value is no longer valid, and you can't use <code>GetOperationDetail</code>
     * to query the operation status.</p>
     */
    inline void SetOperationId(const Aws::String& value) { m_operationId = value; }

    /**
     * <p>The identifier that <code>TransferDomainToAnotherAwsAccount</code> returned
     * to track the progress of the request. Because the transfer request was rejected,
     * the value is no longer valid, and you can't use <code>GetOperationDetail</code>
     * to query the operation status.</p>
     */
    inline void SetOperationId(Aws::String&& value) { m_operationId = std::move(value); }

    /**
     * <p>The identifier that <code>TransferDomainToAnotherAwsAccount</code> returned
     * to track the progress of the request. Because the transfer request was rejected,
     * the value is no longer valid, and you can't use <code>GetOperationDetail</code>
     * to query the operation status.</p>
     */
    inline void SetOperationId(const char* value) { m_operationId.assign(value); }

    /**
     * <p>The identifier that <code>TransferDomainToAnotherAwsAccount</code> returned
     * to track the progress of the request. Because the transfer request was rejected,
     * the value is no longer valid, and you can't use <code>GetOperationDetail</code>
     * to query the operation status.</p>
     */
    inline RejectDomainTransferFromAnotherAwsAccountResult& WithOperationId(const Aws::String& value) { SetOperationId(value); return *this;}

    /**
     * <p>The identifier that <code>TransferDomainToAnotherAwsAccount</code> returned
     * to track the progress of the request. Because the transfer request was rejected,
     * the value is no longer valid, and you can't use <code>GetOperationDetail</code>
     * to query the operation status.</p>
     */
    inline RejectDomainTransferFromAnotherAwsAccountResult& WithOperationId(Aws::String&& value) { SetOperationId(std::move(value)); return *this;}

    /**
     * <p>The identifier that <code>TransferDomainToAnotherAwsAccount</code> returned
     * to track the progress of the request. Because the transfer request was rejected,
     * the value is no longer valid, and you can't use <code>GetOperationDetail</code>
     * to query the operation status.</p>
     */
    inline RejectDomainTransferFromAnotherAwsAccountResult& WithOperationId(const char* value) { SetOperationId(value); return *this;}

  private:

    Aws::String m_operationId;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
