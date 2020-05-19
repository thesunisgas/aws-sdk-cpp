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

#include <aws/ec2/model/CreateSubnetRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateSubnetRequest::CreateSubnetRequest() : 
    m_availabilityZoneHasBeenSet(false),
    m_availabilityZoneIdHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_ipv6CidrBlockHasBeenSet(false),
    m_outpostArnHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String CreateSubnetRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateSubnet&";
  if(m_availabilityZoneHasBeenSet)
  {
    ss << "AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_availabilityZoneIdHasBeenSet)
  {
    ss << "AvailabilityZoneId=" << StringUtils::URLEncode(m_availabilityZoneId.c_str()) << "&";
  }

  if(m_cidrBlockHasBeenSet)
  {
    ss << "CidrBlock=" << StringUtils::URLEncode(m_cidrBlock.c_str()) << "&";
  }

  if(m_ipv6CidrBlockHasBeenSet)
  {
    ss << "Ipv6CidrBlock=" << StringUtils::URLEncode(m_ipv6CidrBlock.c_str()) << "&";
  }

  if(m_outpostArnHasBeenSet)
  {
    ss << "OutpostArn=" << StringUtils::URLEncode(m_outpostArn.c_str()) << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
    ss << "VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateSubnetRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
