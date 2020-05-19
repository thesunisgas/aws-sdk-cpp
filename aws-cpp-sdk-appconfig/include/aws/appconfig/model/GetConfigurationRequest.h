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
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/AppConfigRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace AppConfig
{
namespace Model
{

  /**
   */
  class AWS_APPCONFIG_API GetConfigurationRequest : public AppConfigRequest
  {
  public:
    GetConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetConfiguration"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The application to get.</p>
     */
    inline const Aws::String& GetApplication() const{ return m_application; }

    /**
     * <p>The application to get.</p>
     */
    inline bool ApplicationHasBeenSet() const { return m_applicationHasBeenSet; }

    /**
     * <p>The application to get.</p>
     */
    inline void SetApplication(const Aws::String& value) { m_applicationHasBeenSet = true; m_application = value; }

    /**
     * <p>The application to get.</p>
     */
    inline void SetApplication(Aws::String&& value) { m_applicationHasBeenSet = true; m_application = std::move(value); }

    /**
     * <p>The application to get.</p>
     */
    inline void SetApplication(const char* value) { m_applicationHasBeenSet = true; m_application.assign(value); }

    /**
     * <p>The application to get.</p>
     */
    inline GetConfigurationRequest& WithApplication(const Aws::String& value) { SetApplication(value); return *this;}

    /**
     * <p>The application to get.</p>
     */
    inline GetConfigurationRequest& WithApplication(Aws::String&& value) { SetApplication(std::move(value)); return *this;}

    /**
     * <p>The application to get.</p>
     */
    inline GetConfigurationRequest& WithApplication(const char* value) { SetApplication(value); return *this;}


    /**
     * <p>The environment to get.</p>
     */
    inline const Aws::String& GetEnvironment() const{ return m_environment; }

    /**
     * <p>The environment to get.</p>
     */
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }

    /**
     * <p>The environment to get.</p>
     */
    inline void SetEnvironment(const Aws::String& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>The environment to get.</p>
     */
    inline void SetEnvironment(Aws::String&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }

    /**
     * <p>The environment to get.</p>
     */
    inline void SetEnvironment(const char* value) { m_environmentHasBeenSet = true; m_environment.assign(value); }

    /**
     * <p>The environment to get.</p>
     */
    inline GetConfigurationRequest& WithEnvironment(const Aws::String& value) { SetEnvironment(value); return *this;}

    /**
     * <p>The environment to get.</p>
     */
    inline GetConfigurationRequest& WithEnvironment(Aws::String&& value) { SetEnvironment(std::move(value)); return *this;}

    /**
     * <p>The environment to get.</p>
     */
    inline GetConfigurationRequest& WithEnvironment(const char* value) { SetEnvironment(value); return *this;}


    /**
     * <p>The configuration to get.</p>
     */
    inline const Aws::String& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The configuration to get.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The configuration to get.</p>
     */
    inline void SetConfiguration(const Aws::String& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The configuration to get.</p>
     */
    inline void SetConfiguration(Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The configuration to get.</p>
     */
    inline void SetConfiguration(const char* value) { m_configurationHasBeenSet = true; m_configuration.assign(value); }

    /**
     * <p>The configuration to get.</p>
     */
    inline GetConfigurationRequest& WithConfiguration(const Aws::String& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The configuration to get.</p>
     */
    inline GetConfigurationRequest& WithConfiguration(Aws::String&& value) { SetConfiguration(std::move(value)); return *this;}

    /**
     * <p>The configuration to get.</p>
     */
    inline GetConfigurationRequest& WithConfiguration(const char* value) { SetConfiguration(value); return *this;}


    /**
     * <p>A unique ID to identify the client for the configuration. This ID enables
     * AppConfig to deploy the configuration in intervals, as defined in the deployment
     * strategy.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * <p>A unique ID to identify the client for the configuration. This ID enables
     * AppConfig to deploy the configuration in intervals, as defined in the deployment
     * strategy.</p>
     */
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }

    /**
     * <p>A unique ID to identify the client for the configuration. This ID enables
     * AppConfig to deploy the configuration in intervals, as defined in the deployment
     * strategy.</p>
     */
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * <p>A unique ID to identify the client for the configuration. This ID enables
     * AppConfig to deploy the configuration in intervals, as defined in the deployment
     * strategy.</p>
     */
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }

    /**
     * <p>A unique ID to identify the client for the configuration. This ID enables
     * AppConfig to deploy the configuration in intervals, as defined in the deployment
     * strategy.</p>
     */
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }

    /**
     * <p>A unique ID to identify the client for the configuration. This ID enables
     * AppConfig to deploy the configuration in intervals, as defined in the deployment
     * strategy.</p>
     */
    inline GetConfigurationRequest& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>A unique ID to identify the client for the configuration. This ID enables
     * AppConfig to deploy the configuration in intervals, as defined in the deployment
     * strategy.</p>
     */
    inline GetConfigurationRequest& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * <p>A unique ID to identify the client for the configuration. This ID enables
     * AppConfig to deploy the configuration in intervals, as defined in the deployment
     * strategy.</p>
     */
    inline GetConfigurationRequest& WithClientId(const char* value) { SetClientId(value); return *this;}


    /**
     * <p>The configuration version returned in the most recent GetConfiguration
     * response.</p>
     */
    inline const Aws::String& GetClientConfigurationVersion() const{ return m_clientConfigurationVersion; }

    /**
     * <p>The configuration version returned in the most recent GetConfiguration
     * response.</p>
     */
    inline bool ClientConfigurationVersionHasBeenSet() const { return m_clientConfigurationVersionHasBeenSet; }

    /**
     * <p>The configuration version returned in the most recent GetConfiguration
     * response.</p>
     */
    inline void SetClientConfigurationVersion(const Aws::String& value) { m_clientConfigurationVersionHasBeenSet = true; m_clientConfigurationVersion = value; }

    /**
     * <p>The configuration version returned in the most recent GetConfiguration
     * response.</p>
     */
    inline void SetClientConfigurationVersion(Aws::String&& value) { m_clientConfigurationVersionHasBeenSet = true; m_clientConfigurationVersion = std::move(value); }

    /**
     * <p>The configuration version returned in the most recent GetConfiguration
     * response.</p>
     */
    inline void SetClientConfigurationVersion(const char* value) { m_clientConfigurationVersionHasBeenSet = true; m_clientConfigurationVersion.assign(value); }

    /**
     * <p>The configuration version returned in the most recent GetConfiguration
     * response.</p>
     */
    inline GetConfigurationRequest& WithClientConfigurationVersion(const Aws::String& value) { SetClientConfigurationVersion(value); return *this;}

    /**
     * <p>The configuration version returned in the most recent GetConfiguration
     * response.</p>
     */
    inline GetConfigurationRequest& WithClientConfigurationVersion(Aws::String&& value) { SetClientConfigurationVersion(std::move(value)); return *this;}

    /**
     * <p>The configuration version returned in the most recent GetConfiguration
     * response.</p>
     */
    inline GetConfigurationRequest& WithClientConfigurationVersion(const char* value) { SetClientConfigurationVersion(value); return *this;}

  private:

    Aws::String m_application;
    bool m_applicationHasBeenSet;

    Aws::String m_environment;
    bool m_environmentHasBeenSet;

    Aws::String m_configuration;
    bool m_configurationHasBeenSet;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet;

    Aws::String m_clientConfigurationVersion;
    bool m_clientConfigurationVersionHasBeenSet;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
