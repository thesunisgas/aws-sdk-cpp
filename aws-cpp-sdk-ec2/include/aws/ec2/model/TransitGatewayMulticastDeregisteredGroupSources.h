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

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the deregistered transit gateway multicast group
   * sources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayMulticastDeregisteredGroupSources">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API TransitGatewayMulticastDeregisteredGroupSources
  {
  public:
    TransitGatewayMulticastDeregisteredGroupSources();
    TransitGatewayMulticastDeregisteredGroupSources(const Aws::Utils::Xml::XmlNode& xmlNode);
    TransitGatewayMulticastDeregisteredGroupSources& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline const Aws::String& GetTransitGatewayMulticastDomainId() const{ return m_transitGatewayMulticastDomainId; }

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline bool TransitGatewayMulticastDomainIdHasBeenSet() const { return m_transitGatewayMulticastDomainIdHasBeenSet; }

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline void SetTransitGatewayMulticastDomainId(const Aws::String& value) { m_transitGatewayMulticastDomainIdHasBeenSet = true; m_transitGatewayMulticastDomainId = value; }

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline void SetTransitGatewayMulticastDomainId(Aws::String&& value) { m_transitGatewayMulticastDomainIdHasBeenSet = true; m_transitGatewayMulticastDomainId = std::move(value); }

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline void SetTransitGatewayMulticastDomainId(const char* value) { m_transitGatewayMulticastDomainIdHasBeenSet = true; m_transitGatewayMulticastDomainId.assign(value); }

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline TransitGatewayMulticastDeregisteredGroupSources& WithTransitGatewayMulticastDomainId(const Aws::String& value) { SetTransitGatewayMulticastDomainId(value); return *this;}

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline TransitGatewayMulticastDeregisteredGroupSources& WithTransitGatewayMulticastDomainId(Aws::String&& value) { SetTransitGatewayMulticastDomainId(std::move(value)); return *this;}

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline TransitGatewayMulticastDeregisteredGroupSources& WithTransitGatewayMulticastDomainId(const char* value) { SetTransitGatewayMulticastDomainId(value); return *this;}


    /**
     * <p>The network interface IDs of the non-registered members.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeregisteredNetworkInterfaceIds() const{ return m_deregisteredNetworkInterfaceIds; }

    /**
     * <p>The network interface IDs of the non-registered members.</p>
     */
    inline bool DeregisteredNetworkInterfaceIdsHasBeenSet() const { return m_deregisteredNetworkInterfaceIdsHasBeenSet; }

    /**
     * <p>The network interface IDs of the non-registered members.</p>
     */
    inline void SetDeregisteredNetworkInterfaceIds(const Aws::Vector<Aws::String>& value) { m_deregisteredNetworkInterfaceIdsHasBeenSet = true; m_deregisteredNetworkInterfaceIds = value; }

    /**
     * <p>The network interface IDs of the non-registered members.</p>
     */
    inline void SetDeregisteredNetworkInterfaceIds(Aws::Vector<Aws::String>&& value) { m_deregisteredNetworkInterfaceIdsHasBeenSet = true; m_deregisteredNetworkInterfaceIds = std::move(value); }

    /**
     * <p>The network interface IDs of the non-registered members.</p>
     */
    inline TransitGatewayMulticastDeregisteredGroupSources& WithDeregisteredNetworkInterfaceIds(const Aws::Vector<Aws::String>& value) { SetDeregisteredNetworkInterfaceIds(value); return *this;}

    /**
     * <p>The network interface IDs of the non-registered members.</p>
     */
    inline TransitGatewayMulticastDeregisteredGroupSources& WithDeregisteredNetworkInterfaceIds(Aws::Vector<Aws::String>&& value) { SetDeregisteredNetworkInterfaceIds(std::move(value)); return *this;}

    /**
     * <p>The network interface IDs of the non-registered members.</p>
     */
    inline TransitGatewayMulticastDeregisteredGroupSources& AddDeregisteredNetworkInterfaceIds(const Aws::String& value) { m_deregisteredNetworkInterfaceIdsHasBeenSet = true; m_deregisteredNetworkInterfaceIds.push_back(value); return *this; }

    /**
     * <p>The network interface IDs of the non-registered members.</p>
     */
    inline TransitGatewayMulticastDeregisteredGroupSources& AddDeregisteredNetworkInterfaceIds(Aws::String&& value) { m_deregisteredNetworkInterfaceIdsHasBeenSet = true; m_deregisteredNetworkInterfaceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The network interface IDs of the non-registered members.</p>
     */
    inline TransitGatewayMulticastDeregisteredGroupSources& AddDeregisteredNetworkInterfaceIds(const char* value) { m_deregisteredNetworkInterfaceIdsHasBeenSet = true; m_deregisteredNetworkInterfaceIds.push_back(value); return *this; }


    /**
     * <p>The IP address assigned to the transit gateway multicast group.</p>
     */
    inline const Aws::String& GetGroupIpAddress() const{ return m_groupIpAddress; }

    /**
     * <p>The IP address assigned to the transit gateway multicast group.</p>
     */
    inline bool GroupIpAddressHasBeenSet() const { return m_groupIpAddressHasBeenSet; }

    /**
     * <p>The IP address assigned to the transit gateway multicast group.</p>
     */
    inline void SetGroupIpAddress(const Aws::String& value) { m_groupIpAddressHasBeenSet = true; m_groupIpAddress = value; }

    /**
     * <p>The IP address assigned to the transit gateway multicast group.</p>
     */
    inline void SetGroupIpAddress(Aws::String&& value) { m_groupIpAddressHasBeenSet = true; m_groupIpAddress = std::move(value); }

    /**
     * <p>The IP address assigned to the transit gateway multicast group.</p>
     */
    inline void SetGroupIpAddress(const char* value) { m_groupIpAddressHasBeenSet = true; m_groupIpAddress.assign(value); }

    /**
     * <p>The IP address assigned to the transit gateway multicast group.</p>
     */
    inline TransitGatewayMulticastDeregisteredGroupSources& WithGroupIpAddress(const Aws::String& value) { SetGroupIpAddress(value); return *this;}

    /**
     * <p>The IP address assigned to the transit gateway multicast group.</p>
     */
    inline TransitGatewayMulticastDeregisteredGroupSources& WithGroupIpAddress(Aws::String&& value) { SetGroupIpAddress(std::move(value)); return *this;}

    /**
     * <p>The IP address assigned to the transit gateway multicast group.</p>
     */
    inline TransitGatewayMulticastDeregisteredGroupSources& WithGroupIpAddress(const char* value) { SetGroupIpAddress(value); return *this;}

  private:

    Aws::String m_transitGatewayMulticastDomainId;
    bool m_transitGatewayMulticastDomainIdHasBeenSet;

    Aws::Vector<Aws::String> m_deregisteredNetworkInterfaceIds;
    bool m_deregisteredNetworkInterfaceIdsHasBeenSet;

    Aws::String m_groupIpAddress;
    bool m_groupIpAddressHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
