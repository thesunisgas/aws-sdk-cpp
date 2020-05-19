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

#include <aws/rds/model/DescribeExportTasksRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

DescribeExportTasksRequest::DescribeExportTasksRequest() : 
    m_exportTaskIdentifierHasBeenSet(false),
    m_sourceArnHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_maxRecordsHasBeenSet(false)
{
}

Aws::String DescribeExportTasksRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeExportTasks&";
  if(m_exportTaskIdentifierHasBeenSet)
  {
    ss << "ExportTaskIdentifier=" << StringUtils::URLEncode(m_exportTaskIdentifier.c_str()) << "&";
  }

  if(m_sourceArnHasBeenSet)
  {
    ss << "SourceArn=" << StringUtils::URLEncode(m_sourceArn.c_str()) << "&";
  }

  if(m_filtersHasBeenSet)
  {
    unsigned filtersCount = 1;
    for(auto& item : m_filters)
    {
      item.OutputToStream(ss, "Filters.member.", filtersCount, "");
      filtersCount++;
    }
  }

  if(m_markerHasBeenSet)
  {
    ss << "Marker=" << StringUtils::URLEncode(m_marker.c_str()) << "&";
  }

  if(m_maxRecordsHasBeenSet)
  {
    ss << "MaxRecords=" << StringUtils::URLEncode(m_maxRecords.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  DescribeExportTasksRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
