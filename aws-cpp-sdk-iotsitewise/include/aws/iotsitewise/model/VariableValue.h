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
   * <p>Identifies a property value used in an expression.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/VariableValue">AWS
   * API Reference</a></p>
   */
  class AWS_IOTSITEWISE_API VariableValue
  {
  public:
    VariableValue();
    VariableValue(Aws::Utils::Json::JsonView jsonValue);
    VariableValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the property to use as the variable. You can use the property
     * <code>name</code> if it's from the same asset model.</p>
     */
    inline const Aws::String& GetPropertyId() const{ return m_propertyId; }

    /**
     * <p>The ID of the property to use as the variable. You can use the property
     * <code>name</code> if it's from the same asset model.</p>
     */
    inline bool PropertyIdHasBeenSet() const { return m_propertyIdHasBeenSet; }

    /**
     * <p>The ID of the property to use as the variable. You can use the property
     * <code>name</code> if it's from the same asset model.</p>
     */
    inline void SetPropertyId(const Aws::String& value) { m_propertyIdHasBeenSet = true; m_propertyId = value; }

    /**
     * <p>The ID of the property to use as the variable. You can use the property
     * <code>name</code> if it's from the same asset model.</p>
     */
    inline void SetPropertyId(Aws::String&& value) { m_propertyIdHasBeenSet = true; m_propertyId = std::move(value); }

    /**
     * <p>The ID of the property to use as the variable. You can use the property
     * <code>name</code> if it's from the same asset model.</p>
     */
    inline void SetPropertyId(const char* value) { m_propertyIdHasBeenSet = true; m_propertyId.assign(value); }

    /**
     * <p>The ID of the property to use as the variable. You can use the property
     * <code>name</code> if it's from the same asset model.</p>
     */
    inline VariableValue& WithPropertyId(const Aws::String& value) { SetPropertyId(value); return *this;}

    /**
     * <p>The ID of the property to use as the variable. You can use the property
     * <code>name</code> if it's from the same asset model.</p>
     */
    inline VariableValue& WithPropertyId(Aws::String&& value) { SetPropertyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the property to use as the variable. You can use the property
     * <code>name</code> if it's from the same asset model.</p>
     */
    inline VariableValue& WithPropertyId(const char* value) { SetPropertyId(value); return *this;}


    /**
     * <p>The ID of the hierarchy to query for the property ID. You can use the
     * hierarchy's name instead of the hierarchy's ID.</p> <p>You use a hierarchy ID
     * instead of a model ID because you can have several hierarchies using the same
     * model and therefore the same <code>propertyId</code>. For example, you might
     * have separately grouped assets that come from the same asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * Hierarchies</a> in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetHierarchyId() const{ return m_hierarchyId; }

    /**
     * <p>The ID of the hierarchy to query for the property ID. You can use the
     * hierarchy's name instead of the hierarchy's ID.</p> <p>You use a hierarchy ID
     * instead of a model ID because you can have several hierarchies using the same
     * model and therefore the same <code>propertyId</code>. For example, you might
     * have separately grouped assets that come from the same asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * Hierarchies</a> in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline bool HierarchyIdHasBeenSet() const { return m_hierarchyIdHasBeenSet; }

    /**
     * <p>The ID of the hierarchy to query for the property ID. You can use the
     * hierarchy's name instead of the hierarchy's ID.</p> <p>You use a hierarchy ID
     * instead of a model ID because you can have several hierarchies using the same
     * model and therefore the same <code>propertyId</code>. For example, you might
     * have separately grouped assets that come from the same asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * Hierarchies</a> in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline void SetHierarchyId(const Aws::String& value) { m_hierarchyIdHasBeenSet = true; m_hierarchyId = value; }

    /**
     * <p>The ID of the hierarchy to query for the property ID. You can use the
     * hierarchy's name instead of the hierarchy's ID.</p> <p>You use a hierarchy ID
     * instead of a model ID because you can have several hierarchies using the same
     * model and therefore the same <code>propertyId</code>. For example, you might
     * have separately grouped assets that come from the same asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * Hierarchies</a> in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline void SetHierarchyId(Aws::String&& value) { m_hierarchyIdHasBeenSet = true; m_hierarchyId = std::move(value); }

    /**
     * <p>The ID of the hierarchy to query for the property ID. You can use the
     * hierarchy's name instead of the hierarchy's ID.</p> <p>You use a hierarchy ID
     * instead of a model ID because you can have several hierarchies using the same
     * model and therefore the same <code>propertyId</code>. For example, you might
     * have separately grouped assets that come from the same asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * Hierarchies</a> in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline void SetHierarchyId(const char* value) { m_hierarchyIdHasBeenSet = true; m_hierarchyId.assign(value); }

    /**
     * <p>The ID of the hierarchy to query for the property ID. You can use the
     * hierarchy's name instead of the hierarchy's ID.</p> <p>You use a hierarchy ID
     * instead of a model ID because you can have several hierarchies using the same
     * model and therefore the same <code>propertyId</code>. For example, you might
     * have separately grouped assets that come from the same asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * Hierarchies</a> in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline VariableValue& WithHierarchyId(const Aws::String& value) { SetHierarchyId(value); return *this;}

    /**
     * <p>The ID of the hierarchy to query for the property ID. You can use the
     * hierarchy's name instead of the hierarchy's ID.</p> <p>You use a hierarchy ID
     * instead of a model ID because you can have several hierarchies using the same
     * model and therefore the same <code>propertyId</code>. For example, you might
     * have separately grouped assets that come from the same asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * Hierarchies</a> in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline VariableValue& WithHierarchyId(Aws::String&& value) { SetHierarchyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the hierarchy to query for the property ID. You can use the
     * hierarchy's name instead of the hierarchy's ID.</p> <p>You use a hierarchy ID
     * instead of a model ID because you can have several hierarchies using the same
     * model and therefore the same <code>propertyId</code>. For example, you might
     * have separately grouped assets that come from the same asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * Hierarchies</a> in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline VariableValue& WithHierarchyId(const char* value) { SetHierarchyId(value); return *this;}

  private:

    Aws::String m_propertyId;
    bool m_propertyIdHasBeenSet;

    Aws::String m_hierarchyId;
    bool m_hierarchyIdHasBeenSet;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
