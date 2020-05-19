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
namespace AugmentedAIRuntime
{
namespace Model
{

  /**
   * <p>Information about where the human output will be stored.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-a2i-runtime-2019-11-07/HumanLoopOutputContent">AWS
   * API Reference</a></p>
   */
  class AWS_AUGMENTEDAIRUNTIME_API HumanLoopOutputContent
  {
  public:
    HumanLoopOutputContent();
    HumanLoopOutputContent(Aws::Utils::Json::JsonView jsonValue);
    HumanLoopOutputContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The location of the Amazon S3 object where Amazon Augmented AI stores your
     * human loop output. The output is stored at the following location:
     * <code>s3://S3OutputPath/HumanLoopName/CreationTime/output.json</code>.</p>
     */
    inline const Aws::String& GetOutputS3Uri() const{ return m_outputS3Uri; }

    /**
     * <p>The location of the Amazon S3 object where Amazon Augmented AI stores your
     * human loop output. The output is stored at the following location:
     * <code>s3://S3OutputPath/HumanLoopName/CreationTime/output.json</code>.</p>
     */
    inline bool OutputS3UriHasBeenSet() const { return m_outputS3UriHasBeenSet; }

    /**
     * <p>The location of the Amazon S3 object where Amazon Augmented AI stores your
     * human loop output. The output is stored at the following location:
     * <code>s3://S3OutputPath/HumanLoopName/CreationTime/output.json</code>.</p>
     */
    inline void SetOutputS3Uri(const Aws::String& value) { m_outputS3UriHasBeenSet = true; m_outputS3Uri = value; }

    /**
     * <p>The location of the Amazon S3 object where Amazon Augmented AI stores your
     * human loop output. The output is stored at the following location:
     * <code>s3://S3OutputPath/HumanLoopName/CreationTime/output.json</code>.</p>
     */
    inline void SetOutputS3Uri(Aws::String&& value) { m_outputS3UriHasBeenSet = true; m_outputS3Uri = std::move(value); }

    /**
     * <p>The location of the Amazon S3 object where Amazon Augmented AI stores your
     * human loop output. The output is stored at the following location:
     * <code>s3://S3OutputPath/HumanLoopName/CreationTime/output.json</code>.</p>
     */
    inline void SetOutputS3Uri(const char* value) { m_outputS3UriHasBeenSet = true; m_outputS3Uri.assign(value); }

    /**
     * <p>The location of the Amazon S3 object where Amazon Augmented AI stores your
     * human loop output. The output is stored at the following location:
     * <code>s3://S3OutputPath/HumanLoopName/CreationTime/output.json</code>.</p>
     */
    inline HumanLoopOutputContent& WithOutputS3Uri(const Aws::String& value) { SetOutputS3Uri(value); return *this;}

    /**
     * <p>The location of the Amazon S3 object where Amazon Augmented AI stores your
     * human loop output. The output is stored at the following location:
     * <code>s3://S3OutputPath/HumanLoopName/CreationTime/output.json</code>.</p>
     */
    inline HumanLoopOutputContent& WithOutputS3Uri(Aws::String&& value) { SetOutputS3Uri(std::move(value)); return *this;}

    /**
     * <p>The location of the Amazon S3 object where Amazon Augmented AI stores your
     * human loop output. The output is stored at the following location:
     * <code>s3://S3OutputPath/HumanLoopName/CreationTime/output.json</code>.</p>
     */
    inline HumanLoopOutputContent& WithOutputS3Uri(const char* value) { SetOutputS3Uri(value); return *this;}

  private:

    Aws::String m_outputS3Uri;
    bool m_outputS3UriHasBeenSet;
  };

} // namespace Model
} // namespace AugmentedAIRuntime
} // namespace Aws
