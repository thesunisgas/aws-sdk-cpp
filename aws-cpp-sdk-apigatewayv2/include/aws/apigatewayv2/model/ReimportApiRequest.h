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
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/ApiGatewayV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ApiGatewayV2
{
namespace Model
{

  /**
   * <p></p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/ReimportApiRequest">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAYV2_API ReimportApiRequest : public ApiGatewayV2Request
  {
  public:
    ReimportApiRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ReimportApi"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The API identifier.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }

    /**
     * <p>The API identifier.</p>
     */
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }

    /**
     * <p>The API identifier.</p>
     */
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }

    /**
     * <p>The API identifier.</p>
     */
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }

    /**
     * <p>The API identifier.</p>
     */
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }

    /**
     * <p>The API identifier.</p>
     */
    inline ReimportApiRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}

    /**
     * <p>The API identifier.</p>
     */
    inline ReimportApiRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}

    /**
     * <p>The API identifier.</p>
     */
    inline ReimportApiRequest& WithApiId(const char* value) { SetApiId(value); return *this;}


    /**
     * <p>Represents the base path of the imported API. Supported only for HTTP
     * APIs.</p>
     */
    inline const Aws::String& GetBasepath() const{ return m_basepath; }

    /**
     * <p>Represents the base path of the imported API. Supported only for HTTP
     * APIs.</p>
     */
    inline bool BasepathHasBeenSet() const { return m_basepathHasBeenSet; }

    /**
     * <p>Represents the base path of the imported API. Supported only for HTTP
     * APIs.</p>
     */
    inline void SetBasepath(const Aws::String& value) { m_basepathHasBeenSet = true; m_basepath = value; }

    /**
     * <p>Represents the base path of the imported API. Supported only for HTTP
     * APIs.</p>
     */
    inline void SetBasepath(Aws::String&& value) { m_basepathHasBeenSet = true; m_basepath = std::move(value); }

    /**
     * <p>Represents the base path of the imported API. Supported only for HTTP
     * APIs.</p>
     */
    inline void SetBasepath(const char* value) { m_basepathHasBeenSet = true; m_basepath.assign(value); }

    /**
     * <p>Represents the base path of the imported API. Supported only for HTTP
     * APIs.</p>
     */
    inline ReimportApiRequest& WithBasepath(const Aws::String& value) { SetBasepath(value); return *this;}

    /**
     * <p>Represents the base path of the imported API. Supported only for HTTP
     * APIs.</p>
     */
    inline ReimportApiRequest& WithBasepath(Aws::String&& value) { SetBasepath(std::move(value)); return *this;}

    /**
     * <p>Represents the base path of the imported API. Supported only for HTTP
     * APIs.</p>
     */
    inline ReimportApiRequest& WithBasepath(const char* value) { SetBasepath(value); return *this;}


    /**
     * <p>Specifies whether to rollback the API creation (true) or not (false) when a
     * warning is encountered. The default value is false.</p>
     */
    inline bool GetFailOnWarnings() const{ return m_failOnWarnings; }

    /**
     * <p>Specifies whether to rollback the API creation (true) or not (false) when a
     * warning is encountered. The default value is false.</p>
     */
    inline bool FailOnWarningsHasBeenSet() const { return m_failOnWarningsHasBeenSet; }

    /**
     * <p>Specifies whether to rollback the API creation (true) or not (false) when a
     * warning is encountered. The default value is false.</p>
     */
    inline void SetFailOnWarnings(bool value) { m_failOnWarningsHasBeenSet = true; m_failOnWarnings = value; }

    /**
     * <p>Specifies whether to rollback the API creation (true) or not (false) when a
     * warning is encountered. The default value is false.</p>
     */
    inline ReimportApiRequest& WithFailOnWarnings(bool value) { SetFailOnWarnings(value); return *this;}


    /**
     * <p>The OpenAPI definition. Supported only for HTTP APIs.</p>
     */
    inline const Aws::String& GetRequestBody() const{ return m_requestBody; }

    /**
     * <p>The OpenAPI definition. Supported only for HTTP APIs.</p>
     */
    inline bool RequestBodyHasBeenSet() const { return m_requestBodyHasBeenSet; }

    /**
     * <p>The OpenAPI definition. Supported only for HTTP APIs.</p>
     */
    inline void SetRequestBody(const Aws::String& value) { m_requestBodyHasBeenSet = true; m_requestBody = value; }

    /**
     * <p>The OpenAPI definition. Supported only for HTTP APIs.</p>
     */
    inline void SetRequestBody(Aws::String&& value) { m_requestBodyHasBeenSet = true; m_requestBody = std::move(value); }

    /**
     * <p>The OpenAPI definition. Supported only for HTTP APIs.</p>
     */
    inline void SetRequestBody(const char* value) { m_requestBodyHasBeenSet = true; m_requestBody.assign(value); }

    /**
     * <p>The OpenAPI definition. Supported only for HTTP APIs.</p>
     */
    inline ReimportApiRequest& WithRequestBody(const Aws::String& value) { SetRequestBody(value); return *this;}

    /**
     * <p>The OpenAPI definition. Supported only for HTTP APIs.</p>
     */
    inline ReimportApiRequest& WithRequestBody(Aws::String&& value) { SetRequestBody(std::move(value)); return *this;}

    /**
     * <p>The OpenAPI definition. Supported only for HTTP APIs.</p>
     */
    inline ReimportApiRequest& WithRequestBody(const char* value) { SetRequestBody(value); return *this;}

  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet;

    Aws::String m_basepath;
    bool m_basepathHasBeenSet;

    bool m_failOnWarnings;
    bool m_failOnWarningsHasBeenSet;

    Aws::String m_requestBody;
    bool m_requestBodyHasBeenSet;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
