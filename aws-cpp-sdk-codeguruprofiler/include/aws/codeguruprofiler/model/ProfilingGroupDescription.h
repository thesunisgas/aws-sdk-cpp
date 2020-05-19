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
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/codeguruprofiler/model/AgentOrchestrationConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codeguruprofiler/model/ProfilingStatus.h>
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
namespace CodeGuruProfiler
{
namespace Model
{

  /**
   * <p>The description of a profiling group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/ProfilingGroupDescription">AWS
   * API Reference</a></p>
   */
  class AWS_CODEGURUPROFILER_API ProfilingGroupDescription
  {
  public:
    ProfilingGroupDescription();
    ProfilingGroupDescription(Aws::Utils::Json::JsonView jsonValue);
    ProfilingGroupDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const AgentOrchestrationConfig& GetAgentOrchestrationConfig() const{ return m_agentOrchestrationConfig; }

    
    inline bool AgentOrchestrationConfigHasBeenSet() const { return m_agentOrchestrationConfigHasBeenSet; }

    
    inline void SetAgentOrchestrationConfig(const AgentOrchestrationConfig& value) { m_agentOrchestrationConfigHasBeenSet = true; m_agentOrchestrationConfig = value; }

    
    inline void SetAgentOrchestrationConfig(AgentOrchestrationConfig&& value) { m_agentOrchestrationConfigHasBeenSet = true; m_agentOrchestrationConfig = std::move(value); }

    
    inline ProfilingGroupDescription& WithAgentOrchestrationConfig(const AgentOrchestrationConfig& value) { SetAgentOrchestrationConfig(value); return *this;}

    
    inline ProfilingGroupDescription& WithAgentOrchestrationConfig(AgentOrchestrationConfig&& value) { SetAgentOrchestrationConfig(std::move(value)); return *this;}


    
    inline const Aws::String& GetArn() const{ return m_arn; }

    
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    
    inline ProfilingGroupDescription& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    
    inline ProfilingGroupDescription& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    
    inline ProfilingGroupDescription& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The timestamp of when the profiling group was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp of when the profiling group was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp of when the profiling group was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp of when the profiling group was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp of when the profiling group was created.</p>
     */
    inline ProfilingGroupDescription& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the profiling group was created.</p>
     */
    inline ProfilingGroupDescription& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline ProfilingGroupDescription& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline ProfilingGroupDescription& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline ProfilingGroupDescription& WithName(const char* value) { SetName(value); return *this;}


    
    inline const ProfilingStatus& GetProfilingStatus() const{ return m_profilingStatus; }

    
    inline bool ProfilingStatusHasBeenSet() const { return m_profilingStatusHasBeenSet; }

    
    inline void SetProfilingStatus(const ProfilingStatus& value) { m_profilingStatusHasBeenSet = true; m_profilingStatus = value; }

    
    inline void SetProfilingStatus(ProfilingStatus&& value) { m_profilingStatusHasBeenSet = true; m_profilingStatus = std::move(value); }

    
    inline ProfilingGroupDescription& WithProfilingStatus(const ProfilingStatus& value) { SetProfilingStatus(value); return *this;}

    
    inline ProfilingGroupDescription& WithProfilingStatus(ProfilingStatus&& value) { SetProfilingStatus(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when the profiling group was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp of when the profiling group was last updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The timestamp of when the profiling group was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The timestamp of when the profiling group was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp of when the profiling group was last updated.</p>
     */
    inline ProfilingGroupDescription& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the profiling group was last updated.</p>
     */
    inline ProfilingGroupDescription& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    AgentOrchestrationConfig m_agentOrchestrationConfig;
    bool m_agentOrchestrationConfigHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    ProfilingStatus m_profilingStatus;
    bool m_profilingStatusHasBeenSet;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
