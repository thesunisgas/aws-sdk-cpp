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

#include <aws/ec2/model/ModifySubnetAttributeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifySubnetAttributeRequest::ModifySubnetAttributeRequest() : 
    m_assignIpv6AddressOnCreationHasBeenSet(false),
    m_mapPublicIpOnLaunchHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_mapCustomerOwnedIpOnLaunchHasBeenSet(false),
    m_customerOwnedIpv4PoolHasBeenSet(false)
{
}

Aws::String ModifySubnetAttributeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifySubnetAttribute&";
  if(m_assignIpv6AddressOnCreationHasBeenSet)
  {
    m_assignIpv6AddressOnCreation.OutputToStream(ss, "AssignIpv6AddressOnCreation");
  }

  if(m_mapPublicIpOnLaunchHasBeenSet)
  {
    m_mapPublicIpOnLaunch.OutputToStream(ss, "MapPublicIpOnLaunch");
  }

  if(m_subnetIdHasBeenSet)
  {
    ss << "SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }

  if(m_mapCustomerOwnedIpOnLaunchHasBeenSet)
  {
    m_mapCustomerOwnedIpOnLaunch.OutputToStream(ss, "MapCustomerOwnedIpOnLaunch");
  }

  if(m_customerOwnedIpv4PoolHasBeenSet)
  {
    ss << "CustomerOwnedIpv4Pool=" << StringUtils::URLEncode(m_customerOwnedIpv4Pool.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifySubnetAttributeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
