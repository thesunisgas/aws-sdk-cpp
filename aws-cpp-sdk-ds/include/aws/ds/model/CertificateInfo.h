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
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/CertificateState.h>
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
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Contains general information about a certificate.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CertificateInfo">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTORYSERVICE_API CertificateInfo
  {
  public:
    CertificateInfo();
    CertificateInfo(Aws::Utils::Json::JsonView jsonValue);
    CertificateInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the certificate.</p>
     */
    inline const Aws::String& GetCertificateId() const{ return m_certificateId; }

    /**
     * <p>The identifier of the certificate.</p>
     */
    inline bool CertificateIdHasBeenSet() const { return m_certificateIdHasBeenSet; }

    /**
     * <p>The identifier of the certificate.</p>
     */
    inline void SetCertificateId(const Aws::String& value) { m_certificateIdHasBeenSet = true; m_certificateId = value; }

    /**
     * <p>The identifier of the certificate.</p>
     */
    inline void SetCertificateId(Aws::String&& value) { m_certificateIdHasBeenSet = true; m_certificateId = std::move(value); }

    /**
     * <p>The identifier of the certificate.</p>
     */
    inline void SetCertificateId(const char* value) { m_certificateIdHasBeenSet = true; m_certificateId.assign(value); }

    /**
     * <p>The identifier of the certificate.</p>
     */
    inline CertificateInfo& WithCertificateId(const Aws::String& value) { SetCertificateId(value); return *this;}

    /**
     * <p>The identifier of the certificate.</p>
     */
    inline CertificateInfo& WithCertificateId(Aws::String&& value) { SetCertificateId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the certificate.</p>
     */
    inline CertificateInfo& WithCertificateId(const char* value) { SetCertificateId(value); return *this;}


    /**
     * <p>The common name for the certificate.</p>
     */
    inline const Aws::String& GetCommonName() const{ return m_commonName; }

    /**
     * <p>The common name for the certificate.</p>
     */
    inline bool CommonNameHasBeenSet() const { return m_commonNameHasBeenSet; }

    /**
     * <p>The common name for the certificate.</p>
     */
    inline void SetCommonName(const Aws::String& value) { m_commonNameHasBeenSet = true; m_commonName = value; }

    /**
     * <p>The common name for the certificate.</p>
     */
    inline void SetCommonName(Aws::String&& value) { m_commonNameHasBeenSet = true; m_commonName = std::move(value); }

    /**
     * <p>The common name for the certificate.</p>
     */
    inline void SetCommonName(const char* value) { m_commonNameHasBeenSet = true; m_commonName.assign(value); }

    /**
     * <p>The common name for the certificate.</p>
     */
    inline CertificateInfo& WithCommonName(const Aws::String& value) { SetCommonName(value); return *this;}

    /**
     * <p>The common name for the certificate.</p>
     */
    inline CertificateInfo& WithCommonName(Aws::String&& value) { SetCommonName(std::move(value)); return *this;}

    /**
     * <p>The common name for the certificate.</p>
     */
    inline CertificateInfo& WithCommonName(const char* value) { SetCommonName(value); return *this;}


    /**
     * <p>The state of the certificate.</p>
     */
    inline const CertificateState& GetState() const{ return m_state; }

    /**
     * <p>The state of the certificate.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the certificate.</p>
     */
    inline void SetState(const CertificateState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the certificate.</p>
     */
    inline void SetState(CertificateState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the certificate.</p>
     */
    inline CertificateInfo& WithState(const CertificateState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the certificate.</p>
     */
    inline CertificateInfo& WithState(CertificateState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_certificateId;
    bool m_certificateIdHasBeenSet;

    Aws::String m_commonName;
    bool m_commonNameHasBeenSet;

    CertificateState m_state;
    bool m_stateHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
