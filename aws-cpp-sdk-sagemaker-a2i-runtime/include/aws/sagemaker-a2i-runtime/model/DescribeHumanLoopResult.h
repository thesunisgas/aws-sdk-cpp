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
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntime_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-a2i-runtime/model/HumanLoopStatus.h>
#include <aws/sagemaker-a2i-runtime/model/HumanLoopInputContent.h>
#include <aws/sagemaker-a2i-runtime/model/HumanLoopOutputContent.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AugmentedAIRuntime
{
namespace Model
{
  class AWS_AUGMENTEDAIRUNTIME_API DescribeHumanLoopResult
  {
  public:
    DescribeHumanLoopResult();
    DescribeHumanLoopResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeHumanLoopResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The timestamp when Amazon Augmented AI created the human loop.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * <p>The timestamp when Amazon Augmented AI created the human loop.</p>
     */
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestamp = value; }

    /**
     * <p>The timestamp when Amazon Augmented AI created the human loop.</p>
     */
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestamp = std::move(value); }

    /**
     * <p>The timestamp when Amazon Augmented AI created the human loop.</p>
     */
    inline DescribeHumanLoopResult& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}

    /**
     * <p>The timestamp when Amazon Augmented AI created the human loop.</p>
     */
    inline DescribeHumanLoopResult& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}


    /**
     * <p>The reason why a human loop has failed. The failure reason is returned when
     * the human loop status is <code>Failed</code>.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>The reason why a human loop has failed. The failure reason is returned when
     * the human loop status is <code>Failed</code>.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }

    /**
     * <p>The reason why a human loop has failed. The failure reason is returned when
     * the human loop status is <code>Failed</code>.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }

    /**
     * <p>The reason why a human loop has failed. The failure reason is returned when
     * the human loop status is <code>Failed</code>.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }

    /**
     * <p>The reason why a human loop has failed. The failure reason is returned when
     * the human loop status is <code>Failed</code>.</p>
     */
    inline DescribeHumanLoopResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>The reason why a human loop has failed. The failure reason is returned when
     * the human loop status is <code>Failed</code>.</p>
     */
    inline DescribeHumanLoopResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>The reason why a human loop has failed. The failure reason is returned when
     * the human loop status is <code>Failed</code>.</p>
     */
    inline DescribeHumanLoopResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>A failure code denoting a specific type of failure.</p>
     */
    inline const Aws::String& GetFailureCode() const{ return m_failureCode; }

    /**
     * <p>A failure code denoting a specific type of failure.</p>
     */
    inline void SetFailureCode(const Aws::String& value) { m_failureCode = value; }

    /**
     * <p>A failure code denoting a specific type of failure.</p>
     */
    inline void SetFailureCode(Aws::String&& value) { m_failureCode = std::move(value); }

    /**
     * <p>A failure code denoting a specific type of failure.</p>
     */
    inline void SetFailureCode(const char* value) { m_failureCode.assign(value); }

    /**
     * <p>A failure code denoting a specific type of failure.</p>
     */
    inline DescribeHumanLoopResult& WithFailureCode(const Aws::String& value) { SetFailureCode(value); return *this;}

    /**
     * <p>A failure code denoting a specific type of failure.</p>
     */
    inline DescribeHumanLoopResult& WithFailureCode(Aws::String&& value) { SetFailureCode(std::move(value)); return *this;}

    /**
     * <p>A failure code denoting a specific type of failure.</p>
     */
    inline DescribeHumanLoopResult& WithFailureCode(const char* value) { SetFailureCode(value); return *this;}


    /**
     * <p>The status of the human loop. Valid values:</p>
     */
    inline const HumanLoopStatus& GetHumanLoopStatus() const{ return m_humanLoopStatus; }

    /**
     * <p>The status of the human loop. Valid values:</p>
     */
    inline void SetHumanLoopStatus(const HumanLoopStatus& value) { m_humanLoopStatus = value; }

    /**
     * <p>The status of the human loop. Valid values:</p>
     */
    inline void SetHumanLoopStatus(HumanLoopStatus&& value) { m_humanLoopStatus = std::move(value); }

    /**
     * <p>The status of the human loop. Valid values:</p>
     */
    inline DescribeHumanLoopResult& WithHumanLoopStatus(const HumanLoopStatus& value) { SetHumanLoopStatus(value); return *this;}

    /**
     * <p>The status of the human loop. Valid values:</p>
     */
    inline DescribeHumanLoopResult& WithHumanLoopStatus(HumanLoopStatus&& value) { SetHumanLoopStatus(std::move(value)); return *this;}


    /**
     * <p>The name of the human loop.</p>
     */
    inline const Aws::String& GetHumanLoopName() const{ return m_humanLoopName; }

    /**
     * <p>The name of the human loop.</p>
     */
    inline void SetHumanLoopName(const Aws::String& value) { m_humanLoopName = value; }

    /**
     * <p>The name of the human loop.</p>
     */
    inline void SetHumanLoopName(Aws::String&& value) { m_humanLoopName = std::move(value); }

    /**
     * <p>The name of the human loop.</p>
     */
    inline void SetHumanLoopName(const char* value) { m_humanLoopName.assign(value); }

    /**
     * <p>The name of the human loop.</p>
     */
    inline DescribeHumanLoopResult& WithHumanLoopName(const Aws::String& value) { SetHumanLoopName(value); return *this;}

    /**
     * <p>The name of the human loop.</p>
     */
    inline DescribeHumanLoopResult& WithHumanLoopName(Aws::String&& value) { SetHumanLoopName(std::move(value)); return *this;}

    /**
     * <p>The name of the human loop.</p>
     */
    inline DescribeHumanLoopResult& WithHumanLoopName(const char* value) { SetHumanLoopName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the human loop.</p>
     */
    inline const Aws::String& GetHumanLoopArn() const{ return m_humanLoopArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the human loop.</p>
     */
    inline void SetHumanLoopArn(const Aws::String& value) { m_humanLoopArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the human loop.</p>
     */
    inline void SetHumanLoopArn(Aws::String&& value) { m_humanLoopArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the human loop.</p>
     */
    inline void SetHumanLoopArn(const char* value) { m_humanLoopArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the human loop.</p>
     */
    inline DescribeHumanLoopResult& WithHumanLoopArn(const Aws::String& value) { SetHumanLoopArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the human loop.</p>
     */
    inline DescribeHumanLoopResult& WithHumanLoopArn(Aws::String&& value) { SetHumanLoopArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the human loop.</p>
     */
    inline DescribeHumanLoopResult& WithHumanLoopArn(const char* value) { SetHumanLoopArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition.</p>
     */
    inline const Aws::String& GetFlowDefinitionArn() const{ return m_flowDefinitionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition.</p>
     */
    inline void SetFlowDefinitionArn(const Aws::String& value) { m_flowDefinitionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition.</p>
     */
    inline void SetFlowDefinitionArn(Aws::String&& value) { m_flowDefinitionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition.</p>
     */
    inline void SetFlowDefinitionArn(const char* value) { m_flowDefinitionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition.</p>
     */
    inline DescribeHumanLoopResult& WithFlowDefinitionArn(const Aws::String& value) { SetFlowDefinitionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition.</p>
     */
    inline DescribeHumanLoopResult& WithFlowDefinitionArn(Aws::String&& value) { SetFlowDefinitionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition.</p>
     */
    inline DescribeHumanLoopResult& WithFlowDefinitionArn(const char* value) { SetFlowDefinitionArn(value); return *this;}


    /**
     * <p>An object containing information about the human loop input.</p>
     */
    inline const HumanLoopInputContent& GetHumanLoopInput() const{ return m_humanLoopInput; }

    /**
     * <p>An object containing information about the human loop input.</p>
     */
    inline void SetHumanLoopInput(const HumanLoopInputContent& value) { m_humanLoopInput = value; }

    /**
     * <p>An object containing information about the human loop input.</p>
     */
    inline void SetHumanLoopInput(HumanLoopInputContent&& value) { m_humanLoopInput = std::move(value); }

    /**
     * <p>An object containing information about the human loop input.</p>
     */
    inline DescribeHumanLoopResult& WithHumanLoopInput(const HumanLoopInputContent& value) { SetHumanLoopInput(value); return *this;}

    /**
     * <p>An object containing information about the human loop input.</p>
     */
    inline DescribeHumanLoopResult& WithHumanLoopInput(HumanLoopInputContent&& value) { SetHumanLoopInput(std::move(value)); return *this;}


    /**
     * <p>An object containing information about the output of the human loop.</p>
     */
    inline const HumanLoopOutputContent& GetHumanLoopOutput() const{ return m_humanLoopOutput; }

    /**
     * <p>An object containing information about the output of the human loop.</p>
     */
    inline void SetHumanLoopOutput(const HumanLoopOutputContent& value) { m_humanLoopOutput = value; }

    /**
     * <p>An object containing information about the output of the human loop.</p>
     */
    inline void SetHumanLoopOutput(HumanLoopOutputContent&& value) { m_humanLoopOutput = std::move(value); }

    /**
     * <p>An object containing information about the output of the human loop.</p>
     */
    inline DescribeHumanLoopResult& WithHumanLoopOutput(const HumanLoopOutputContent& value) { SetHumanLoopOutput(value); return *this;}

    /**
     * <p>An object containing information about the output of the human loop.</p>
     */
    inline DescribeHumanLoopResult& WithHumanLoopOutput(HumanLoopOutputContent&& value) { SetHumanLoopOutput(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_creationTimestamp;

    Aws::String m_failureReason;

    Aws::String m_failureCode;

    HumanLoopStatus m_humanLoopStatus;

    Aws::String m_humanLoopName;

    Aws::String m_humanLoopArn;

    Aws::String m_flowDefinitionArn;

    HumanLoopInputContent m_humanLoopInput;

    HumanLoopOutputContent m_humanLoopOutput;
  };

} // namespace Model
} // namespace AugmentedAIRuntime
} // namespace Aws
