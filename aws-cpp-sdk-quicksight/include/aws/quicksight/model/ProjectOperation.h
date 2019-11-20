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
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A transform operation that projects columns. Operations that come after a
   * projection can only refer to projected columns.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ProjectOperation">AWS
   * API Reference</a></p>
   */
  class AWS_QUICKSIGHT_API ProjectOperation
  {
  public:
    ProjectOperation();
    ProjectOperation(Aws::Utils::Json::JsonView jsonValue);
    ProjectOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Projected columns.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProjectedColumns() const{ return m_projectedColumns; }

    /**
     * <p>Projected columns.</p>
     */
    inline bool ProjectedColumnsHasBeenSet() const { return m_projectedColumnsHasBeenSet; }

    /**
     * <p>Projected columns.</p>
     */
    inline void SetProjectedColumns(const Aws::Vector<Aws::String>& value) { m_projectedColumnsHasBeenSet = true; m_projectedColumns = value; }

    /**
     * <p>Projected columns.</p>
     */
    inline void SetProjectedColumns(Aws::Vector<Aws::String>&& value) { m_projectedColumnsHasBeenSet = true; m_projectedColumns = std::move(value); }

    /**
     * <p>Projected columns.</p>
     */
    inline ProjectOperation& WithProjectedColumns(const Aws::Vector<Aws::String>& value) { SetProjectedColumns(value); return *this;}

    /**
     * <p>Projected columns.</p>
     */
    inline ProjectOperation& WithProjectedColumns(Aws::Vector<Aws::String>&& value) { SetProjectedColumns(std::move(value)); return *this;}

    /**
     * <p>Projected columns.</p>
     */
    inline ProjectOperation& AddProjectedColumns(const Aws::String& value) { m_projectedColumnsHasBeenSet = true; m_projectedColumns.push_back(value); return *this; }

    /**
     * <p>Projected columns.</p>
     */
    inline ProjectOperation& AddProjectedColumns(Aws::String&& value) { m_projectedColumnsHasBeenSet = true; m_projectedColumns.push_back(std::move(value)); return *this; }

    /**
     * <p>Projected columns.</p>
     */
    inline ProjectOperation& AddProjectedColumns(const char* value) { m_projectedColumnsHasBeenSet = true; m_projectedColumns.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_projectedColumns;
    bool m_projectedColumnsHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
