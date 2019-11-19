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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/SigV4Authorization.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{

  /**
   * <p>The authorization method used to send messages.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/HttpAuthorization">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API HttpAuthorization
  {
  public:
    HttpAuthorization();
    HttpAuthorization(Aws::Utils::Json::JsonView jsonValue);
    HttpAuthorization& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Use Sig V4 authorization. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4 Signing Process</a>.</p>
     */
    inline const SigV4Authorization& GetSigv4() const{ return m_sigv4; }

    /**
     * <p>Use Sig V4 authorization. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4 Signing Process</a>.</p>
     */
    inline bool Sigv4HasBeenSet() const { return m_sigv4HasBeenSet; }

    /**
     * <p>Use Sig V4 authorization. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4 Signing Process</a>.</p>
     */
    inline void SetSigv4(const SigV4Authorization& value) { m_sigv4HasBeenSet = true; m_sigv4 = value; }

    /**
     * <p>Use Sig V4 authorization. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4 Signing Process</a>.</p>
     */
    inline void SetSigv4(SigV4Authorization&& value) { m_sigv4HasBeenSet = true; m_sigv4 = std::move(value); }

    /**
     * <p>Use Sig V4 authorization. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4 Signing Process</a>.</p>
     */
    inline HttpAuthorization& WithSigv4(const SigV4Authorization& value) { SetSigv4(value); return *this;}

    /**
     * <p>Use Sig V4 authorization. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4 Signing Process</a>.</p>
     */
    inline HttpAuthorization& WithSigv4(SigV4Authorization&& value) { SetSigv4(std::move(value)); return *this;}

  private:

    SigV4Authorization m_sigv4;
    bool m_sigv4HasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
