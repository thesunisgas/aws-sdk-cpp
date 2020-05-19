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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies which version of a message template to use as the active version of
   * the template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/TemplateActiveVersionRequest">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API TemplateActiveVersionRequest
  {
  public:
    TemplateActiveVersionRequest();
    TemplateActiveVersionRequest(Aws::Utils::Json::JsonView jsonValue);
    TemplateActiveVersionRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the version of the message template to use as the
     * active version of the template. If specified, this value must match the
     * identifier for an existing template version. To retrieve a list of versions and
     * version identifiers for a template, use the <link 
     * linkend="templates-template-name-template-type-versions">Template
     * Versions</link> resource.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The unique identifier for the version of the message template to use as the
     * active version of the template. If specified, this value must match the
     * identifier for an existing template version. To retrieve a list of versions and
     * version identifiers for a template, use the <link 
     * linkend="templates-template-name-template-type-versions">Template
     * Versions</link> resource.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The unique identifier for the version of the message template to use as the
     * active version of the template. If specified, this value must match the
     * identifier for an existing template version. To retrieve a list of versions and
     * version identifiers for a template, use the <link 
     * linkend="templates-template-name-template-type-versions">Template
     * Versions</link> resource.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The unique identifier for the version of the message template to use as the
     * active version of the template. If specified, this value must match the
     * identifier for an existing template version. To retrieve a list of versions and
     * version identifiers for a template, use the <link 
     * linkend="templates-template-name-template-type-versions">Template
     * Versions</link> resource.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The unique identifier for the version of the message template to use as the
     * active version of the template. If specified, this value must match the
     * identifier for an existing template version. To retrieve a list of versions and
     * version identifiers for a template, use the <link 
     * linkend="templates-template-name-template-type-versions">Template
     * Versions</link> resource.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The unique identifier for the version of the message template to use as the
     * active version of the template. If specified, this value must match the
     * identifier for an existing template version. To retrieve a list of versions and
     * version identifiers for a template, use the <link 
     * linkend="templates-template-name-template-type-versions">Template
     * Versions</link> resource.</p>
     */
    inline TemplateActiveVersionRequest& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The unique identifier for the version of the message template to use as the
     * active version of the template. If specified, this value must match the
     * identifier for an existing template version. To retrieve a list of versions and
     * version identifiers for a template, use the <link 
     * linkend="templates-template-name-template-type-versions">Template
     * Versions</link> resource.</p>
     */
    inline TemplateActiveVersionRequest& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the version of the message template to use as the
     * active version of the template. If specified, this value must match the
     * identifier for an existing template version. To retrieve a list of versions and
     * version identifiers for a template, use the <link 
     * linkend="templates-template-name-template-type-versions">Template
     * Versions</link> resource.</p>
     */
    inline TemplateActiveVersionRequest& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_version;
    bool m_versionHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
