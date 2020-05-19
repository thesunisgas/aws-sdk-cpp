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

#include <aws/elasticloadbalancingv2/model/TargetGroupStickinessConfig.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

TargetGroupStickinessConfig::TargetGroupStickinessConfig() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_durationSeconds(0),
    m_durationSecondsHasBeenSet(false)
{
}

TargetGroupStickinessConfig::TargetGroupStickinessConfig(const XmlNode& xmlNode) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_durationSeconds(0),
    m_durationSecondsHasBeenSet(false)
{
  *this = xmlNode;
}

TargetGroupStickinessConfig& TargetGroupStickinessConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode enabledNode = resultNode.FirstChild("Enabled");
    if(!enabledNode.IsNull())
    {
      m_enabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enabledNode.GetText()).c_str()).c_str());
      m_enabledHasBeenSet = true;
    }
    XmlNode durationSecondsNode = resultNode.FirstChild("DurationSeconds");
    if(!durationSecondsNode.IsNull())
    {
      m_durationSeconds = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(durationSecondsNode.GetText()).c_str()).c_str());
      m_durationSecondsHasBeenSet = true;
    }
  }

  return *this;
}

void TargetGroupStickinessConfig::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_enabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }

  if(m_durationSecondsHasBeenSet)
  {
      oStream << location << index << locationValue << ".DurationSeconds=" << m_durationSeconds << "&";
  }

}

void TargetGroupStickinessConfig::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_enabledHasBeenSet)
  {
      oStream << location << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }
  if(m_durationSecondsHasBeenSet)
  {
      oStream << location << ".DurationSeconds=" << m_durationSeconds << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
