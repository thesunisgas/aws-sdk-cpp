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
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ManagedBlockchain
{
namespace Model
{
  enum class NodeStatus
  {
    NOT_SET,
    CREATING,
    AVAILABLE,
    CREATE_FAILED,
    UPDATING,
    DELETING,
    DELETED,
    FAILED
  };

namespace NodeStatusMapper
{
AWS_MANAGEDBLOCKCHAIN_API NodeStatus GetNodeStatusForName(const Aws::String& name);

AWS_MANAGEDBLOCKCHAIN_API Aws::String GetNameForNodeStatus(NodeStatus value);
} // namespace NodeStatusMapper
} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
