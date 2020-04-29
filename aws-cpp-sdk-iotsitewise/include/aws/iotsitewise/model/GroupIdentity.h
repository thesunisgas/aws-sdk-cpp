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
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains information for a group identity in an access policy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/GroupIdentity">AWS
   * API Reference</a></p>
   */
  class AWS_IOTSITEWISE_API GroupIdentity
  {
  public:
    GroupIdentity();
    GroupIdentity(Aws::Utils::Json::JsonView jsonValue);
    GroupIdentity& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The AWS SSO ID of the group.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The AWS SSO ID of the group.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The AWS SSO ID of the group.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The AWS SSO ID of the group.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The AWS SSO ID of the group.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The AWS SSO ID of the group.</p>
     */
    inline GroupIdentity& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The AWS SSO ID of the group.</p>
     */
    inline GroupIdentity& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The AWS SSO ID of the group.</p>
     */
    inline GroupIdentity& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
