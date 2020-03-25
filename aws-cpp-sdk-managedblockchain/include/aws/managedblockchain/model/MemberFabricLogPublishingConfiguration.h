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
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/model/LogConfigurations.h>
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
namespace ManagedBlockchain
{
namespace Model
{

  /**
   * <p>Configuration properties for logging events associated with a member of a
   * Managed Blockchain network using the Hyperledger Fabric framework.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/MemberFabricLogPublishingConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_MANAGEDBLOCKCHAIN_API MemberFabricLogPublishingConfiguration
  {
  public:
    MemberFabricLogPublishingConfiguration();
    MemberFabricLogPublishingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    MemberFabricLogPublishingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Configuration properties for logging events associated with a member's
     * Certificate Authority (CA). CA logs help you determine when a member in your
     * account joins the network, or when new peers register with a member CA.</p>
     */
    inline const LogConfigurations& GetCaLogs() const{ return m_caLogs; }

    /**
     * <p>Configuration properties for logging events associated with a member's
     * Certificate Authority (CA). CA logs help you determine when a member in your
     * account joins the network, or when new peers register with a member CA.</p>
     */
    inline bool CaLogsHasBeenSet() const { return m_caLogsHasBeenSet; }

    /**
     * <p>Configuration properties for logging events associated with a member's
     * Certificate Authority (CA). CA logs help you determine when a member in your
     * account joins the network, or when new peers register with a member CA.</p>
     */
    inline void SetCaLogs(const LogConfigurations& value) { m_caLogsHasBeenSet = true; m_caLogs = value; }

    /**
     * <p>Configuration properties for logging events associated with a member's
     * Certificate Authority (CA). CA logs help you determine when a member in your
     * account joins the network, or when new peers register with a member CA.</p>
     */
    inline void SetCaLogs(LogConfigurations&& value) { m_caLogsHasBeenSet = true; m_caLogs = std::move(value); }

    /**
     * <p>Configuration properties for logging events associated with a member's
     * Certificate Authority (CA). CA logs help you determine when a member in your
     * account joins the network, or when new peers register with a member CA.</p>
     */
    inline MemberFabricLogPublishingConfiguration& WithCaLogs(const LogConfigurations& value) { SetCaLogs(value); return *this;}

    /**
     * <p>Configuration properties for logging events associated with a member's
     * Certificate Authority (CA). CA logs help you determine when a member in your
     * account joins the network, or when new peers register with a member CA.</p>
     */
    inline MemberFabricLogPublishingConfiguration& WithCaLogs(LogConfigurations&& value) { SetCaLogs(std::move(value)); return *this;}

  private:

    LogConfigurations m_caLogs;
    bool m_caLogsHasBeenSet;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
