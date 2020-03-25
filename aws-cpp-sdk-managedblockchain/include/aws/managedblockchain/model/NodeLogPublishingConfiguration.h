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
#include <aws/managedblockchain/model/NodeFabricLogPublishingConfiguration.h>
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
   * <p>Configuration properties for logging events associated with a peer node owned
   * by a member in a Managed Blockchain network.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/NodeLogPublishingConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_MANAGEDBLOCKCHAIN_API NodeLogPublishingConfiguration
  {
  public:
    NodeLogPublishingConfiguration();
    NodeLogPublishingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    NodeLogPublishingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Configuration properties for logging events associated with a node that is
     * owned by a member of a Managed Blockchain network using the Hyperledger Fabric
     * framework.</p>
     */
    inline const NodeFabricLogPublishingConfiguration& GetFabric() const{ return m_fabric; }

    /**
     * <p>Configuration properties for logging events associated with a node that is
     * owned by a member of a Managed Blockchain network using the Hyperledger Fabric
     * framework.</p>
     */
    inline bool FabricHasBeenSet() const { return m_fabricHasBeenSet; }

    /**
     * <p>Configuration properties for logging events associated with a node that is
     * owned by a member of a Managed Blockchain network using the Hyperledger Fabric
     * framework.</p>
     */
    inline void SetFabric(const NodeFabricLogPublishingConfiguration& value) { m_fabricHasBeenSet = true; m_fabric = value; }

    /**
     * <p>Configuration properties for logging events associated with a node that is
     * owned by a member of a Managed Blockchain network using the Hyperledger Fabric
     * framework.</p>
     */
    inline void SetFabric(NodeFabricLogPublishingConfiguration&& value) { m_fabricHasBeenSet = true; m_fabric = std::move(value); }

    /**
     * <p>Configuration properties for logging events associated with a node that is
     * owned by a member of a Managed Blockchain network using the Hyperledger Fabric
     * framework.</p>
     */
    inline NodeLogPublishingConfiguration& WithFabric(const NodeFabricLogPublishingConfiguration& value) { SetFabric(value); return *this;}

    /**
     * <p>Configuration properties for logging events associated with a node that is
     * owned by a member of a Managed Blockchain network using the Hyperledger Fabric
     * framework.</p>
     */
    inline NodeLogPublishingConfiguration& WithFabric(NodeFabricLogPublishingConfiguration&& value) { SetFabric(std::move(value)); return *this;}

  private:

    NodeFabricLogPublishingConfiguration m_fabric;
    bool m_fabricHasBeenSet;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
