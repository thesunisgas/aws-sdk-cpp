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

#include <aws/ec2/model/ReleaseAddressRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ReleaseAddressRequest::ReleaseAddressRequest() : 
    m_allocationIdHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_networkBorderGroupHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String ReleaseAddressRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ReleaseAddress&";
  if(m_allocationIdHasBeenSet)
  {
    ss << "AllocationId=" << StringUtils::URLEncode(m_allocationId.c_str()) << "&";
  }

  if(m_publicIpHasBeenSet)
  {
    ss << "PublicIp=" << StringUtils::URLEncode(m_publicIp.c_str()) << "&";
  }

  if(m_networkBorderGroupHasBeenSet)
  {
    ss << "NetworkBorderGroup=" << StringUtils::URLEncode(m_networkBorderGroup.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ReleaseAddressRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
