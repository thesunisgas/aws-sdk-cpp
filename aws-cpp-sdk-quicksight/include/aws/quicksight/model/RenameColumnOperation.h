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
   * <p>A transform operation that renames a column.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RenameColumnOperation">AWS
   * API Reference</a></p>
   */
  class AWS_QUICKSIGHT_API RenameColumnOperation
  {
  public:
    RenameColumnOperation();
    RenameColumnOperation(Aws::Utils::Json::JsonView jsonValue);
    RenameColumnOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the column to be renamed.</p>
     */
    inline const Aws::String& GetColumnName() const{ return m_columnName; }

    /**
     * <p>Name of the column to be renamed.</p>
     */
    inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }

    /**
     * <p>Name of the column to be renamed.</p>
     */
    inline void SetColumnName(const Aws::String& value) { m_columnNameHasBeenSet = true; m_columnName = value; }

    /**
     * <p>Name of the column to be renamed.</p>
     */
    inline void SetColumnName(Aws::String&& value) { m_columnNameHasBeenSet = true; m_columnName = std::move(value); }

    /**
     * <p>Name of the column to be renamed.</p>
     */
    inline void SetColumnName(const char* value) { m_columnNameHasBeenSet = true; m_columnName.assign(value); }

    /**
     * <p>Name of the column to be renamed.</p>
     */
    inline RenameColumnOperation& WithColumnName(const Aws::String& value) { SetColumnName(value); return *this;}

    /**
     * <p>Name of the column to be renamed.</p>
     */
    inline RenameColumnOperation& WithColumnName(Aws::String&& value) { SetColumnName(std::move(value)); return *this;}

    /**
     * <p>Name of the column to be renamed.</p>
     */
    inline RenameColumnOperation& WithColumnName(const char* value) { SetColumnName(value); return *this;}


    /**
     * <p>New name for the column.</p>
     */
    inline const Aws::String& GetNewColumnName() const{ return m_newColumnName; }

    /**
     * <p>New name for the column.</p>
     */
    inline bool NewColumnNameHasBeenSet() const { return m_newColumnNameHasBeenSet; }

    /**
     * <p>New name for the column.</p>
     */
    inline void SetNewColumnName(const Aws::String& value) { m_newColumnNameHasBeenSet = true; m_newColumnName = value; }

    /**
     * <p>New name for the column.</p>
     */
    inline void SetNewColumnName(Aws::String&& value) { m_newColumnNameHasBeenSet = true; m_newColumnName = std::move(value); }

    /**
     * <p>New name for the column.</p>
     */
    inline void SetNewColumnName(const char* value) { m_newColumnNameHasBeenSet = true; m_newColumnName.assign(value); }

    /**
     * <p>New name for the column.</p>
     */
    inline RenameColumnOperation& WithNewColumnName(const Aws::String& value) { SetNewColumnName(value); return *this;}

    /**
     * <p>New name for the column.</p>
     */
    inline RenameColumnOperation& WithNewColumnName(Aws::String&& value) { SetNewColumnName(std::move(value)); return *this;}

    /**
     * <p>New name for the column.</p>
     */
    inline RenameColumnOperation& WithNewColumnName(const char* value) { SetNewColumnName(value); return *this;}

  private:

    Aws::String m_columnName;
    bool m_columnNameHasBeenSet;

    Aws::String m_newColumnName;
    bool m_newColumnNameHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
