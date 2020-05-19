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

#include <aws/ec2/model/GetAssociatedIpv6PoolCidrsResponse.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetAssociatedIpv6PoolCidrsResponse::GetAssociatedIpv6PoolCidrsResponse()
{
}

GetAssociatedIpv6PoolCidrsResponse::GetAssociatedIpv6PoolCidrsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetAssociatedIpv6PoolCidrsResponse& GetAssociatedIpv6PoolCidrsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetAssociatedIpv6PoolCidrsResponse"))
  {
    resultNode = rootNode.FirstChild("GetAssociatedIpv6PoolCidrsResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode ipv6CidrAssociationsNode = resultNode.FirstChild("ipv6CidrAssociationSet");
    if(!ipv6CidrAssociationsNode.IsNull())
    {
      XmlNode ipv6CidrAssociationsMember = ipv6CidrAssociationsNode.FirstChild("item");
      while(!ipv6CidrAssociationsMember.IsNull())
      {
        m_ipv6CidrAssociations.push_back(ipv6CidrAssociationsMember);
        ipv6CidrAssociationsMember = ipv6CidrAssociationsMember.NextNode("item");
      }

    }
    XmlNode nextTokenNode = resultNode.FirstChild("nextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::GetAssociatedIpv6PoolCidrsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
