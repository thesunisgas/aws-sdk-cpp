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
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/GrpcRouteAction.h>
#include <aws/appmesh/model/GrpcRouteMatch.h>
#include <aws/appmesh/model/GrpcRetryPolicy.h>
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
namespace AppMesh
{
namespace Model
{

  /**
   * <p>An object that represents a gRPC route type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/GrpcRoute">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API GrpcRoute
  {
  public:
    GrpcRoute();
    GrpcRoute(Aws::Utils::Json::JsonView jsonValue);
    GrpcRoute& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that represents the action to take if a match is determined.</p>
     */
    inline const GrpcRouteAction& GetAction() const{ return m_action; }

    /**
     * <p>An object that represents the action to take if a match is determined.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>An object that represents the action to take if a match is determined.</p>
     */
    inline void SetAction(const GrpcRouteAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>An object that represents the action to take if a match is determined.</p>
     */
    inline void SetAction(GrpcRouteAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>An object that represents the action to take if a match is determined.</p>
     */
    inline GrpcRoute& WithAction(const GrpcRouteAction& value) { SetAction(value); return *this;}

    /**
     * <p>An object that represents the action to take if a match is determined.</p>
     */
    inline GrpcRoute& WithAction(GrpcRouteAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>An object that represents the criteria for determining a request match.</p>
     */
    inline const GrpcRouteMatch& GetMatch() const{ return m_match; }

    /**
     * <p>An object that represents the criteria for determining a request match.</p>
     */
    inline bool MatchHasBeenSet() const { return m_matchHasBeenSet; }

    /**
     * <p>An object that represents the criteria for determining a request match.</p>
     */
    inline void SetMatch(const GrpcRouteMatch& value) { m_matchHasBeenSet = true; m_match = value; }

    /**
     * <p>An object that represents the criteria for determining a request match.</p>
     */
    inline void SetMatch(GrpcRouteMatch&& value) { m_matchHasBeenSet = true; m_match = std::move(value); }

    /**
     * <p>An object that represents the criteria for determining a request match.</p>
     */
    inline GrpcRoute& WithMatch(const GrpcRouteMatch& value) { SetMatch(value); return *this;}

    /**
     * <p>An object that represents the criteria for determining a request match.</p>
     */
    inline GrpcRoute& WithMatch(GrpcRouteMatch&& value) { SetMatch(std::move(value)); return *this;}


    /**
     * <p>An object that represents a retry policy.</p>
     */
    inline const GrpcRetryPolicy& GetRetryPolicy() const{ return m_retryPolicy; }

    /**
     * <p>An object that represents a retry policy.</p>
     */
    inline bool RetryPolicyHasBeenSet() const { return m_retryPolicyHasBeenSet; }

    /**
     * <p>An object that represents a retry policy.</p>
     */
    inline void SetRetryPolicy(const GrpcRetryPolicy& value) { m_retryPolicyHasBeenSet = true; m_retryPolicy = value; }

    /**
     * <p>An object that represents a retry policy.</p>
     */
    inline void SetRetryPolicy(GrpcRetryPolicy&& value) { m_retryPolicyHasBeenSet = true; m_retryPolicy = std::move(value); }

    /**
     * <p>An object that represents a retry policy.</p>
     */
    inline GrpcRoute& WithRetryPolicy(const GrpcRetryPolicy& value) { SetRetryPolicy(value); return *this;}

    /**
     * <p>An object that represents a retry policy.</p>
     */
    inline GrpcRoute& WithRetryPolicy(GrpcRetryPolicy&& value) { SetRetryPolicy(std::move(value)); return *this;}

  private:

    GrpcRouteAction m_action;
    bool m_actionHasBeenSet;

    GrpcRouteMatch m_match;
    bool m_matchHasBeenSet;

    GrpcRetryPolicy m_retryPolicy;
    bool m_retryPolicyHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
