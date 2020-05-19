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

#include <aws/ec2/model/CreateCustomerGatewayRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateCustomerGatewayRequest::CreateCustomerGatewayRequest() : 
    m_bgpAsn(0),
    m_bgpAsnHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_certificateArnHasBeenSet(false),
    m_type(GatewayType::NOT_SET),
    m_typeHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String CreateCustomerGatewayRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateCustomerGateway&";
  if(m_bgpAsnHasBeenSet)
  {
    ss << "BgpAsn=" << m_bgpAsn << "&";
  }

  if(m_publicIpHasBeenSet)
  {
    ss << "IpAddress=" << StringUtils::URLEncode(m_publicIp.c_str()) << "&";
  }

  if(m_certificateArnHasBeenSet)
  {
    ss << "CertificateArn=" << StringUtils::URLEncode(m_certificateArn.c_str()) << "&";
  }

  if(m_typeHasBeenSet)
  {
    ss << "Type=" << GatewayTypeMapper::GetNameForGatewayType(m_type) << "&";
  }

  if(m_deviceNameHasBeenSet)
  {
    ss << "DeviceName=" << StringUtils::URLEncode(m_deviceName.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateCustomerGatewayRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
