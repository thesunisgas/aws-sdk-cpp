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

#include <aws/ds/model/CertificateInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

CertificateInfo::CertificateInfo() : 
    m_certificateIdHasBeenSet(false),
    m_commonNameHasBeenSet(false),
    m_state(CertificateState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

CertificateInfo::CertificateInfo(JsonView jsonValue) : 
    m_certificateIdHasBeenSet(false),
    m_commonNameHasBeenSet(false),
    m_state(CertificateState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

CertificateInfo& CertificateInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CertificateId"))
  {
    m_certificateId = jsonValue.GetString("CertificateId");

    m_certificateIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CommonName"))
  {
    m_commonName = jsonValue.GetString("CommonName");

    m_commonNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = CertificateStateMapper::GetCertificateStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue CertificateInfo::Jsonize() const
{
  JsonValue payload;

  if(m_certificateIdHasBeenSet)
  {
   payload.WithString("CertificateId", m_certificateId);

  }

  if(m_commonNameHasBeenSet)
  {
   payload.WithString("CommonName", m_commonName);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", CertificateStateMapper::GetNameForCertificateState(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
