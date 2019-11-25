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
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/FieldToMatch.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <note> <p>This is the latest version of <b>AWS WAF</b>, named AWS WAFV2,
   * released in November, 2019. For information, including how to migrate your AWS
   * WAF resources from the prior release, see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. </p> </note> <p>Defines an association between Amazon
   * Kinesis Data Firehose destinations and a web ACL resource, for logging from AWS
   * WAF. As part of the association, you can specify parts of the standard logging
   * fields to keep out of the logs. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/LoggingConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_WAFV2_API LoggingConfiguration
  {
  public:
    LoggingConfiguration();
    LoggingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    LoggingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the web ACL that you want to associate with
     * <code>LogDestinationConfigs</code>.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the web ACL that you want to associate with
     * <code>LogDestinationConfigs</code>.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the web ACL that you want to associate with
     * <code>LogDestinationConfigs</code>.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the web ACL that you want to associate with
     * <code>LogDestinationConfigs</code>.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the web ACL that you want to associate with
     * <code>LogDestinationConfigs</code>.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the web ACL that you want to associate with
     * <code>LogDestinationConfigs</code>.</p>
     */
    inline LoggingConfiguration& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the web ACL that you want to associate with
     * <code>LogDestinationConfigs</code>.</p>
     */
    inline LoggingConfiguration& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the web ACL that you want to associate with
     * <code>LogDestinationConfigs</code>.</p>
     */
    inline LoggingConfiguration& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The Amazon Kinesis Data Firehose Amazon Resource Name (ARNs) that you want to
     * associate with the web ACL.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogDestinationConfigs() const{ return m_logDestinationConfigs; }

    /**
     * <p>The Amazon Kinesis Data Firehose Amazon Resource Name (ARNs) that you want to
     * associate with the web ACL.</p>
     */
    inline bool LogDestinationConfigsHasBeenSet() const { return m_logDestinationConfigsHasBeenSet; }

    /**
     * <p>The Amazon Kinesis Data Firehose Amazon Resource Name (ARNs) that you want to
     * associate with the web ACL.</p>
     */
    inline void SetLogDestinationConfigs(const Aws::Vector<Aws::String>& value) { m_logDestinationConfigsHasBeenSet = true; m_logDestinationConfigs = value; }

    /**
     * <p>The Amazon Kinesis Data Firehose Amazon Resource Name (ARNs) that you want to
     * associate with the web ACL.</p>
     */
    inline void SetLogDestinationConfigs(Aws::Vector<Aws::String>&& value) { m_logDestinationConfigsHasBeenSet = true; m_logDestinationConfigs = std::move(value); }

    /**
     * <p>The Amazon Kinesis Data Firehose Amazon Resource Name (ARNs) that you want to
     * associate with the web ACL.</p>
     */
    inline LoggingConfiguration& WithLogDestinationConfigs(const Aws::Vector<Aws::String>& value) { SetLogDestinationConfigs(value); return *this;}

    /**
     * <p>The Amazon Kinesis Data Firehose Amazon Resource Name (ARNs) that you want to
     * associate with the web ACL.</p>
     */
    inline LoggingConfiguration& WithLogDestinationConfigs(Aws::Vector<Aws::String>&& value) { SetLogDestinationConfigs(std::move(value)); return *this;}

    /**
     * <p>The Amazon Kinesis Data Firehose Amazon Resource Name (ARNs) that you want to
     * associate with the web ACL.</p>
     */
    inline LoggingConfiguration& AddLogDestinationConfigs(const Aws::String& value) { m_logDestinationConfigsHasBeenSet = true; m_logDestinationConfigs.push_back(value); return *this; }

    /**
     * <p>The Amazon Kinesis Data Firehose Amazon Resource Name (ARNs) that you want to
     * associate with the web ACL.</p>
     */
    inline LoggingConfiguration& AddLogDestinationConfigs(Aws::String&& value) { m_logDestinationConfigsHasBeenSet = true; m_logDestinationConfigs.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Kinesis Data Firehose Amazon Resource Name (ARNs) that you want to
     * associate with the web ACL.</p>
     */
    inline LoggingConfiguration& AddLogDestinationConfigs(const char* value) { m_logDestinationConfigsHasBeenSet = true; m_logDestinationConfigs.push_back(value); return *this; }


    /**
     * <p>The parts of the request that you want to keep out of the logs. For example,
     * if you redact the cookie field, the cookie field in the firehose will be
     * <code>xxx</code>. </p>
     */
    inline const Aws::Vector<FieldToMatch>& GetRedactedFields() const{ return m_redactedFields; }

    /**
     * <p>The parts of the request that you want to keep out of the logs. For example,
     * if you redact the cookie field, the cookie field in the firehose will be
     * <code>xxx</code>. </p>
     */
    inline bool RedactedFieldsHasBeenSet() const { return m_redactedFieldsHasBeenSet; }

    /**
     * <p>The parts of the request that you want to keep out of the logs. For example,
     * if you redact the cookie field, the cookie field in the firehose will be
     * <code>xxx</code>. </p>
     */
    inline void SetRedactedFields(const Aws::Vector<FieldToMatch>& value) { m_redactedFieldsHasBeenSet = true; m_redactedFields = value; }

    /**
     * <p>The parts of the request that you want to keep out of the logs. For example,
     * if you redact the cookie field, the cookie field in the firehose will be
     * <code>xxx</code>. </p>
     */
    inline void SetRedactedFields(Aws::Vector<FieldToMatch>&& value) { m_redactedFieldsHasBeenSet = true; m_redactedFields = std::move(value); }

    /**
     * <p>The parts of the request that you want to keep out of the logs. For example,
     * if you redact the cookie field, the cookie field in the firehose will be
     * <code>xxx</code>. </p>
     */
    inline LoggingConfiguration& WithRedactedFields(const Aws::Vector<FieldToMatch>& value) { SetRedactedFields(value); return *this;}

    /**
     * <p>The parts of the request that you want to keep out of the logs. For example,
     * if you redact the cookie field, the cookie field in the firehose will be
     * <code>xxx</code>. </p>
     */
    inline LoggingConfiguration& WithRedactedFields(Aws::Vector<FieldToMatch>&& value) { SetRedactedFields(std::move(value)); return *this;}

    /**
     * <p>The parts of the request that you want to keep out of the logs. For example,
     * if you redact the cookie field, the cookie field in the firehose will be
     * <code>xxx</code>. </p>
     */
    inline LoggingConfiguration& AddRedactedFields(const FieldToMatch& value) { m_redactedFieldsHasBeenSet = true; m_redactedFields.push_back(value); return *this; }

    /**
     * <p>The parts of the request that you want to keep out of the logs. For example,
     * if you redact the cookie field, the cookie field in the firehose will be
     * <code>xxx</code>. </p>
     */
    inline LoggingConfiguration& AddRedactedFields(FieldToMatch&& value) { m_redactedFieldsHasBeenSet = true; m_redactedFields.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;

    Aws::Vector<Aws::String> m_logDestinationConfigs;
    bool m_logDestinationConfigsHasBeenSet;

    Aws::Vector<FieldToMatch> m_redactedFields;
    bool m_redactedFieldsHasBeenSet;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
