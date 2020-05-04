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
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
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
namespace ServerlessApplicationRepository
{
namespace Model
{

  /**
   * <p>The client is sending more than the allowed number of requests per unit of
   * time.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/TooManyRequestsException">AWS
   * API Reference</a></p>
   */
  class AWS_SERVERLESSAPPLICATIONREPOSITORY_API TooManyRequestsException
  {
  public:
    TooManyRequestsException();
    TooManyRequestsException(Aws::Utils::Json::JsonView jsonValue);
    TooManyRequestsException& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>429</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>429</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>429</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>429</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>429</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>429</p>
     */
    inline TooManyRequestsException& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>429</p>
     */
    inline TooManyRequestsException& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>429</p>
     */
    inline TooManyRequestsException& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>The client is sending more than the allowed number of requests per unit of
     * time.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The client is sending more than the allowed number of requests per unit of
     * time.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The client is sending more than the allowed number of requests per unit of
     * time.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The client is sending more than the allowed number of requests per unit of
     * time.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The client is sending more than the allowed number of requests per unit of
     * time.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The client is sending more than the allowed number of requests per unit of
     * time.</p>
     */
    inline TooManyRequestsException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The client is sending more than the allowed number of requests per unit of
     * time.</p>
     */
    inline TooManyRequestsException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The client is sending more than the allowed number of requests per unit of
     * time.</p>
     */
    inline TooManyRequestsException& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
