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
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/SelfManagedActiveDirectoryAttributes.h>
#include <aws/fsx/model/WindowsDeploymentType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/model/FileSystemMaintenanceOperation.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace FSx
{
namespace Model
{

  /**
   * <p>The configuration for this Microsoft Windows file system.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/WindowsFileSystemConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_FSX_API WindowsFileSystemConfiguration
  {
  public:
    WindowsFileSystemConfiguration();
    WindowsFileSystemConfiguration(Aws::Utils::Json::JsonView jsonValue);
    WindowsFileSystemConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID for an existing Microsoft Active Directory instance that the file
     * system should join when it's created.</p>
     */
    inline const Aws::String& GetActiveDirectoryId() const{ return m_activeDirectoryId; }

    /**
     * <p>The ID for an existing Microsoft Active Directory instance that the file
     * system should join when it's created.</p>
     */
    inline bool ActiveDirectoryIdHasBeenSet() const { return m_activeDirectoryIdHasBeenSet; }

    /**
     * <p>The ID for an existing Microsoft Active Directory instance that the file
     * system should join when it's created.</p>
     */
    inline void SetActiveDirectoryId(const Aws::String& value) { m_activeDirectoryIdHasBeenSet = true; m_activeDirectoryId = value; }

    /**
     * <p>The ID for an existing Microsoft Active Directory instance that the file
     * system should join when it's created.</p>
     */
    inline void SetActiveDirectoryId(Aws::String&& value) { m_activeDirectoryIdHasBeenSet = true; m_activeDirectoryId = std::move(value); }

    /**
     * <p>The ID for an existing Microsoft Active Directory instance that the file
     * system should join when it's created.</p>
     */
    inline void SetActiveDirectoryId(const char* value) { m_activeDirectoryIdHasBeenSet = true; m_activeDirectoryId.assign(value); }

    /**
     * <p>The ID for an existing Microsoft Active Directory instance that the file
     * system should join when it's created.</p>
     */
    inline WindowsFileSystemConfiguration& WithActiveDirectoryId(const Aws::String& value) { SetActiveDirectoryId(value); return *this;}

    /**
     * <p>The ID for an existing Microsoft Active Directory instance that the file
     * system should join when it's created.</p>
     */
    inline WindowsFileSystemConfiguration& WithActiveDirectoryId(Aws::String&& value) { SetActiveDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The ID for an existing Microsoft Active Directory instance that the file
     * system should join when it's created.</p>
     */
    inline WindowsFileSystemConfiguration& WithActiveDirectoryId(const char* value) { SetActiveDirectoryId(value); return *this;}


    
    inline const SelfManagedActiveDirectoryAttributes& GetSelfManagedActiveDirectoryConfiguration() const{ return m_selfManagedActiveDirectoryConfiguration; }

    
    inline bool SelfManagedActiveDirectoryConfigurationHasBeenSet() const { return m_selfManagedActiveDirectoryConfigurationHasBeenSet; }

    
    inline void SetSelfManagedActiveDirectoryConfiguration(const SelfManagedActiveDirectoryAttributes& value) { m_selfManagedActiveDirectoryConfigurationHasBeenSet = true; m_selfManagedActiveDirectoryConfiguration = value; }

    
    inline void SetSelfManagedActiveDirectoryConfiguration(SelfManagedActiveDirectoryAttributes&& value) { m_selfManagedActiveDirectoryConfigurationHasBeenSet = true; m_selfManagedActiveDirectoryConfiguration = std::move(value); }

    
    inline WindowsFileSystemConfiguration& WithSelfManagedActiveDirectoryConfiguration(const SelfManagedActiveDirectoryAttributes& value) { SetSelfManagedActiveDirectoryConfiguration(value); return *this;}

    
    inline WindowsFileSystemConfiguration& WithSelfManagedActiveDirectoryConfiguration(SelfManagedActiveDirectoryAttributes&& value) { SetSelfManagedActiveDirectoryConfiguration(std::move(value)); return *this;}


    /**
     * <p>Specifies the file system deployment type, valid values are the
     * following:</p> <ul> <li> <p> <code>MULTI_AZ_1</code> - Specifies a high
     * availability file system that is configured for Multi-AZ redundancy to tolerate
     * temporary Availability Zone (AZ) unavailability, and supports SSD and HDD
     * storage.</p> </li> <li> <p> <code>SINGLE_AZ_1</code> - (Default) Specifies a
     * file system that is configured for single AZ redundancy, only supports SSD
     * storage.</p> </li> <li> <p> <code>SINGLE_AZ_2</code> - Latest generation Single
     * AZ file system. Specifies a file system that is configured for single AZ
     * redundancy and supports SSD and HDD storage.</p> </li> </ul> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/high-availability-multiAZ.html">Single-AZ
     * and Multi-AZ File Systems</a>.</p>
     */
    inline const WindowsDeploymentType& GetDeploymentType() const{ return m_deploymentType; }

    /**
     * <p>Specifies the file system deployment type, valid values are the
     * following:</p> <ul> <li> <p> <code>MULTI_AZ_1</code> - Specifies a high
     * availability file system that is configured for Multi-AZ redundancy to tolerate
     * temporary Availability Zone (AZ) unavailability, and supports SSD and HDD
     * storage.</p> </li> <li> <p> <code>SINGLE_AZ_1</code> - (Default) Specifies a
     * file system that is configured for single AZ redundancy, only supports SSD
     * storage.</p> </li> <li> <p> <code>SINGLE_AZ_2</code> - Latest generation Single
     * AZ file system. Specifies a file system that is configured for single AZ
     * redundancy and supports SSD and HDD storage.</p> </li> </ul> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/high-availability-multiAZ.html">Single-AZ
     * and Multi-AZ File Systems</a>.</p>
     */
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }

    /**
     * <p>Specifies the file system deployment type, valid values are the
     * following:</p> <ul> <li> <p> <code>MULTI_AZ_1</code> - Specifies a high
     * availability file system that is configured for Multi-AZ redundancy to tolerate
     * temporary Availability Zone (AZ) unavailability, and supports SSD and HDD
     * storage.</p> </li> <li> <p> <code>SINGLE_AZ_1</code> - (Default) Specifies a
     * file system that is configured for single AZ redundancy, only supports SSD
     * storage.</p> </li> <li> <p> <code>SINGLE_AZ_2</code> - Latest generation Single
     * AZ file system. Specifies a file system that is configured for single AZ
     * redundancy and supports SSD and HDD storage.</p> </li> </ul> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/high-availability-multiAZ.html">Single-AZ
     * and Multi-AZ File Systems</a>.</p>
     */
    inline void SetDeploymentType(const WindowsDeploymentType& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }

    /**
     * <p>Specifies the file system deployment type, valid values are the
     * following:</p> <ul> <li> <p> <code>MULTI_AZ_1</code> - Specifies a high
     * availability file system that is configured for Multi-AZ redundancy to tolerate
     * temporary Availability Zone (AZ) unavailability, and supports SSD and HDD
     * storage.</p> </li> <li> <p> <code>SINGLE_AZ_1</code> - (Default) Specifies a
     * file system that is configured for single AZ redundancy, only supports SSD
     * storage.</p> </li> <li> <p> <code>SINGLE_AZ_2</code> - Latest generation Single
     * AZ file system. Specifies a file system that is configured for single AZ
     * redundancy and supports SSD and HDD storage.</p> </li> </ul> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/high-availability-multiAZ.html">Single-AZ
     * and Multi-AZ File Systems</a>.</p>
     */
    inline void SetDeploymentType(WindowsDeploymentType&& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = std::move(value); }

    /**
     * <p>Specifies the file system deployment type, valid values are the
     * following:</p> <ul> <li> <p> <code>MULTI_AZ_1</code> - Specifies a high
     * availability file system that is configured for Multi-AZ redundancy to tolerate
     * temporary Availability Zone (AZ) unavailability, and supports SSD and HDD
     * storage.</p> </li> <li> <p> <code>SINGLE_AZ_1</code> - (Default) Specifies a
     * file system that is configured for single AZ redundancy, only supports SSD
     * storage.</p> </li> <li> <p> <code>SINGLE_AZ_2</code> - Latest generation Single
     * AZ file system. Specifies a file system that is configured for single AZ
     * redundancy and supports SSD and HDD storage.</p> </li> </ul> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/high-availability-multiAZ.html">Single-AZ
     * and Multi-AZ File Systems</a>.</p>
     */
    inline WindowsFileSystemConfiguration& WithDeploymentType(const WindowsDeploymentType& value) { SetDeploymentType(value); return *this;}

    /**
     * <p>Specifies the file system deployment type, valid values are the
     * following:</p> <ul> <li> <p> <code>MULTI_AZ_1</code> - Specifies a high
     * availability file system that is configured for Multi-AZ redundancy to tolerate
     * temporary Availability Zone (AZ) unavailability, and supports SSD and HDD
     * storage.</p> </li> <li> <p> <code>SINGLE_AZ_1</code> - (Default) Specifies a
     * file system that is configured for single AZ redundancy, only supports SSD
     * storage.</p> </li> <li> <p> <code>SINGLE_AZ_2</code> - Latest generation Single
     * AZ file system. Specifies a file system that is configured for single AZ
     * redundancy and supports SSD and HDD storage.</p> </li> </ul> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/high-availability-multiAZ.html">Single-AZ
     * and Multi-AZ File Systems</a>.</p>
     */
    inline WindowsFileSystemConfiguration& WithDeploymentType(WindowsDeploymentType&& value) { SetDeploymentType(std::move(value)); return *this;}


    /**
     * <p>For <code>MULTI_AZ_1</code> deployment types, use this endpoint when
     * performing administrative tasks on the file system using Amazon FSx Remote
     * PowerShell.</p> <p>For <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code>
     * deployment types, this is the DNS name of the file system.</p> <p>This endpoint
     * is temporarily unavailable when the file system is undergoing maintenance.</p>
     */
    inline const Aws::String& GetRemoteAdministrationEndpoint() const{ return m_remoteAdministrationEndpoint; }

    /**
     * <p>For <code>MULTI_AZ_1</code> deployment types, use this endpoint when
     * performing administrative tasks on the file system using Amazon FSx Remote
     * PowerShell.</p> <p>For <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code>
     * deployment types, this is the DNS name of the file system.</p> <p>This endpoint
     * is temporarily unavailable when the file system is undergoing maintenance.</p>
     */
    inline bool RemoteAdministrationEndpointHasBeenSet() const { return m_remoteAdministrationEndpointHasBeenSet; }

    /**
     * <p>For <code>MULTI_AZ_1</code> deployment types, use this endpoint when
     * performing administrative tasks on the file system using Amazon FSx Remote
     * PowerShell.</p> <p>For <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code>
     * deployment types, this is the DNS name of the file system.</p> <p>This endpoint
     * is temporarily unavailable when the file system is undergoing maintenance.</p>
     */
    inline void SetRemoteAdministrationEndpoint(const Aws::String& value) { m_remoteAdministrationEndpointHasBeenSet = true; m_remoteAdministrationEndpoint = value; }

    /**
     * <p>For <code>MULTI_AZ_1</code> deployment types, use this endpoint when
     * performing administrative tasks on the file system using Amazon FSx Remote
     * PowerShell.</p> <p>For <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code>
     * deployment types, this is the DNS name of the file system.</p> <p>This endpoint
     * is temporarily unavailable when the file system is undergoing maintenance.</p>
     */
    inline void SetRemoteAdministrationEndpoint(Aws::String&& value) { m_remoteAdministrationEndpointHasBeenSet = true; m_remoteAdministrationEndpoint = std::move(value); }

    /**
     * <p>For <code>MULTI_AZ_1</code> deployment types, use this endpoint when
     * performing administrative tasks on the file system using Amazon FSx Remote
     * PowerShell.</p> <p>For <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code>
     * deployment types, this is the DNS name of the file system.</p> <p>This endpoint
     * is temporarily unavailable when the file system is undergoing maintenance.</p>
     */
    inline void SetRemoteAdministrationEndpoint(const char* value) { m_remoteAdministrationEndpointHasBeenSet = true; m_remoteAdministrationEndpoint.assign(value); }

    /**
     * <p>For <code>MULTI_AZ_1</code> deployment types, use this endpoint when
     * performing administrative tasks on the file system using Amazon FSx Remote
     * PowerShell.</p> <p>For <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code>
     * deployment types, this is the DNS name of the file system.</p> <p>This endpoint
     * is temporarily unavailable when the file system is undergoing maintenance.</p>
     */
    inline WindowsFileSystemConfiguration& WithRemoteAdministrationEndpoint(const Aws::String& value) { SetRemoteAdministrationEndpoint(value); return *this;}

    /**
     * <p>For <code>MULTI_AZ_1</code> deployment types, use this endpoint when
     * performing administrative tasks on the file system using Amazon FSx Remote
     * PowerShell.</p> <p>For <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code>
     * deployment types, this is the DNS name of the file system.</p> <p>This endpoint
     * is temporarily unavailable when the file system is undergoing maintenance.</p>
     */
    inline WindowsFileSystemConfiguration& WithRemoteAdministrationEndpoint(Aws::String&& value) { SetRemoteAdministrationEndpoint(std::move(value)); return *this;}

    /**
     * <p>For <code>MULTI_AZ_1</code> deployment types, use this endpoint when
     * performing administrative tasks on the file system using Amazon FSx Remote
     * PowerShell.</p> <p>For <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code>
     * deployment types, this is the DNS name of the file system.</p> <p>This endpoint
     * is temporarily unavailable when the file system is undergoing maintenance.</p>
     */
    inline WindowsFileSystemConfiguration& WithRemoteAdministrationEndpoint(const char* value) { SetRemoteAdministrationEndpoint(value); return *this;}


    /**
     * <p>For <code>MULTI_AZ_1</code> deployment types, it specifies the ID of the
     * subnet where the preferred file server is located. Must be one of the two subnet
     * IDs specified in <code>SubnetIds</code> property. Amazon FSx serves traffic from
     * this subnet except in the event of a failover to the secondary file server.</p>
     * <p>For <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code> deployment types,
     * this value is the same as that for <code>SubnetIDs</code>. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/high-availability-multiAZ.html#single-multi-az-resources">Availability
     * and Durability: Single-AZ and Multi-AZ File Systems</a> </p>
     */
    inline const Aws::String& GetPreferredSubnetId() const{ return m_preferredSubnetId; }

    /**
     * <p>For <code>MULTI_AZ_1</code> deployment types, it specifies the ID of the
     * subnet where the preferred file server is located. Must be one of the two subnet
     * IDs specified in <code>SubnetIds</code> property. Amazon FSx serves traffic from
     * this subnet except in the event of a failover to the secondary file server.</p>
     * <p>For <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code> deployment types,
     * this value is the same as that for <code>SubnetIDs</code>. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/high-availability-multiAZ.html#single-multi-az-resources">Availability
     * and Durability: Single-AZ and Multi-AZ File Systems</a> </p>
     */
    inline bool PreferredSubnetIdHasBeenSet() const { return m_preferredSubnetIdHasBeenSet; }

    /**
     * <p>For <code>MULTI_AZ_1</code> deployment types, it specifies the ID of the
     * subnet where the preferred file server is located. Must be one of the two subnet
     * IDs specified in <code>SubnetIds</code> property. Amazon FSx serves traffic from
     * this subnet except in the event of a failover to the secondary file server.</p>
     * <p>For <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code> deployment types,
     * this value is the same as that for <code>SubnetIDs</code>. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/high-availability-multiAZ.html#single-multi-az-resources">Availability
     * and Durability: Single-AZ and Multi-AZ File Systems</a> </p>
     */
    inline void SetPreferredSubnetId(const Aws::String& value) { m_preferredSubnetIdHasBeenSet = true; m_preferredSubnetId = value; }

    /**
     * <p>For <code>MULTI_AZ_1</code> deployment types, it specifies the ID of the
     * subnet where the preferred file server is located. Must be one of the two subnet
     * IDs specified in <code>SubnetIds</code> property. Amazon FSx serves traffic from
     * this subnet except in the event of a failover to the secondary file server.</p>
     * <p>For <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code> deployment types,
     * this value is the same as that for <code>SubnetIDs</code>. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/high-availability-multiAZ.html#single-multi-az-resources">Availability
     * and Durability: Single-AZ and Multi-AZ File Systems</a> </p>
     */
    inline void SetPreferredSubnetId(Aws::String&& value) { m_preferredSubnetIdHasBeenSet = true; m_preferredSubnetId = std::move(value); }

    /**
     * <p>For <code>MULTI_AZ_1</code> deployment types, it specifies the ID of the
     * subnet where the preferred file server is located. Must be one of the two subnet
     * IDs specified in <code>SubnetIds</code> property. Amazon FSx serves traffic from
     * this subnet except in the event of a failover to the secondary file server.</p>
     * <p>For <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code> deployment types,
     * this value is the same as that for <code>SubnetIDs</code>. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/high-availability-multiAZ.html#single-multi-az-resources">Availability
     * and Durability: Single-AZ and Multi-AZ File Systems</a> </p>
     */
    inline void SetPreferredSubnetId(const char* value) { m_preferredSubnetIdHasBeenSet = true; m_preferredSubnetId.assign(value); }

    /**
     * <p>For <code>MULTI_AZ_1</code> deployment types, it specifies the ID of the
     * subnet where the preferred file server is located. Must be one of the two subnet
     * IDs specified in <code>SubnetIds</code> property. Amazon FSx serves traffic from
     * this subnet except in the event of a failover to the secondary file server.</p>
     * <p>For <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code> deployment types,
     * this value is the same as that for <code>SubnetIDs</code>. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/high-availability-multiAZ.html#single-multi-az-resources">Availability
     * and Durability: Single-AZ and Multi-AZ File Systems</a> </p>
     */
    inline WindowsFileSystemConfiguration& WithPreferredSubnetId(const Aws::String& value) { SetPreferredSubnetId(value); return *this;}

    /**
     * <p>For <code>MULTI_AZ_1</code> deployment types, it specifies the ID of the
     * subnet where the preferred file server is located. Must be one of the two subnet
     * IDs specified in <code>SubnetIds</code> property. Amazon FSx serves traffic from
     * this subnet except in the event of a failover to the secondary file server.</p>
     * <p>For <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code> deployment types,
     * this value is the same as that for <code>SubnetIDs</code>. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/high-availability-multiAZ.html#single-multi-az-resources">Availability
     * and Durability: Single-AZ and Multi-AZ File Systems</a> </p>
     */
    inline WindowsFileSystemConfiguration& WithPreferredSubnetId(Aws::String&& value) { SetPreferredSubnetId(std::move(value)); return *this;}

    /**
     * <p>For <code>MULTI_AZ_1</code> deployment types, it specifies the ID of the
     * subnet where the preferred file server is located. Must be one of the two subnet
     * IDs specified in <code>SubnetIds</code> property. Amazon FSx serves traffic from
     * this subnet except in the event of a failover to the secondary file server.</p>
     * <p>For <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code> deployment types,
     * this value is the same as that for <code>SubnetIDs</code>. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/high-availability-multiAZ.html#single-multi-az-resources">Availability
     * and Durability: Single-AZ and Multi-AZ File Systems</a> </p>
     */
    inline WindowsFileSystemConfiguration& WithPreferredSubnetId(const char* value) { SetPreferredSubnetId(value); return *this;}


    /**
     * <p>For <code>MULTI_AZ_1</code> deployment types, the IP address of the primary,
     * or preferred, file server.</p> <p>Use this IP address when mounting the file
     * system on Linux SMB clients or Windows SMB clients that are not joined to a
     * Microsoft Active Directory. Applicable for all Windows file system deployment
     * types. This IP address is temporarily unavailable when the file system is
     * undergoing maintenance. For Linux and Windows SMB clients that are joined to an
     * Active Directory, use the file system's DNSName instead. For more information on
     * mapping and mounting file shares, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/accessing-file-shares.html">Accessing
     * File Shares</a>.</p>
     */
    inline const Aws::String& GetPreferredFileServerIp() const{ return m_preferredFileServerIp; }

    /**
     * <p>For <code>MULTI_AZ_1</code> deployment types, the IP address of the primary,
     * or preferred, file server.</p> <p>Use this IP address when mounting the file
     * system on Linux SMB clients or Windows SMB clients that are not joined to a
     * Microsoft Active Directory. Applicable for all Windows file system deployment
     * types. This IP address is temporarily unavailable when the file system is
     * undergoing maintenance. For Linux and Windows SMB clients that are joined to an
     * Active Directory, use the file system's DNSName instead. For more information on
     * mapping and mounting file shares, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/accessing-file-shares.html">Accessing
     * File Shares</a>.</p>
     */
    inline bool PreferredFileServerIpHasBeenSet() const { return m_preferredFileServerIpHasBeenSet; }

    /**
     * <p>For <code>MULTI_AZ_1</code> deployment types, the IP address of the primary,
     * or preferred, file server.</p> <p>Use this IP address when mounting the file
     * system on Linux SMB clients or Windows SMB clients that are not joined to a
     * Microsoft Active Directory. Applicable for all Windows file system deployment
     * types. This IP address is temporarily unavailable when the file system is
     * undergoing maintenance. For Linux and Windows SMB clients that are joined to an
     * Active Directory, use the file system's DNSName instead. For more information on
     * mapping and mounting file shares, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/accessing-file-shares.html">Accessing
     * File Shares</a>.</p>
     */
    inline void SetPreferredFileServerIp(const Aws::String& value) { m_preferredFileServerIpHasBeenSet = true; m_preferredFileServerIp = value; }

    /**
     * <p>For <code>MULTI_AZ_1</code> deployment types, the IP address of the primary,
     * or preferred, file server.</p> <p>Use this IP address when mounting the file
     * system on Linux SMB clients or Windows SMB clients that are not joined to a
     * Microsoft Active Directory. Applicable for all Windows file system deployment
     * types. This IP address is temporarily unavailable when the file system is
     * undergoing maintenance. For Linux and Windows SMB clients that are joined to an
     * Active Directory, use the file system's DNSName instead. For more information on
     * mapping and mounting file shares, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/accessing-file-shares.html">Accessing
     * File Shares</a>.</p>
     */
    inline void SetPreferredFileServerIp(Aws::String&& value) { m_preferredFileServerIpHasBeenSet = true; m_preferredFileServerIp = std::move(value); }

    /**
     * <p>For <code>MULTI_AZ_1</code> deployment types, the IP address of the primary,
     * or preferred, file server.</p> <p>Use this IP address when mounting the file
     * system on Linux SMB clients or Windows SMB clients that are not joined to a
     * Microsoft Active Directory. Applicable for all Windows file system deployment
     * types. This IP address is temporarily unavailable when the file system is
     * undergoing maintenance. For Linux and Windows SMB clients that are joined to an
     * Active Directory, use the file system's DNSName instead. For more information on
     * mapping and mounting file shares, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/accessing-file-shares.html">Accessing
     * File Shares</a>.</p>
     */
    inline void SetPreferredFileServerIp(const char* value) { m_preferredFileServerIpHasBeenSet = true; m_preferredFileServerIp.assign(value); }

    /**
     * <p>For <code>MULTI_AZ_1</code> deployment types, the IP address of the primary,
     * or preferred, file server.</p> <p>Use this IP address when mounting the file
     * system on Linux SMB clients or Windows SMB clients that are not joined to a
     * Microsoft Active Directory. Applicable for all Windows file system deployment
     * types. This IP address is temporarily unavailable when the file system is
     * undergoing maintenance. For Linux and Windows SMB clients that are joined to an
     * Active Directory, use the file system's DNSName instead. For more information on
     * mapping and mounting file shares, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/accessing-file-shares.html">Accessing
     * File Shares</a>.</p>
     */
    inline WindowsFileSystemConfiguration& WithPreferredFileServerIp(const Aws::String& value) { SetPreferredFileServerIp(value); return *this;}

    /**
     * <p>For <code>MULTI_AZ_1</code> deployment types, the IP address of the primary,
     * or preferred, file server.</p> <p>Use this IP address when mounting the file
     * system on Linux SMB clients or Windows SMB clients that are not joined to a
     * Microsoft Active Directory. Applicable for all Windows file system deployment
     * types. This IP address is temporarily unavailable when the file system is
     * undergoing maintenance. For Linux and Windows SMB clients that are joined to an
     * Active Directory, use the file system's DNSName instead. For more information on
     * mapping and mounting file shares, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/accessing-file-shares.html">Accessing
     * File Shares</a>.</p>
     */
    inline WindowsFileSystemConfiguration& WithPreferredFileServerIp(Aws::String&& value) { SetPreferredFileServerIp(std::move(value)); return *this;}

    /**
     * <p>For <code>MULTI_AZ_1</code> deployment types, the IP address of the primary,
     * or preferred, file server.</p> <p>Use this IP address when mounting the file
     * system on Linux SMB clients or Windows SMB clients that are not joined to a
     * Microsoft Active Directory. Applicable for all Windows file system deployment
     * types. This IP address is temporarily unavailable when the file system is
     * undergoing maintenance. For Linux and Windows SMB clients that are joined to an
     * Active Directory, use the file system's DNSName instead. For more information on
     * mapping and mounting file shares, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/accessing-file-shares.html">Accessing
     * File Shares</a>.</p>
     */
    inline WindowsFileSystemConfiguration& WithPreferredFileServerIp(const char* value) { SetPreferredFileServerIp(value); return *this;}


    /**
     * <p>The throughput of an Amazon FSx file system, measured in megabytes per
     * second.</p>
     */
    inline int GetThroughputCapacity() const{ return m_throughputCapacity; }

    /**
     * <p>The throughput of an Amazon FSx file system, measured in megabytes per
     * second.</p>
     */
    inline bool ThroughputCapacityHasBeenSet() const { return m_throughputCapacityHasBeenSet; }

    /**
     * <p>The throughput of an Amazon FSx file system, measured in megabytes per
     * second.</p>
     */
    inline void SetThroughputCapacity(int value) { m_throughputCapacityHasBeenSet = true; m_throughputCapacity = value; }

    /**
     * <p>The throughput of an Amazon FSx file system, measured in megabytes per
     * second.</p>
     */
    inline WindowsFileSystemConfiguration& WithThroughputCapacity(int value) { SetThroughputCapacity(value); return *this;}


    /**
     * <p>The list of maintenance operations in progress for this file system.</p>
     */
    inline const Aws::Vector<FileSystemMaintenanceOperation>& GetMaintenanceOperationsInProgress() const{ return m_maintenanceOperationsInProgress; }

    /**
     * <p>The list of maintenance operations in progress for this file system.</p>
     */
    inline bool MaintenanceOperationsInProgressHasBeenSet() const { return m_maintenanceOperationsInProgressHasBeenSet; }

    /**
     * <p>The list of maintenance operations in progress for this file system.</p>
     */
    inline void SetMaintenanceOperationsInProgress(const Aws::Vector<FileSystemMaintenanceOperation>& value) { m_maintenanceOperationsInProgressHasBeenSet = true; m_maintenanceOperationsInProgress = value; }

    /**
     * <p>The list of maintenance operations in progress for this file system.</p>
     */
    inline void SetMaintenanceOperationsInProgress(Aws::Vector<FileSystemMaintenanceOperation>&& value) { m_maintenanceOperationsInProgressHasBeenSet = true; m_maintenanceOperationsInProgress = std::move(value); }

    /**
     * <p>The list of maintenance operations in progress for this file system.</p>
     */
    inline WindowsFileSystemConfiguration& WithMaintenanceOperationsInProgress(const Aws::Vector<FileSystemMaintenanceOperation>& value) { SetMaintenanceOperationsInProgress(value); return *this;}

    /**
     * <p>The list of maintenance operations in progress for this file system.</p>
     */
    inline WindowsFileSystemConfiguration& WithMaintenanceOperationsInProgress(Aws::Vector<FileSystemMaintenanceOperation>&& value) { SetMaintenanceOperationsInProgress(std::move(value)); return *this;}

    /**
     * <p>The list of maintenance operations in progress for this file system.</p>
     */
    inline WindowsFileSystemConfiguration& AddMaintenanceOperationsInProgress(const FileSystemMaintenanceOperation& value) { m_maintenanceOperationsInProgressHasBeenSet = true; m_maintenanceOperationsInProgress.push_back(value); return *this; }

    /**
     * <p>The list of maintenance operations in progress for this file system.</p>
     */
    inline WindowsFileSystemConfiguration& AddMaintenanceOperationsInProgress(FileSystemMaintenanceOperation&& value) { m_maintenanceOperationsInProgressHasBeenSet = true; m_maintenanceOperationsInProgress.push_back(std::move(value)); return *this; }


    /**
     * <p>The preferred time to perform weekly maintenance, in the UTC time zone.</p>
     */
    inline const Aws::String& GetWeeklyMaintenanceStartTime() const{ return m_weeklyMaintenanceStartTime; }

    /**
     * <p>The preferred time to perform weekly maintenance, in the UTC time zone.</p>
     */
    inline bool WeeklyMaintenanceStartTimeHasBeenSet() const { return m_weeklyMaintenanceStartTimeHasBeenSet; }

    /**
     * <p>The preferred time to perform weekly maintenance, in the UTC time zone.</p>
     */
    inline void SetWeeklyMaintenanceStartTime(const Aws::String& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = value; }

    /**
     * <p>The preferred time to perform weekly maintenance, in the UTC time zone.</p>
     */
    inline void SetWeeklyMaintenanceStartTime(Aws::String&& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = std::move(value); }

    /**
     * <p>The preferred time to perform weekly maintenance, in the UTC time zone.</p>
     */
    inline void SetWeeklyMaintenanceStartTime(const char* value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime.assign(value); }

    /**
     * <p>The preferred time to perform weekly maintenance, in the UTC time zone.</p>
     */
    inline WindowsFileSystemConfiguration& WithWeeklyMaintenanceStartTime(const Aws::String& value) { SetWeeklyMaintenanceStartTime(value); return *this;}

    /**
     * <p>The preferred time to perform weekly maintenance, in the UTC time zone.</p>
     */
    inline WindowsFileSystemConfiguration& WithWeeklyMaintenanceStartTime(Aws::String&& value) { SetWeeklyMaintenanceStartTime(std::move(value)); return *this;}

    /**
     * <p>The preferred time to perform weekly maintenance, in the UTC time zone.</p>
     */
    inline WindowsFileSystemConfiguration& WithWeeklyMaintenanceStartTime(const char* value) { SetWeeklyMaintenanceStartTime(value); return *this;}


    /**
     * <p>The preferred time to take daily automatic backups, in the UTC time zone.</p>
     */
    inline const Aws::String& GetDailyAutomaticBackupStartTime() const{ return m_dailyAutomaticBackupStartTime; }

    /**
     * <p>The preferred time to take daily automatic backups, in the UTC time zone.</p>
     */
    inline bool DailyAutomaticBackupStartTimeHasBeenSet() const { return m_dailyAutomaticBackupStartTimeHasBeenSet; }

    /**
     * <p>The preferred time to take daily automatic backups, in the UTC time zone.</p>
     */
    inline void SetDailyAutomaticBackupStartTime(const Aws::String& value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime = value; }

    /**
     * <p>The preferred time to take daily automatic backups, in the UTC time zone.</p>
     */
    inline void SetDailyAutomaticBackupStartTime(Aws::String&& value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime = std::move(value); }

    /**
     * <p>The preferred time to take daily automatic backups, in the UTC time zone.</p>
     */
    inline void SetDailyAutomaticBackupStartTime(const char* value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime.assign(value); }

    /**
     * <p>The preferred time to take daily automatic backups, in the UTC time zone.</p>
     */
    inline WindowsFileSystemConfiguration& WithDailyAutomaticBackupStartTime(const Aws::String& value) { SetDailyAutomaticBackupStartTime(value); return *this;}

    /**
     * <p>The preferred time to take daily automatic backups, in the UTC time zone.</p>
     */
    inline WindowsFileSystemConfiguration& WithDailyAutomaticBackupStartTime(Aws::String&& value) { SetDailyAutomaticBackupStartTime(std::move(value)); return *this;}

    /**
     * <p>The preferred time to take daily automatic backups, in the UTC time zone.</p>
     */
    inline WindowsFileSystemConfiguration& WithDailyAutomaticBackupStartTime(const char* value) { SetDailyAutomaticBackupStartTime(value); return *this;}


    /**
     * <p>The number of days to retain automatic backups. Setting this to 0 disables
     * automatic backups. You can retain automatic backups for a maximum of 35
     * days.</p>
     */
    inline int GetAutomaticBackupRetentionDays() const{ return m_automaticBackupRetentionDays; }

    /**
     * <p>The number of days to retain automatic backups. Setting this to 0 disables
     * automatic backups. You can retain automatic backups for a maximum of 35
     * days.</p>
     */
    inline bool AutomaticBackupRetentionDaysHasBeenSet() const { return m_automaticBackupRetentionDaysHasBeenSet; }

    /**
     * <p>The number of days to retain automatic backups. Setting this to 0 disables
     * automatic backups. You can retain automatic backups for a maximum of 35
     * days.</p>
     */
    inline void SetAutomaticBackupRetentionDays(int value) { m_automaticBackupRetentionDaysHasBeenSet = true; m_automaticBackupRetentionDays = value; }

    /**
     * <p>The number of days to retain automatic backups. Setting this to 0 disables
     * automatic backups. You can retain automatic backups for a maximum of 35
     * days.</p>
     */
    inline WindowsFileSystemConfiguration& WithAutomaticBackupRetentionDays(int value) { SetAutomaticBackupRetentionDays(value); return *this;}


    /**
     * <p>A boolean flag indicating whether tags on the file system should be copied to
     * backups. This value defaults to false. If it's set to true, all tags on the file
     * system are copied to all automatic backups and any user-initiated backups where
     * the user doesn't specify any tags. If this value is true, and you specify one or
     * more tags, only the specified tags are copied to backups. If you specify one or
     * more tags when creating a user-initiated backup, no tags are copied from the
     * file system, regardless of this value.</p>
     */
    inline bool GetCopyTagsToBackups() const{ return m_copyTagsToBackups; }

    /**
     * <p>A boolean flag indicating whether tags on the file system should be copied to
     * backups. This value defaults to false. If it's set to true, all tags on the file
     * system are copied to all automatic backups and any user-initiated backups where
     * the user doesn't specify any tags. If this value is true, and you specify one or
     * more tags, only the specified tags are copied to backups. If you specify one or
     * more tags when creating a user-initiated backup, no tags are copied from the
     * file system, regardless of this value.</p>
     */
    inline bool CopyTagsToBackupsHasBeenSet() const { return m_copyTagsToBackupsHasBeenSet; }

    /**
     * <p>A boolean flag indicating whether tags on the file system should be copied to
     * backups. This value defaults to false. If it's set to true, all tags on the file
     * system are copied to all automatic backups and any user-initiated backups where
     * the user doesn't specify any tags. If this value is true, and you specify one or
     * more tags, only the specified tags are copied to backups. If you specify one or
     * more tags when creating a user-initiated backup, no tags are copied from the
     * file system, regardless of this value.</p>
     */
    inline void SetCopyTagsToBackups(bool value) { m_copyTagsToBackupsHasBeenSet = true; m_copyTagsToBackups = value; }

    /**
     * <p>A boolean flag indicating whether tags on the file system should be copied to
     * backups. This value defaults to false. If it's set to true, all tags on the file
     * system are copied to all automatic backups and any user-initiated backups where
     * the user doesn't specify any tags. If this value is true, and you specify one or
     * more tags, only the specified tags are copied to backups. If you specify one or
     * more tags when creating a user-initiated backup, no tags are copied from the
     * file system, regardless of this value.</p>
     */
    inline WindowsFileSystemConfiguration& WithCopyTagsToBackups(bool value) { SetCopyTagsToBackups(value); return *this;}

  private:

    Aws::String m_activeDirectoryId;
    bool m_activeDirectoryIdHasBeenSet;

    SelfManagedActiveDirectoryAttributes m_selfManagedActiveDirectoryConfiguration;
    bool m_selfManagedActiveDirectoryConfigurationHasBeenSet;

    WindowsDeploymentType m_deploymentType;
    bool m_deploymentTypeHasBeenSet;

    Aws::String m_remoteAdministrationEndpoint;
    bool m_remoteAdministrationEndpointHasBeenSet;

    Aws::String m_preferredSubnetId;
    bool m_preferredSubnetIdHasBeenSet;

    Aws::String m_preferredFileServerIp;
    bool m_preferredFileServerIpHasBeenSet;

    int m_throughputCapacity;
    bool m_throughputCapacityHasBeenSet;

    Aws::Vector<FileSystemMaintenanceOperation> m_maintenanceOperationsInProgress;
    bool m_maintenanceOperationsInProgressHasBeenSet;

    Aws::String m_weeklyMaintenanceStartTime;
    bool m_weeklyMaintenanceStartTimeHasBeenSet;

    Aws::String m_dailyAutomaticBackupStartTime;
    bool m_dailyAutomaticBackupStartTimeHasBeenSet;

    int m_automaticBackupRetentionDays;
    bool m_automaticBackupRetentionDaysHasBeenSet;

    bool m_copyTagsToBackups;
    bool m_copyTagsToBackupsHasBeenSet;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
