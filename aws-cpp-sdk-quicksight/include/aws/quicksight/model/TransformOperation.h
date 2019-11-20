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
#include <aws/quicksight/model/ProjectOperation.h>
#include <aws/quicksight/model/FilterOperation.h>
#include <aws/quicksight/model/CreateColumnsOperation.h>
#include <aws/quicksight/model/RenameColumnOperation.h>
#include <aws/quicksight/model/CastColumnTypeOperation.h>
#include <aws/quicksight/model/TagColumnOperation.h>
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
   * <p>A data transformation on a logical table. This is a variant type structure.
   * No more than one of the attributes should be non-null for this structure to be
   * valid.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TransformOperation">AWS
   * API Reference</a></p>
   */
  class AWS_QUICKSIGHT_API TransformOperation
  {
  public:
    TransformOperation();
    TransformOperation(Aws::Utils::Json::JsonView jsonValue);
    TransformOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An operation that projects columns. Operations that come after a projection
     * can only refer to projected columns.</p>
     */
    inline const ProjectOperation& GetProjectOperation() const{ return m_projectOperation; }

    /**
     * <p>An operation that projects columns. Operations that come after a projection
     * can only refer to projected columns.</p>
     */
    inline bool ProjectOperationHasBeenSet() const { return m_projectOperationHasBeenSet; }

    /**
     * <p>An operation that projects columns. Operations that come after a projection
     * can only refer to projected columns.</p>
     */
    inline void SetProjectOperation(const ProjectOperation& value) { m_projectOperationHasBeenSet = true; m_projectOperation = value; }

    /**
     * <p>An operation that projects columns. Operations that come after a projection
     * can only refer to projected columns.</p>
     */
    inline void SetProjectOperation(ProjectOperation&& value) { m_projectOperationHasBeenSet = true; m_projectOperation = std::move(value); }

    /**
     * <p>An operation that projects columns. Operations that come after a projection
     * can only refer to projected columns.</p>
     */
    inline TransformOperation& WithProjectOperation(const ProjectOperation& value) { SetProjectOperation(value); return *this;}

    /**
     * <p>An operation that projects columns. Operations that come after a projection
     * can only refer to projected columns.</p>
     */
    inline TransformOperation& WithProjectOperation(ProjectOperation&& value) { SetProjectOperation(std::move(value)); return *this;}


    /**
     * <p>An operation that filters rows based on some condition.</p>
     */
    inline const FilterOperation& GetFilterOperation() const{ return m_filterOperation; }

    /**
     * <p>An operation that filters rows based on some condition.</p>
     */
    inline bool FilterOperationHasBeenSet() const { return m_filterOperationHasBeenSet; }

    /**
     * <p>An operation that filters rows based on some condition.</p>
     */
    inline void SetFilterOperation(const FilterOperation& value) { m_filterOperationHasBeenSet = true; m_filterOperation = value; }

    /**
     * <p>An operation that filters rows based on some condition.</p>
     */
    inline void SetFilterOperation(FilterOperation&& value) { m_filterOperationHasBeenSet = true; m_filterOperation = std::move(value); }

    /**
     * <p>An operation that filters rows based on some condition.</p>
     */
    inline TransformOperation& WithFilterOperation(const FilterOperation& value) { SetFilterOperation(value); return *this;}

    /**
     * <p>An operation that filters rows based on some condition.</p>
     */
    inline TransformOperation& WithFilterOperation(FilterOperation&& value) { SetFilterOperation(std::move(value)); return *this;}


    /**
     * <p>An operation that creates calculated columns. Columns created in one such
     * operation form a lexical closure.</p>
     */
    inline const CreateColumnsOperation& GetCreateColumnsOperation() const{ return m_createColumnsOperation; }

    /**
     * <p>An operation that creates calculated columns. Columns created in one such
     * operation form a lexical closure.</p>
     */
    inline bool CreateColumnsOperationHasBeenSet() const { return m_createColumnsOperationHasBeenSet; }

    /**
     * <p>An operation that creates calculated columns. Columns created in one such
     * operation form a lexical closure.</p>
     */
    inline void SetCreateColumnsOperation(const CreateColumnsOperation& value) { m_createColumnsOperationHasBeenSet = true; m_createColumnsOperation = value; }

    /**
     * <p>An operation that creates calculated columns. Columns created in one such
     * operation form a lexical closure.</p>
     */
    inline void SetCreateColumnsOperation(CreateColumnsOperation&& value) { m_createColumnsOperationHasBeenSet = true; m_createColumnsOperation = std::move(value); }

    /**
     * <p>An operation that creates calculated columns. Columns created in one such
     * operation form a lexical closure.</p>
     */
    inline TransformOperation& WithCreateColumnsOperation(const CreateColumnsOperation& value) { SetCreateColumnsOperation(value); return *this;}

    /**
     * <p>An operation that creates calculated columns. Columns created in one such
     * operation form a lexical closure.</p>
     */
    inline TransformOperation& WithCreateColumnsOperation(CreateColumnsOperation&& value) { SetCreateColumnsOperation(std::move(value)); return *this;}


    /**
     * <p>An operation that renames a column.</p>
     */
    inline const RenameColumnOperation& GetRenameColumnOperation() const{ return m_renameColumnOperation; }

    /**
     * <p>An operation that renames a column.</p>
     */
    inline bool RenameColumnOperationHasBeenSet() const { return m_renameColumnOperationHasBeenSet; }

    /**
     * <p>An operation that renames a column.</p>
     */
    inline void SetRenameColumnOperation(const RenameColumnOperation& value) { m_renameColumnOperationHasBeenSet = true; m_renameColumnOperation = value; }

    /**
     * <p>An operation that renames a column.</p>
     */
    inline void SetRenameColumnOperation(RenameColumnOperation&& value) { m_renameColumnOperationHasBeenSet = true; m_renameColumnOperation = std::move(value); }

    /**
     * <p>An operation that renames a column.</p>
     */
    inline TransformOperation& WithRenameColumnOperation(const RenameColumnOperation& value) { SetRenameColumnOperation(value); return *this;}

    /**
     * <p>An operation that renames a column.</p>
     */
    inline TransformOperation& WithRenameColumnOperation(RenameColumnOperation&& value) { SetRenameColumnOperation(std::move(value)); return *this;}


    /**
     * <p>A transform operation that casts a column to a different type.</p>
     */
    inline const CastColumnTypeOperation& GetCastColumnTypeOperation() const{ return m_castColumnTypeOperation; }

    /**
     * <p>A transform operation that casts a column to a different type.</p>
     */
    inline bool CastColumnTypeOperationHasBeenSet() const { return m_castColumnTypeOperationHasBeenSet; }

    /**
     * <p>A transform operation that casts a column to a different type.</p>
     */
    inline void SetCastColumnTypeOperation(const CastColumnTypeOperation& value) { m_castColumnTypeOperationHasBeenSet = true; m_castColumnTypeOperation = value; }

    /**
     * <p>A transform operation that casts a column to a different type.</p>
     */
    inline void SetCastColumnTypeOperation(CastColumnTypeOperation&& value) { m_castColumnTypeOperationHasBeenSet = true; m_castColumnTypeOperation = std::move(value); }

    /**
     * <p>A transform operation that casts a column to a different type.</p>
     */
    inline TransformOperation& WithCastColumnTypeOperation(const CastColumnTypeOperation& value) { SetCastColumnTypeOperation(value); return *this;}

    /**
     * <p>A transform operation that casts a column to a different type.</p>
     */
    inline TransformOperation& WithCastColumnTypeOperation(CastColumnTypeOperation&& value) { SetCastColumnTypeOperation(std::move(value)); return *this;}


    /**
     * <p>An operation that tags a column with additional information.</p>
     */
    inline const TagColumnOperation& GetTagColumnOperation() const{ return m_tagColumnOperation; }

    /**
     * <p>An operation that tags a column with additional information.</p>
     */
    inline bool TagColumnOperationHasBeenSet() const { return m_tagColumnOperationHasBeenSet; }

    /**
     * <p>An operation that tags a column with additional information.</p>
     */
    inline void SetTagColumnOperation(const TagColumnOperation& value) { m_tagColumnOperationHasBeenSet = true; m_tagColumnOperation = value; }

    /**
     * <p>An operation that tags a column with additional information.</p>
     */
    inline void SetTagColumnOperation(TagColumnOperation&& value) { m_tagColumnOperationHasBeenSet = true; m_tagColumnOperation = std::move(value); }

    /**
     * <p>An operation that tags a column with additional information.</p>
     */
    inline TransformOperation& WithTagColumnOperation(const TagColumnOperation& value) { SetTagColumnOperation(value); return *this;}

    /**
     * <p>An operation that tags a column with additional information.</p>
     */
    inline TransformOperation& WithTagColumnOperation(TagColumnOperation&& value) { SetTagColumnOperation(std::move(value)); return *this;}

  private:

    ProjectOperation m_projectOperation;
    bool m_projectOperationHasBeenSet;

    FilterOperation m_filterOperation;
    bool m_filterOperationHasBeenSet;

    CreateColumnsOperation m_createColumnsOperation;
    bool m_createColumnsOperationHasBeenSet;

    RenameColumnOperation m_renameColumnOperation;
    bool m_renameColumnOperationHasBeenSet;

    CastColumnTypeOperation m_castColumnTypeOperation;
    bool m_castColumnTypeOperationHasBeenSet;

    TagColumnOperation m_tagColumnOperation;
    bool m_tagColumnOperationHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
