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

#include <aws/ec2/model/RegisterTransitGatewayMulticastGroupSourcesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

RegisterTransitGatewayMulticastGroupSourcesRequest::RegisterTransitGatewayMulticastGroupSourcesRequest() : 
    m_transitGatewayMulticastDomainIdHasBeenSet(false),
    m_groupIpAddressHasBeenSet(false),
    m_networkInterfaceIdsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String RegisterTransitGatewayMulticastGroupSourcesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RegisterTransitGatewayMulticastGroupSources&";
  if(m_transitGatewayMulticastDomainIdHasBeenSet)
  {
    ss << "TransitGatewayMulticastDomainId=" << StringUtils::URLEncode(m_transitGatewayMulticastDomainId.c_str()) << "&";
  }

  if(m_groupIpAddressHasBeenSet)
  {
    ss << "GroupIpAddress=" << StringUtils::URLEncode(m_groupIpAddress.c_str()) << "&";
  }

  if(m_networkInterfaceIdsHasBeenSet)
  {
    unsigned networkInterfaceIdsCount = 1;
    for(auto& item : m_networkInterfaceIds)
    {
      ss << "NetworkInterfaceIds." << networkInterfaceIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      networkInterfaceIdsCount++;
    }
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  RegisterTransitGatewayMulticastGroupSourcesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
