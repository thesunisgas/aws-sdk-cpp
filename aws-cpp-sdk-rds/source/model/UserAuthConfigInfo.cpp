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

#include <aws/rds/model/UserAuthConfigInfo.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

UserAuthConfigInfo::UserAuthConfigInfo() : 
    m_descriptionHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_authScheme(AuthScheme::NOT_SET),
    m_authSchemeHasBeenSet(false),
    m_secretArnHasBeenSet(false),
    m_iAMAuth(IAMAuthMode::NOT_SET),
    m_iAMAuthHasBeenSet(false)
{
}

UserAuthConfigInfo::UserAuthConfigInfo(const XmlNode& xmlNode) : 
    m_descriptionHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_authScheme(AuthScheme::NOT_SET),
    m_authSchemeHasBeenSet(false),
    m_secretArnHasBeenSet(false),
    m_iAMAuth(IAMAuthMode::NOT_SET),
    m_iAMAuthHasBeenSet(false)
{
  *this = xmlNode;
}

UserAuthConfigInfo& UserAuthConfigInfo::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode userNameNode = resultNode.FirstChild("UserName");
    if(!userNameNode.IsNull())
    {
      m_userName = Aws::Utils::Xml::DecodeEscapedXmlText(userNameNode.GetText());
      m_userNameHasBeenSet = true;
    }
    XmlNode authSchemeNode = resultNode.FirstChild("AuthScheme");
    if(!authSchemeNode.IsNull())
    {
      m_authScheme = AuthSchemeMapper::GetAuthSchemeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(authSchemeNode.GetText()).c_str()).c_str());
      m_authSchemeHasBeenSet = true;
    }
    XmlNode secretArnNode = resultNode.FirstChild("SecretArn");
    if(!secretArnNode.IsNull())
    {
      m_secretArn = Aws::Utils::Xml::DecodeEscapedXmlText(secretArnNode.GetText());
      m_secretArnHasBeenSet = true;
    }
    XmlNode iAMAuthNode = resultNode.FirstChild("IAMAuth");
    if(!iAMAuthNode.IsNull())
    {
      m_iAMAuth = IAMAuthModeMapper::GetIAMAuthModeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(iAMAuthNode.GetText()).c_str()).c_str());
      m_iAMAuthHasBeenSet = true;
    }
  }

  return *this;
}

void UserAuthConfigInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_userNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".UserName=" << StringUtils::URLEncode(m_userName.c_str()) << "&";
  }

  if(m_authSchemeHasBeenSet)
  {
      oStream << location << index << locationValue << ".AuthScheme=" << AuthSchemeMapper::GetNameForAuthScheme(m_authScheme) << "&";
  }

  if(m_secretArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".SecretArn=" << StringUtils::URLEncode(m_secretArn.c_str()) << "&";
  }

  if(m_iAMAuthHasBeenSet)
  {
      oStream << location << index << locationValue << ".IAMAuth=" << IAMAuthModeMapper::GetNameForIAMAuthMode(m_iAMAuth) << "&";
  }

}

void UserAuthConfigInfo::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_userNameHasBeenSet)
  {
      oStream << location << ".UserName=" << StringUtils::URLEncode(m_userName.c_str()) << "&";
  }
  if(m_authSchemeHasBeenSet)
  {
      oStream << location << ".AuthScheme=" << AuthSchemeMapper::GetNameForAuthScheme(m_authScheme) << "&";
  }
  if(m_secretArnHasBeenSet)
  {
      oStream << location << ".SecretArn=" << StringUtils::URLEncode(m_secretArn.c_str()) << "&";
  }
  if(m_iAMAuthHasBeenSet)
  {
      oStream << location << ".IAMAuth=" << IAMAuthModeMapper::GetNameForIAMAuthMode(m_iAMAuth) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
