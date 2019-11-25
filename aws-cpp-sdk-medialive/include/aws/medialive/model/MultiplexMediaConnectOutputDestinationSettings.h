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
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Multiplex MediaConnect output destination settings.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MultiplexMediaConnectOutputDestinationSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API MultiplexMediaConnectOutputDestinationSettings
  {
  public:
    MultiplexMediaConnectOutputDestinationSettings();
    MultiplexMediaConnectOutputDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    MultiplexMediaConnectOutputDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The MediaConnect entitlement ARN available as a Flow source.
     */
    inline const Aws::String& GetEntitlementArn() const{ return m_entitlementArn; }

    /**
     * The MediaConnect entitlement ARN available as a Flow source.
     */
    inline bool EntitlementArnHasBeenSet() const { return m_entitlementArnHasBeenSet; }

    /**
     * The MediaConnect entitlement ARN available as a Flow source.
     */
    inline void SetEntitlementArn(const Aws::String& value) { m_entitlementArnHasBeenSet = true; m_entitlementArn = value; }

    /**
     * The MediaConnect entitlement ARN available as a Flow source.
     */
    inline void SetEntitlementArn(Aws::String&& value) { m_entitlementArnHasBeenSet = true; m_entitlementArn = std::move(value); }

    /**
     * The MediaConnect entitlement ARN available as a Flow source.
     */
    inline void SetEntitlementArn(const char* value) { m_entitlementArnHasBeenSet = true; m_entitlementArn.assign(value); }

    /**
     * The MediaConnect entitlement ARN available as a Flow source.
     */
    inline MultiplexMediaConnectOutputDestinationSettings& WithEntitlementArn(const Aws::String& value) { SetEntitlementArn(value); return *this;}

    /**
     * The MediaConnect entitlement ARN available as a Flow source.
     */
    inline MultiplexMediaConnectOutputDestinationSettings& WithEntitlementArn(Aws::String&& value) { SetEntitlementArn(std::move(value)); return *this;}

    /**
     * The MediaConnect entitlement ARN available as a Flow source.
     */
    inline MultiplexMediaConnectOutputDestinationSettings& WithEntitlementArn(const char* value) { SetEntitlementArn(value); return *this;}

  private:

    Aws::String m_entitlementArn;
    bool m_entitlementArnHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
