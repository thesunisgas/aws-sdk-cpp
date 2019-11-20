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
#include <aws/quicksight/model/RelationalTable.h>
#include <aws/quicksight/model/CustomSql.h>
#include <aws/quicksight/model/S3Source.h>
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
   * <p>A view of a data source. Contains information on the shape of the data in the
   * underlying source. This is a variant type structure. No more than one of the
   * attributes can be non-null for this structure to be valid.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PhysicalTable">AWS
   * API Reference</a></p>
   */
  class AWS_QUICKSIGHT_API PhysicalTable
  {
  public:
    PhysicalTable();
    PhysicalTable(Aws::Utils::Json::JsonView jsonValue);
    PhysicalTable& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A physical table type for relational data sources.</p>
     */
    inline const RelationalTable& GetRelationalTable() const{ return m_relationalTable; }

    /**
     * <p>A physical table type for relational data sources.</p>
     */
    inline bool RelationalTableHasBeenSet() const { return m_relationalTableHasBeenSet; }

    /**
     * <p>A physical table type for relational data sources.</p>
     */
    inline void SetRelationalTable(const RelationalTable& value) { m_relationalTableHasBeenSet = true; m_relationalTable = value; }

    /**
     * <p>A physical table type for relational data sources.</p>
     */
    inline void SetRelationalTable(RelationalTable&& value) { m_relationalTableHasBeenSet = true; m_relationalTable = std::move(value); }

    /**
     * <p>A physical table type for relational data sources.</p>
     */
    inline PhysicalTable& WithRelationalTable(const RelationalTable& value) { SetRelationalTable(value); return *this;}

    /**
     * <p>A physical table type for relational data sources.</p>
     */
    inline PhysicalTable& WithRelationalTable(RelationalTable&& value) { SetRelationalTable(std::move(value)); return *this;}


    /**
     * <p>A physical table type built from the results of the custom SQL query.</p>
     */
    inline const CustomSql& GetCustomSql() const{ return m_customSql; }

    /**
     * <p>A physical table type built from the results of the custom SQL query.</p>
     */
    inline bool CustomSqlHasBeenSet() const { return m_customSqlHasBeenSet; }

    /**
     * <p>A physical table type built from the results of the custom SQL query.</p>
     */
    inline void SetCustomSql(const CustomSql& value) { m_customSqlHasBeenSet = true; m_customSql = value; }

    /**
     * <p>A physical table type built from the results of the custom SQL query.</p>
     */
    inline void SetCustomSql(CustomSql&& value) { m_customSqlHasBeenSet = true; m_customSql = std::move(value); }

    /**
     * <p>A physical table type built from the results of the custom SQL query.</p>
     */
    inline PhysicalTable& WithCustomSql(const CustomSql& value) { SetCustomSql(value); return *this;}

    /**
     * <p>A physical table type built from the results of the custom SQL query.</p>
     */
    inline PhysicalTable& WithCustomSql(CustomSql&& value) { SetCustomSql(std::move(value)); return *this;}


    /**
     * <p>A physical table type for as S3 data source.</p>
     */
    inline const S3Source& GetS3Source() const{ return m_s3Source; }

    /**
     * <p>A physical table type for as S3 data source.</p>
     */
    inline bool S3SourceHasBeenSet() const { return m_s3SourceHasBeenSet; }

    /**
     * <p>A physical table type for as S3 data source.</p>
     */
    inline void SetS3Source(const S3Source& value) { m_s3SourceHasBeenSet = true; m_s3Source = value; }

    /**
     * <p>A physical table type for as S3 data source.</p>
     */
    inline void SetS3Source(S3Source&& value) { m_s3SourceHasBeenSet = true; m_s3Source = std::move(value); }

    /**
     * <p>A physical table type for as S3 data source.</p>
     */
    inline PhysicalTable& WithS3Source(const S3Source& value) { SetS3Source(value); return *this;}

    /**
     * <p>A physical table type for as S3 data source.</p>
     */
    inline PhysicalTable& WithS3Source(S3Source&& value) { SetS3Source(std::move(value)); return *this;}

  private:

    RelationalTable m_relationalTable;
    bool m_relationalTableHasBeenSet;

    CustomSql m_customSql;
    bool m_customSqlHasBeenSet;

    S3Source m_s3Source;
    bool m_s3SourceHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
