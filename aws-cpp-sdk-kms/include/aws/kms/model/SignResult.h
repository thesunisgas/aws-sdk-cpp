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
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/kms/model/SigningAlgorithmSpec.h>
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
namespace KMS
{
namespace Model
{
  class AWS_KMS_API SignResult
  {
  public:
    SignResult();
    SignResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    SignResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the asymmetric CMK that was used to sign
     * the message.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The Amazon Resource Name (ARN) of the asymmetric CMK that was used to sign
     * the message.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the asymmetric CMK that was used to sign
     * the message.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the asymmetric CMK that was used to sign
     * the message.</p>
     */
    inline void SetKeyId(const char* value) { m_keyId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the asymmetric CMK that was used to sign
     * the message.</p>
     */
    inline SignResult& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the asymmetric CMK that was used to sign
     * the message.</p>
     */
    inline SignResult& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the asymmetric CMK that was used to sign
     * the message.</p>
     */
    inline SignResult& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>The cryptographic signature that was generated for the message.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetSignature() const{ return m_signature; }

    /**
     * <p>The cryptographic signature that was generated for the message.</p>
     */
    inline void SetSignature(const Aws::Utils::ByteBuffer& value) { m_signature = value; }

    /**
     * <p>The cryptographic signature that was generated for the message.</p>
     */
    inline void SetSignature(Aws::Utils::ByteBuffer&& value) { m_signature = std::move(value); }

    /**
     * <p>The cryptographic signature that was generated for the message.</p>
     */
    inline SignResult& WithSignature(const Aws::Utils::ByteBuffer& value) { SetSignature(value); return *this;}

    /**
     * <p>The cryptographic signature that was generated for the message.</p>
     */
    inline SignResult& WithSignature(Aws::Utils::ByteBuffer&& value) { SetSignature(std::move(value)); return *this;}


    /**
     * <p>The signing algorithm that was used to sign the message.</p>
     */
    inline const SigningAlgorithmSpec& GetSigningAlgorithm() const{ return m_signingAlgorithm; }

    /**
     * <p>The signing algorithm that was used to sign the message.</p>
     */
    inline void SetSigningAlgorithm(const SigningAlgorithmSpec& value) { m_signingAlgorithm = value; }

    /**
     * <p>The signing algorithm that was used to sign the message.</p>
     */
    inline void SetSigningAlgorithm(SigningAlgorithmSpec&& value) { m_signingAlgorithm = std::move(value); }

    /**
     * <p>The signing algorithm that was used to sign the message.</p>
     */
    inline SignResult& WithSigningAlgorithm(const SigningAlgorithmSpec& value) { SetSigningAlgorithm(value); return *this;}

    /**
     * <p>The signing algorithm that was used to sign the message.</p>
     */
    inline SignResult& WithSigningAlgorithm(SigningAlgorithmSpec&& value) { SetSigningAlgorithm(std::move(value)); return *this;}

  private:

    Aws::String m_keyId;

    Aws::Utils::ByteBuffer m_signature;

    SigningAlgorithmSpec m_signingAlgorithm;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
