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
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/Greengrass.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains a gateway's platform information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/GatewayPlatform">AWS
   * API Reference</a></p>
   */
  class AWS_IOTSITEWISE_API GatewayPlatform
  {
  public:
    GatewayPlatform();
    GatewayPlatform(Aws::Utils::Json::JsonView jsonValue);
    GatewayPlatform& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A gateway that runs on AWS IoT Greengrass.</p>
     */
    inline const Greengrass& GetGreengrass() const{ return m_greengrass; }

    /**
     * <p>A gateway that runs on AWS IoT Greengrass.</p>
     */
    inline bool GreengrassHasBeenSet() const { return m_greengrassHasBeenSet; }

    /**
     * <p>A gateway that runs on AWS IoT Greengrass.</p>
     */
    inline void SetGreengrass(const Greengrass& value) { m_greengrassHasBeenSet = true; m_greengrass = value; }

    /**
     * <p>A gateway that runs on AWS IoT Greengrass.</p>
     */
    inline void SetGreengrass(Greengrass&& value) { m_greengrassHasBeenSet = true; m_greengrass = std::move(value); }

    /**
     * <p>A gateway that runs on AWS IoT Greengrass.</p>
     */
    inline GatewayPlatform& WithGreengrass(const Greengrass& value) { SetGreengrass(value); return *this;}

    /**
     * <p>A gateway that runs on AWS IoT Greengrass.</p>
     */
    inline GatewayPlatform& WithGreengrass(Greengrass&& value) { SetGreengrass(std::move(value)); return *this;}

  private:

    Greengrass m_greengrass;
    bool m_greengrassHasBeenSet;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
