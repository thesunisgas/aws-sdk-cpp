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

#include <aws/ec2/model/DescribeKeyPairsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeKeyPairsRequest::DescribeKeyPairsRequest() : 
    m_filtersHasBeenSet(false),
    m_keyNamesHasBeenSet(false),
    m_keyPairIdsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String DescribeKeyPairsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeKeyPairs&";
  if(m_filtersHasBeenSet)
  {
    unsigned filtersCount = 1;
    for(auto& item : m_filters)
    {
      item.OutputToStream(ss, "Filter.", filtersCount, "");
      filtersCount++;
    }
  }

  if(m_keyNamesHasBeenSet)
  {
    unsigned keyNamesCount = 1;
    for(auto& item : m_keyNames)
    {
      ss << "KeyName." << keyNamesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      keyNamesCount++;
    }
  }

  if(m_keyPairIdsHasBeenSet)
  {
    unsigned keyPairIdsCount = 1;
    for(auto& item : m_keyPairIds)
    {
      ss << "KeyPairId." << keyPairIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      keyPairIdsCount++;
    }
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeKeyPairsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
