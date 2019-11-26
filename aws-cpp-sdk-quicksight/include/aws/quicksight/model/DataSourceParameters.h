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
#include <aws/quicksight/model/AmazonElasticsearchParameters.h>
#include <aws/quicksight/model/AthenaParameters.h>
#include <aws/quicksight/model/AuroraParameters.h>
#include <aws/quicksight/model/AuroraPostgreSqlParameters.h>
#include <aws/quicksight/model/AwsIotAnalyticsParameters.h>
#include <aws/quicksight/model/JiraParameters.h>
#include <aws/quicksight/model/MariaDbParameters.h>
#include <aws/quicksight/model/MySqlParameters.h>
#include <aws/quicksight/model/PostgreSqlParameters.h>
#include <aws/quicksight/model/PrestoParameters.h>
#include <aws/quicksight/model/RdsParameters.h>
#include <aws/quicksight/model/RedshiftParameters.h>
#include <aws/quicksight/model/S3Parameters.h>
#include <aws/quicksight/model/ServiceNowParameters.h>
#include <aws/quicksight/model/SnowflakeParameters.h>
#include <aws/quicksight/model/SparkParameters.h>
#include <aws/quicksight/model/SqlServerParameters.h>
#include <aws/quicksight/model/TeradataParameters.h>
#include <aws/quicksight/model/TwitterParameters.h>
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
   * <p>The parameters that QuickSight uses to connect to your underlying source.
   * This is a variant type structure. At most one of the attributes should be
   * non-null for this structure to be valid.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataSourceParameters">AWS
   * API Reference</a></p>
   */
  class AWS_QUICKSIGHT_API DataSourceParameters
  {
  public:
    DataSourceParameters();
    DataSourceParameters(Aws::Utils::Json::JsonView jsonValue);
    DataSourceParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Amazon Elasticsearch parameters.</p>
     */
    inline const AmazonElasticsearchParameters& GetAmazonElasticsearchParameters() const{ return m_amazonElasticsearchParameters; }

    /**
     * <p>Amazon Elasticsearch parameters.</p>
     */
    inline bool AmazonElasticsearchParametersHasBeenSet() const { return m_amazonElasticsearchParametersHasBeenSet; }

    /**
     * <p>Amazon Elasticsearch parameters.</p>
     */
    inline void SetAmazonElasticsearchParameters(const AmazonElasticsearchParameters& value) { m_amazonElasticsearchParametersHasBeenSet = true; m_amazonElasticsearchParameters = value; }

    /**
     * <p>Amazon Elasticsearch parameters.</p>
     */
    inline void SetAmazonElasticsearchParameters(AmazonElasticsearchParameters&& value) { m_amazonElasticsearchParametersHasBeenSet = true; m_amazonElasticsearchParameters = std::move(value); }

    /**
     * <p>Amazon Elasticsearch parameters.</p>
     */
    inline DataSourceParameters& WithAmazonElasticsearchParameters(const AmazonElasticsearchParameters& value) { SetAmazonElasticsearchParameters(value); return *this;}

    /**
     * <p>Amazon Elasticsearch parameters.</p>
     */
    inline DataSourceParameters& WithAmazonElasticsearchParameters(AmazonElasticsearchParameters&& value) { SetAmazonElasticsearchParameters(std::move(value)); return *this;}


    /**
     * <p>Athena parameters.</p>
     */
    inline const AthenaParameters& GetAthenaParameters() const{ return m_athenaParameters; }

    /**
     * <p>Athena parameters.</p>
     */
    inline bool AthenaParametersHasBeenSet() const { return m_athenaParametersHasBeenSet; }

    /**
     * <p>Athena parameters.</p>
     */
    inline void SetAthenaParameters(const AthenaParameters& value) { m_athenaParametersHasBeenSet = true; m_athenaParameters = value; }

    /**
     * <p>Athena parameters.</p>
     */
    inline void SetAthenaParameters(AthenaParameters&& value) { m_athenaParametersHasBeenSet = true; m_athenaParameters = std::move(value); }

    /**
     * <p>Athena parameters.</p>
     */
    inline DataSourceParameters& WithAthenaParameters(const AthenaParameters& value) { SetAthenaParameters(value); return *this;}

    /**
     * <p>Athena parameters.</p>
     */
    inline DataSourceParameters& WithAthenaParameters(AthenaParameters&& value) { SetAthenaParameters(std::move(value)); return *this;}


    /**
     * <p>Aurora MySQL parameters.</p>
     */
    inline const AuroraParameters& GetAuroraParameters() const{ return m_auroraParameters; }

    /**
     * <p>Aurora MySQL parameters.</p>
     */
    inline bool AuroraParametersHasBeenSet() const { return m_auroraParametersHasBeenSet; }

    /**
     * <p>Aurora MySQL parameters.</p>
     */
    inline void SetAuroraParameters(const AuroraParameters& value) { m_auroraParametersHasBeenSet = true; m_auroraParameters = value; }

    /**
     * <p>Aurora MySQL parameters.</p>
     */
    inline void SetAuroraParameters(AuroraParameters&& value) { m_auroraParametersHasBeenSet = true; m_auroraParameters = std::move(value); }

    /**
     * <p>Aurora MySQL parameters.</p>
     */
    inline DataSourceParameters& WithAuroraParameters(const AuroraParameters& value) { SetAuroraParameters(value); return *this;}

    /**
     * <p>Aurora MySQL parameters.</p>
     */
    inline DataSourceParameters& WithAuroraParameters(AuroraParameters&& value) { SetAuroraParameters(std::move(value)); return *this;}


    /**
     * <p>Aurora PostgreSQL parameters.</p>
     */
    inline const AuroraPostgreSqlParameters& GetAuroraPostgreSqlParameters() const{ return m_auroraPostgreSqlParameters; }

    /**
     * <p>Aurora PostgreSQL parameters.</p>
     */
    inline bool AuroraPostgreSqlParametersHasBeenSet() const { return m_auroraPostgreSqlParametersHasBeenSet; }

    /**
     * <p>Aurora PostgreSQL parameters.</p>
     */
    inline void SetAuroraPostgreSqlParameters(const AuroraPostgreSqlParameters& value) { m_auroraPostgreSqlParametersHasBeenSet = true; m_auroraPostgreSqlParameters = value; }

    /**
     * <p>Aurora PostgreSQL parameters.</p>
     */
    inline void SetAuroraPostgreSqlParameters(AuroraPostgreSqlParameters&& value) { m_auroraPostgreSqlParametersHasBeenSet = true; m_auroraPostgreSqlParameters = std::move(value); }

    /**
     * <p>Aurora PostgreSQL parameters.</p>
     */
    inline DataSourceParameters& WithAuroraPostgreSqlParameters(const AuroraPostgreSqlParameters& value) { SetAuroraPostgreSqlParameters(value); return *this;}

    /**
     * <p>Aurora PostgreSQL parameters.</p>
     */
    inline DataSourceParameters& WithAuroraPostgreSqlParameters(AuroraPostgreSqlParameters&& value) { SetAuroraPostgreSqlParameters(std::move(value)); return *this;}


    /**
     * <p>AWS IoT Analytics parameters.</p>
     */
    inline const AwsIotAnalyticsParameters& GetAwsIotAnalyticsParameters() const{ return m_awsIotAnalyticsParameters; }

    /**
     * <p>AWS IoT Analytics parameters.</p>
     */
    inline bool AwsIotAnalyticsParametersHasBeenSet() const { return m_awsIotAnalyticsParametersHasBeenSet; }

    /**
     * <p>AWS IoT Analytics parameters.</p>
     */
    inline void SetAwsIotAnalyticsParameters(const AwsIotAnalyticsParameters& value) { m_awsIotAnalyticsParametersHasBeenSet = true; m_awsIotAnalyticsParameters = value; }

    /**
     * <p>AWS IoT Analytics parameters.</p>
     */
    inline void SetAwsIotAnalyticsParameters(AwsIotAnalyticsParameters&& value) { m_awsIotAnalyticsParametersHasBeenSet = true; m_awsIotAnalyticsParameters = std::move(value); }

    /**
     * <p>AWS IoT Analytics parameters.</p>
     */
    inline DataSourceParameters& WithAwsIotAnalyticsParameters(const AwsIotAnalyticsParameters& value) { SetAwsIotAnalyticsParameters(value); return *this;}

    /**
     * <p>AWS IoT Analytics parameters.</p>
     */
    inline DataSourceParameters& WithAwsIotAnalyticsParameters(AwsIotAnalyticsParameters&& value) { SetAwsIotAnalyticsParameters(std::move(value)); return *this;}


    /**
     * <p>Jira parameters.</p>
     */
    inline const JiraParameters& GetJiraParameters() const{ return m_jiraParameters; }

    /**
     * <p>Jira parameters.</p>
     */
    inline bool JiraParametersHasBeenSet() const { return m_jiraParametersHasBeenSet; }

    /**
     * <p>Jira parameters.</p>
     */
    inline void SetJiraParameters(const JiraParameters& value) { m_jiraParametersHasBeenSet = true; m_jiraParameters = value; }

    /**
     * <p>Jira parameters.</p>
     */
    inline void SetJiraParameters(JiraParameters&& value) { m_jiraParametersHasBeenSet = true; m_jiraParameters = std::move(value); }

    /**
     * <p>Jira parameters.</p>
     */
    inline DataSourceParameters& WithJiraParameters(const JiraParameters& value) { SetJiraParameters(value); return *this;}

    /**
     * <p>Jira parameters.</p>
     */
    inline DataSourceParameters& WithJiraParameters(JiraParameters&& value) { SetJiraParameters(std::move(value)); return *this;}


    /**
     * <p>MariaDB parameters.</p>
     */
    inline const MariaDbParameters& GetMariaDbParameters() const{ return m_mariaDbParameters; }

    /**
     * <p>MariaDB parameters.</p>
     */
    inline bool MariaDbParametersHasBeenSet() const { return m_mariaDbParametersHasBeenSet; }

    /**
     * <p>MariaDB parameters.</p>
     */
    inline void SetMariaDbParameters(const MariaDbParameters& value) { m_mariaDbParametersHasBeenSet = true; m_mariaDbParameters = value; }

    /**
     * <p>MariaDB parameters.</p>
     */
    inline void SetMariaDbParameters(MariaDbParameters&& value) { m_mariaDbParametersHasBeenSet = true; m_mariaDbParameters = std::move(value); }

    /**
     * <p>MariaDB parameters.</p>
     */
    inline DataSourceParameters& WithMariaDbParameters(const MariaDbParameters& value) { SetMariaDbParameters(value); return *this;}

    /**
     * <p>MariaDB parameters.</p>
     */
    inline DataSourceParameters& WithMariaDbParameters(MariaDbParameters&& value) { SetMariaDbParameters(std::move(value)); return *this;}


    /**
     * <p>MySQL parameters.</p>
     */
    inline const MySqlParameters& GetMySqlParameters() const{ return m_mySqlParameters; }

    /**
     * <p>MySQL parameters.</p>
     */
    inline bool MySqlParametersHasBeenSet() const { return m_mySqlParametersHasBeenSet; }

    /**
     * <p>MySQL parameters.</p>
     */
    inline void SetMySqlParameters(const MySqlParameters& value) { m_mySqlParametersHasBeenSet = true; m_mySqlParameters = value; }

    /**
     * <p>MySQL parameters.</p>
     */
    inline void SetMySqlParameters(MySqlParameters&& value) { m_mySqlParametersHasBeenSet = true; m_mySqlParameters = std::move(value); }

    /**
     * <p>MySQL parameters.</p>
     */
    inline DataSourceParameters& WithMySqlParameters(const MySqlParameters& value) { SetMySqlParameters(value); return *this;}

    /**
     * <p>MySQL parameters.</p>
     */
    inline DataSourceParameters& WithMySqlParameters(MySqlParameters&& value) { SetMySqlParameters(std::move(value)); return *this;}


    /**
     * <p>PostgreSQL parameters.</p>
     */
    inline const PostgreSqlParameters& GetPostgreSqlParameters() const{ return m_postgreSqlParameters; }

    /**
     * <p>PostgreSQL parameters.</p>
     */
    inline bool PostgreSqlParametersHasBeenSet() const { return m_postgreSqlParametersHasBeenSet; }

    /**
     * <p>PostgreSQL parameters.</p>
     */
    inline void SetPostgreSqlParameters(const PostgreSqlParameters& value) { m_postgreSqlParametersHasBeenSet = true; m_postgreSqlParameters = value; }

    /**
     * <p>PostgreSQL parameters.</p>
     */
    inline void SetPostgreSqlParameters(PostgreSqlParameters&& value) { m_postgreSqlParametersHasBeenSet = true; m_postgreSqlParameters = std::move(value); }

    /**
     * <p>PostgreSQL parameters.</p>
     */
    inline DataSourceParameters& WithPostgreSqlParameters(const PostgreSqlParameters& value) { SetPostgreSqlParameters(value); return *this;}

    /**
     * <p>PostgreSQL parameters.</p>
     */
    inline DataSourceParameters& WithPostgreSqlParameters(PostgreSqlParameters&& value) { SetPostgreSqlParameters(std::move(value)); return *this;}


    /**
     * <p>Presto parameters.</p>
     */
    inline const PrestoParameters& GetPrestoParameters() const{ return m_prestoParameters; }

    /**
     * <p>Presto parameters.</p>
     */
    inline bool PrestoParametersHasBeenSet() const { return m_prestoParametersHasBeenSet; }

    /**
     * <p>Presto parameters.</p>
     */
    inline void SetPrestoParameters(const PrestoParameters& value) { m_prestoParametersHasBeenSet = true; m_prestoParameters = value; }

    /**
     * <p>Presto parameters.</p>
     */
    inline void SetPrestoParameters(PrestoParameters&& value) { m_prestoParametersHasBeenSet = true; m_prestoParameters = std::move(value); }

    /**
     * <p>Presto parameters.</p>
     */
    inline DataSourceParameters& WithPrestoParameters(const PrestoParameters& value) { SetPrestoParameters(value); return *this;}

    /**
     * <p>Presto parameters.</p>
     */
    inline DataSourceParameters& WithPrestoParameters(PrestoParameters&& value) { SetPrestoParameters(std::move(value)); return *this;}


    /**
     * <p>RDS parameters.</p>
     */
    inline const RdsParameters& GetRdsParameters() const{ return m_rdsParameters; }

    /**
     * <p>RDS parameters.</p>
     */
    inline bool RdsParametersHasBeenSet() const { return m_rdsParametersHasBeenSet; }

    /**
     * <p>RDS parameters.</p>
     */
    inline void SetRdsParameters(const RdsParameters& value) { m_rdsParametersHasBeenSet = true; m_rdsParameters = value; }

    /**
     * <p>RDS parameters.</p>
     */
    inline void SetRdsParameters(RdsParameters&& value) { m_rdsParametersHasBeenSet = true; m_rdsParameters = std::move(value); }

    /**
     * <p>RDS parameters.</p>
     */
    inline DataSourceParameters& WithRdsParameters(const RdsParameters& value) { SetRdsParameters(value); return *this;}

    /**
     * <p>RDS parameters.</p>
     */
    inline DataSourceParameters& WithRdsParameters(RdsParameters&& value) { SetRdsParameters(std::move(value)); return *this;}


    /**
     * <p>Redshift parameters.</p>
     */
    inline const RedshiftParameters& GetRedshiftParameters() const{ return m_redshiftParameters; }

    /**
     * <p>Redshift parameters.</p>
     */
    inline bool RedshiftParametersHasBeenSet() const { return m_redshiftParametersHasBeenSet; }

    /**
     * <p>Redshift parameters.</p>
     */
    inline void SetRedshiftParameters(const RedshiftParameters& value) { m_redshiftParametersHasBeenSet = true; m_redshiftParameters = value; }

    /**
     * <p>Redshift parameters.</p>
     */
    inline void SetRedshiftParameters(RedshiftParameters&& value) { m_redshiftParametersHasBeenSet = true; m_redshiftParameters = std::move(value); }

    /**
     * <p>Redshift parameters.</p>
     */
    inline DataSourceParameters& WithRedshiftParameters(const RedshiftParameters& value) { SetRedshiftParameters(value); return *this;}

    /**
     * <p>Redshift parameters.</p>
     */
    inline DataSourceParameters& WithRedshiftParameters(RedshiftParameters&& value) { SetRedshiftParameters(std::move(value)); return *this;}


    /**
     * <p>S3 parameters.</p>
     */
    inline const S3Parameters& GetS3Parameters() const{ return m_s3Parameters; }

    /**
     * <p>S3 parameters.</p>
     */
    inline bool S3ParametersHasBeenSet() const { return m_s3ParametersHasBeenSet; }

    /**
     * <p>S3 parameters.</p>
     */
    inline void SetS3Parameters(const S3Parameters& value) { m_s3ParametersHasBeenSet = true; m_s3Parameters = value; }

    /**
     * <p>S3 parameters.</p>
     */
    inline void SetS3Parameters(S3Parameters&& value) { m_s3ParametersHasBeenSet = true; m_s3Parameters = std::move(value); }

    /**
     * <p>S3 parameters.</p>
     */
    inline DataSourceParameters& WithS3Parameters(const S3Parameters& value) { SetS3Parameters(value); return *this;}

    /**
     * <p>S3 parameters.</p>
     */
    inline DataSourceParameters& WithS3Parameters(S3Parameters&& value) { SetS3Parameters(std::move(value)); return *this;}


    /**
     * <p>ServiceNow parameters.</p>
     */
    inline const ServiceNowParameters& GetServiceNowParameters() const{ return m_serviceNowParameters; }

    /**
     * <p>ServiceNow parameters.</p>
     */
    inline bool ServiceNowParametersHasBeenSet() const { return m_serviceNowParametersHasBeenSet; }

    /**
     * <p>ServiceNow parameters.</p>
     */
    inline void SetServiceNowParameters(const ServiceNowParameters& value) { m_serviceNowParametersHasBeenSet = true; m_serviceNowParameters = value; }

    /**
     * <p>ServiceNow parameters.</p>
     */
    inline void SetServiceNowParameters(ServiceNowParameters&& value) { m_serviceNowParametersHasBeenSet = true; m_serviceNowParameters = std::move(value); }

    /**
     * <p>ServiceNow parameters.</p>
     */
    inline DataSourceParameters& WithServiceNowParameters(const ServiceNowParameters& value) { SetServiceNowParameters(value); return *this;}

    /**
     * <p>ServiceNow parameters.</p>
     */
    inline DataSourceParameters& WithServiceNowParameters(ServiceNowParameters&& value) { SetServiceNowParameters(std::move(value)); return *this;}


    /**
     * <p>Snowflake parameters.</p>
     */
    inline const SnowflakeParameters& GetSnowflakeParameters() const{ return m_snowflakeParameters; }

    /**
     * <p>Snowflake parameters.</p>
     */
    inline bool SnowflakeParametersHasBeenSet() const { return m_snowflakeParametersHasBeenSet; }

    /**
     * <p>Snowflake parameters.</p>
     */
    inline void SetSnowflakeParameters(const SnowflakeParameters& value) { m_snowflakeParametersHasBeenSet = true; m_snowflakeParameters = value; }

    /**
     * <p>Snowflake parameters.</p>
     */
    inline void SetSnowflakeParameters(SnowflakeParameters&& value) { m_snowflakeParametersHasBeenSet = true; m_snowflakeParameters = std::move(value); }

    /**
     * <p>Snowflake parameters.</p>
     */
    inline DataSourceParameters& WithSnowflakeParameters(const SnowflakeParameters& value) { SetSnowflakeParameters(value); return *this;}

    /**
     * <p>Snowflake parameters.</p>
     */
    inline DataSourceParameters& WithSnowflakeParameters(SnowflakeParameters&& value) { SetSnowflakeParameters(std::move(value)); return *this;}


    /**
     * <p>Spark parameters.</p>
     */
    inline const SparkParameters& GetSparkParameters() const{ return m_sparkParameters; }

    /**
     * <p>Spark parameters.</p>
     */
    inline bool SparkParametersHasBeenSet() const { return m_sparkParametersHasBeenSet; }

    /**
     * <p>Spark parameters.</p>
     */
    inline void SetSparkParameters(const SparkParameters& value) { m_sparkParametersHasBeenSet = true; m_sparkParameters = value; }

    /**
     * <p>Spark parameters.</p>
     */
    inline void SetSparkParameters(SparkParameters&& value) { m_sparkParametersHasBeenSet = true; m_sparkParameters = std::move(value); }

    /**
     * <p>Spark parameters.</p>
     */
    inline DataSourceParameters& WithSparkParameters(const SparkParameters& value) { SetSparkParameters(value); return *this;}

    /**
     * <p>Spark parameters.</p>
     */
    inline DataSourceParameters& WithSparkParameters(SparkParameters&& value) { SetSparkParameters(std::move(value)); return *this;}


    /**
     * <p>SQL Server parameters.</p>
     */
    inline const SqlServerParameters& GetSqlServerParameters() const{ return m_sqlServerParameters; }

    /**
     * <p>SQL Server parameters.</p>
     */
    inline bool SqlServerParametersHasBeenSet() const { return m_sqlServerParametersHasBeenSet; }

    /**
     * <p>SQL Server parameters.</p>
     */
    inline void SetSqlServerParameters(const SqlServerParameters& value) { m_sqlServerParametersHasBeenSet = true; m_sqlServerParameters = value; }

    /**
     * <p>SQL Server parameters.</p>
     */
    inline void SetSqlServerParameters(SqlServerParameters&& value) { m_sqlServerParametersHasBeenSet = true; m_sqlServerParameters = std::move(value); }

    /**
     * <p>SQL Server parameters.</p>
     */
    inline DataSourceParameters& WithSqlServerParameters(const SqlServerParameters& value) { SetSqlServerParameters(value); return *this;}

    /**
     * <p>SQL Server parameters.</p>
     */
    inline DataSourceParameters& WithSqlServerParameters(SqlServerParameters&& value) { SetSqlServerParameters(std::move(value)); return *this;}


    /**
     * <p>Teradata parameters.</p>
     */
    inline const TeradataParameters& GetTeradataParameters() const{ return m_teradataParameters; }

    /**
     * <p>Teradata parameters.</p>
     */
    inline bool TeradataParametersHasBeenSet() const { return m_teradataParametersHasBeenSet; }

    /**
     * <p>Teradata parameters.</p>
     */
    inline void SetTeradataParameters(const TeradataParameters& value) { m_teradataParametersHasBeenSet = true; m_teradataParameters = value; }

    /**
     * <p>Teradata parameters.</p>
     */
    inline void SetTeradataParameters(TeradataParameters&& value) { m_teradataParametersHasBeenSet = true; m_teradataParameters = std::move(value); }

    /**
     * <p>Teradata parameters.</p>
     */
    inline DataSourceParameters& WithTeradataParameters(const TeradataParameters& value) { SetTeradataParameters(value); return *this;}

    /**
     * <p>Teradata parameters.</p>
     */
    inline DataSourceParameters& WithTeradataParameters(TeradataParameters&& value) { SetTeradataParameters(std::move(value)); return *this;}


    /**
     * <p>Twitter parameters.</p>
     */
    inline const TwitterParameters& GetTwitterParameters() const{ return m_twitterParameters; }

    /**
     * <p>Twitter parameters.</p>
     */
    inline bool TwitterParametersHasBeenSet() const { return m_twitterParametersHasBeenSet; }

    /**
     * <p>Twitter parameters.</p>
     */
    inline void SetTwitterParameters(const TwitterParameters& value) { m_twitterParametersHasBeenSet = true; m_twitterParameters = value; }

    /**
     * <p>Twitter parameters.</p>
     */
    inline void SetTwitterParameters(TwitterParameters&& value) { m_twitterParametersHasBeenSet = true; m_twitterParameters = std::move(value); }

    /**
     * <p>Twitter parameters.</p>
     */
    inline DataSourceParameters& WithTwitterParameters(const TwitterParameters& value) { SetTwitterParameters(value); return *this;}

    /**
     * <p>Twitter parameters.</p>
     */
    inline DataSourceParameters& WithTwitterParameters(TwitterParameters&& value) { SetTwitterParameters(std::move(value)); return *this;}

  private:

    AmazonElasticsearchParameters m_amazonElasticsearchParameters;
    bool m_amazonElasticsearchParametersHasBeenSet;

    AthenaParameters m_athenaParameters;
    bool m_athenaParametersHasBeenSet;

    AuroraParameters m_auroraParameters;
    bool m_auroraParametersHasBeenSet;

    AuroraPostgreSqlParameters m_auroraPostgreSqlParameters;
    bool m_auroraPostgreSqlParametersHasBeenSet;

    AwsIotAnalyticsParameters m_awsIotAnalyticsParameters;
    bool m_awsIotAnalyticsParametersHasBeenSet;

    JiraParameters m_jiraParameters;
    bool m_jiraParametersHasBeenSet;

    MariaDbParameters m_mariaDbParameters;
    bool m_mariaDbParametersHasBeenSet;

    MySqlParameters m_mySqlParameters;
    bool m_mySqlParametersHasBeenSet;

    PostgreSqlParameters m_postgreSqlParameters;
    bool m_postgreSqlParametersHasBeenSet;

    PrestoParameters m_prestoParameters;
    bool m_prestoParametersHasBeenSet;

    RdsParameters m_rdsParameters;
    bool m_rdsParametersHasBeenSet;

    RedshiftParameters m_redshiftParameters;
    bool m_redshiftParametersHasBeenSet;

    S3Parameters m_s3Parameters;
    bool m_s3ParametersHasBeenSet;

    ServiceNowParameters m_serviceNowParameters;
    bool m_serviceNowParametersHasBeenSet;

    SnowflakeParameters m_snowflakeParameters;
    bool m_snowflakeParametersHasBeenSet;

    SparkParameters m_sparkParameters;
    bool m_sparkParametersHasBeenSet;

    SqlServerParameters m_sqlServerParameters;
    bool m_sqlServerParametersHasBeenSet;

    TeradataParameters m_teradataParameters;
    bool m_teradataParametersHasBeenSet;

    TwitterParameters m_twitterParameters;
    bool m_twitterParametersHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
