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
#include <aws/medialive/model/MultiplexProgramServiceDescriptor.h>
#include <aws/medialive/model/MultiplexVideoSettings.h>
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
   * Multiplex Program settings configuration.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MultiplexProgramSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API MultiplexProgramSettings
  {
  public:
    MultiplexProgramSettings();
    MultiplexProgramSettings(Aws::Utils::Json::JsonView jsonValue);
    MultiplexProgramSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Unique program number.
     */
    inline int GetProgramNumber() const{ return m_programNumber; }

    /**
     * Unique program number.
     */
    inline bool ProgramNumberHasBeenSet() const { return m_programNumberHasBeenSet; }

    /**
     * Unique program number.
     */
    inline void SetProgramNumber(int value) { m_programNumberHasBeenSet = true; m_programNumber = value; }

    /**
     * Unique program number.
     */
    inline MultiplexProgramSettings& WithProgramNumber(int value) { SetProgramNumber(value); return *this;}


    /**
     * Transport stream service descriptor configuration for the Multiplex program.
     */
    inline const MultiplexProgramServiceDescriptor& GetServiceDescriptor() const{ return m_serviceDescriptor; }

    /**
     * Transport stream service descriptor configuration for the Multiplex program.
     */
    inline bool ServiceDescriptorHasBeenSet() const { return m_serviceDescriptorHasBeenSet; }

    /**
     * Transport stream service descriptor configuration for the Multiplex program.
     */
    inline void SetServiceDescriptor(const MultiplexProgramServiceDescriptor& value) { m_serviceDescriptorHasBeenSet = true; m_serviceDescriptor = value; }

    /**
     * Transport stream service descriptor configuration for the Multiplex program.
     */
    inline void SetServiceDescriptor(MultiplexProgramServiceDescriptor&& value) { m_serviceDescriptorHasBeenSet = true; m_serviceDescriptor = std::move(value); }

    /**
     * Transport stream service descriptor configuration for the Multiplex program.
     */
    inline MultiplexProgramSettings& WithServiceDescriptor(const MultiplexProgramServiceDescriptor& value) { SetServiceDescriptor(value); return *this;}

    /**
     * Transport stream service descriptor configuration for the Multiplex program.
     */
    inline MultiplexProgramSettings& WithServiceDescriptor(MultiplexProgramServiceDescriptor&& value) { SetServiceDescriptor(std::move(value)); return *this;}


    /**
     * Program video settings configuration.
     */
    inline const MultiplexVideoSettings& GetVideoSettings() const{ return m_videoSettings; }

    /**
     * Program video settings configuration.
     */
    inline bool VideoSettingsHasBeenSet() const { return m_videoSettingsHasBeenSet; }

    /**
     * Program video settings configuration.
     */
    inline void SetVideoSettings(const MultiplexVideoSettings& value) { m_videoSettingsHasBeenSet = true; m_videoSettings = value; }

    /**
     * Program video settings configuration.
     */
    inline void SetVideoSettings(MultiplexVideoSettings&& value) { m_videoSettingsHasBeenSet = true; m_videoSettings = std::move(value); }

    /**
     * Program video settings configuration.
     */
    inline MultiplexProgramSettings& WithVideoSettings(const MultiplexVideoSettings& value) { SetVideoSettings(value); return *this;}

    /**
     * Program video settings configuration.
     */
    inline MultiplexProgramSettings& WithVideoSettings(MultiplexVideoSettings&& value) { SetVideoSettings(std::move(value)); return *this;}

  private:

    int m_programNumber;
    bool m_programNumberHasBeenSet;

    MultiplexProgramServiceDescriptor m_serviceDescriptor;
    bool m_serviceDescriptorHasBeenSet;

    MultiplexVideoSettings m_videoSettings;
    bool m_videoSettingsHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
