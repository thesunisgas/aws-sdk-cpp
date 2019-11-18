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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/ResourceDataSyncOrganizationalUnit.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Information about the AwsOrganizationsSource resource data sync source. A
   * sync source of this type can synchronize data from AWS Organizations or, if an
   * AWS Organization is not present, from multiple AWS Regions.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ResourceDataSyncAwsOrganizationsSource">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API ResourceDataSyncAwsOrganizationsSource
  {
  public:
    ResourceDataSyncAwsOrganizationsSource();
    ResourceDataSyncAwsOrganizationsSource(Aws::Utils::Json::JsonView jsonValue);
    ResourceDataSyncAwsOrganizationsSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>If an AWS Organization is present, this is either
     * <code>OrganizationalUnits</code> or <code>EntireOrganization</code>. For
     * <code>OrganizationalUnits</code>, the data is aggregated from a set of
     * organization units. For <code>EntireOrganization</code>, the data is aggregated
     * from the entire AWS Organization. </p>
     */
    inline const Aws::String& GetOrganizationSourceType() const{ return m_organizationSourceType; }

    /**
     * <p>If an AWS Organization is present, this is either
     * <code>OrganizationalUnits</code> or <code>EntireOrganization</code>. For
     * <code>OrganizationalUnits</code>, the data is aggregated from a set of
     * organization units. For <code>EntireOrganization</code>, the data is aggregated
     * from the entire AWS Organization. </p>
     */
    inline bool OrganizationSourceTypeHasBeenSet() const { return m_organizationSourceTypeHasBeenSet; }

    /**
     * <p>If an AWS Organization is present, this is either
     * <code>OrganizationalUnits</code> or <code>EntireOrganization</code>. For
     * <code>OrganizationalUnits</code>, the data is aggregated from a set of
     * organization units. For <code>EntireOrganization</code>, the data is aggregated
     * from the entire AWS Organization. </p>
     */
    inline void SetOrganizationSourceType(const Aws::String& value) { m_organizationSourceTypeHasBeenSet = true; m_organizationSourceType = value; }

    /**
     * <p>If an AWS Organization is present, this is either
     * <code>OrganizationalUnits</code> or <code>EntireOrganization</code>. For
     * <code>OrganizationalUnits</code>, the data is aggregated from a set of
     * organization units. For <code>EntireOrganization</code>, the data is aggregated
     * from the entire AWS Organization. </p>
     */
    inline void SetOrganizationSourceType(Aws::String&& value) { m_organizationSourceTypeHasBeenSet = true; m_organizationSourceType = std::move(value); }

    /**
     * <p>If an AWS Organization is present, this is either
     * <code>OrganizationalUnits</code> or <code>EntireOrganization</code>. For
     * <code>OrganizationalUnits</code>, the data is aggregated from a set of
     * organization units. For <code>EntireOrganization</code>, the data is aggregated
     * from the entire AWS Organization. </p>
     */
    inline void SetOrganizationSourceType(const char* value) { m_organizationSourceTypeHasBeenSet = true; m_organizationSourceType.assign(value); }

    /**
     * <p>If an AWS Organization is present, this is either
     * <code>OrganizationalUnits</code> or <code>EntireOrganization</code>. For
     * <code>OrganizationalUnits</code>, the data is aggregated from a set of
     * organization units. For <code>EntireOrganization</code>, the data is aggregated
     * from the entire AWS Organization. </p>
     */
    inline ResourceDataSyncAwsOrganizationsSource& WithOrganizationSourceType(const Aws::String& value) { SetOrganizationSourceType(value); return *this;}

    /**
     * <p>If an AWS Organization is present, this is either
     * <code>OrganizationalUnits</code> or <code>EntireOrganization</code>. For
     * <code>OrganizationalUnits</code>, the data is aggregated from a set of
     * organization units. For <code>EntireOrganization</code>, the data is aggregated
     * from the entire AWS Organization. </p>
     */
    inline ResourceDataSyncAwsOrganizationsSource& WithOrganizationSourceType(Aws::String&& value) { SetOrganizationSourceType(std::move(value)); return *this;}

    /**
     * <p>If an AWS Organization is present, this is either
     * <code>OrganizationalUnits</code> or <code>EntireOrganization</code>. For
     * <code>OrganizationalUnits</code>, the data is aggregated from a set of
     * organization units. For <code>EntireOrganization</code>, the data is aggregated
     * from the entire AWS Organization. </p>
     */
    inline ResourceDataSyncAwsOrganizationsSource& WithOrganizationSourceType(const char* value) { SetOrganizationSourceType(value); return *this;}


    /**
     * <p>The AWS Organizations organization units included in the sync.</p>
     */
    inline const Aws::Vector<ResourceDataSyncOrganizationalUnit>& GetOrganizationalUnits() const{ return m_organizationalUnits; }

    /**
     * <p>The AWS Organizations organization units included in the sync.</p>
     */
    inline bool OrganizationalUnitsHasBeenSet() const { return m_organizationalUnitsHasBeenSet; }

    /**
     * <p>The AWS Organizations organization units included in the sync.</p>
     */
    inline void SetOrganizationalUnits(const Aws::Vector<ResourceDataSyncOrganizationalUnit>& value) { m_organizationalUnitsHasBeenSet = true; m_organizationalUnits = value; }

    /**
     * <p>The AWS Organizations organization units included in the sync.</p>
     */
    inline void SetOrganizationalUnits(Aws::Vector<ResourceDataSyncOrganizationalUnit>&& value) { m_organizationalUnitsHasBeenSet = true; m_organizationalUnits = std::move(value); }

    /**
     * <p>The AWS Organizations organization units included in the sync.</p>
     */
    inline ResourceDataSyncAwsOrganizationsSource& WithOrganizationalUnits(const Aws::Vector<ResourceDataSyncOrganizationalUnit>& value) { SetOrganizationalUnits(value); return *this;}

    /**
     * <p>The AWS Organizations organization units included in the sync.</p>
     */
    inline ResourceDataSyncAwsOrganizationsSource& WithOrganizationalUnits(Aws::Vector<ResourceDataSyncOrganizationalUnit>&& value) { SetOrganizationalUnits(std::move(value)); return *this;}

    /**
     * <p>The AWS Organizations organization units included in the sync.</p>
     */
    inline ResourceDataSyncAwsOrganizationsSource& AddOrganizationalUnits(const ResourceDataSyncOrganizationalUnit& value) { m_organizationalUnitsHasBeenSet = true; m_organizationalUnits.push_back(value); return *this; }

    /**
     * <p>The AWS Organizations organization units included in the sync.</p>
     */
    inline ResourceDataSyncAwsOrganizationsSource& AddOrganizationalUnits(ResourceDataSyncOrganizationalUnit&& value) { m_organizationalUnitsHasBeenSet = true; m_organizationalUnits.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_organizationSourceType;
    bool m_organizationSourceTypeHasBeenSet;

    Aws::Vector<ResourceDataSyncOrganizationalUnit> m_organizationalUnits;
    bool m_organizationalUnitsHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
