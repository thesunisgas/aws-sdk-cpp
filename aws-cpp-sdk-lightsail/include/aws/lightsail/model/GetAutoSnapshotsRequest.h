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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class AWS_LIGHTSAIL_API GetAutoSnapshotsRequest : public LightsailRequest
  {
  public:
    GetAutoSnapshotsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAutoSnapshots"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the source instance or disk from which to get automatic snapshot
     * information.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>The name of the source instance or disk from which to get automatic snapshot
     * information.</p>
     */
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }

    /**
     * <p>The name of the source instance or disk from which to get automatic snapshot
     * information.</p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>The name of the source instance or disk from which to get automatic snapshot
     * information.</p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }

    /**
     * <p>The name of the source instance or disk from which to get automatic snapshot
     * information.</p>
     */
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    /**
     * <p>The name of the source instance or disk from which to get automatic snapshot
     * information.</p>
     */
    inline GetAutoSnapshotsRequest& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>The name of the source instance or disk from which to get automatic snapshot
     * information.</p>
     */
    inline GetAutoSnapshotsRequest& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}

    /**
     * <p>The name of the source instance or disk from which to get automatic snapshot
     * information.</p>
     */
    inline GetAutoSnapshotsRequest& WithResourceName(const char* value) { SetResourceName(value); return *this;}

  private:

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
