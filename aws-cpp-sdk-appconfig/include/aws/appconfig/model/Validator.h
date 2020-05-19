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
#include <aws/appconfig/model/ValidatorType.h>
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
namespace AppConfig
{
namespace Model
{

  /**
   * <p>A validator provides a syntactic or semantic check to ensure the
   * configuration you want to deploy functions as intended. To validate your
   * application configuration data, you provide a schema or a Lambda function that
   * runs against the configuration. The configuration deployment or update can only
   * proceed when the configuration data is valid.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/Validator">AWS
   * API Reference</a></p>
   */
  class AWS_APPCONFIG_API Validator
  {
  public:
    Validator();
    Validator(Aws::Utils::Json::JsonView jsonValue);
    Validator& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>AppConfig supports validators of type <code>JSON_SCHEMA</code> and
     * <code>LAMBDA</code> </p>
     */
    inline const ValidatorType& GetType() const{ return m_type; }

    /**
     * <p>AppConfig supports validators of type <code>JSON_SCHEMA</code> and
     * <code>LAMBDA</code> </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>AppConfig supports validators of type <code>JSON_SCHEMA</code> and
     * <code>LAMBDA</code> </p>
     */
    inline void SetType(const ValidatorType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>AppConfig supports validators of type <code>JSON_SCHEMA</code> and
     * <code>LAMBDA</code> </p>
     */
    inline void SetType(ValidatorType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>AppConfig supports validators of type <code>JSON_SCHEMA</code> and
     * <code>LAMBDA</code> </p>
     */
    inline Validator& WithType(const ValidatorType& value) { SetType(value); return *this;}

    /**
     * <p>AppConfig supports validators of type <code>JSON_SCHEMA</code> and
     * <code>LAMBDA</code> </p>
     */
    inline Validator& WithType(ValidatorType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Either the JSON Schema content or an AWS Lambda function name.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>Either the JSON Schema content or an AWS Lambda function name.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>Either the JSON Schema content or an AWS Lambda function name.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>Either the JSON Schema content or an AWS Lambda function name.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>Either the JSON Schema content or an AWS Lambda function name.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>Either the JSON Schema content or an AWS Lambda function name.</p>
     */
    inline Validator& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>Either the JSON Schema content or an AWS Lambda function name.</p>
     */
    inline Validator& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>Either the JSON Schema content or an AWS Lambda function name.</p>
     */
    inline Validator& WithContent(const char* value) { SetContent(value); return *this;}

  private:

    ValidatorType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_content;
    bool m_contentHasBeenSet;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
