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
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/PackageDetails.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ElasticsearchService
{
namespace Model
{
  /**
   * <p> Container for response parameters to <code> <a>DeletePackage</a> </code>
   * operation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DeletePackageResponse">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICSEARCHSERVICE_API DeletePackageResult
  {
  public:
    DeletePackageResult();
    DeletePackageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeletePackageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p><code>PackageDetails</code></p>
     */
    inline const PackageDetails& GetPackageDetails() const{ return m_packageDetails; }

    /**
     * <p><code>PackageDetails</code></p>
     */
    inline void SetPackageDetails(const PackageDetails& value) { m_packageDetails = value; }

    /**
     * <p><code>PackageDetails</code></p>
     */
    inline void SetPackageDetails(PackageDetails&& value) { m_packageDetails = std::move(value); }

    /**
     * <p><code>PackageDetails</code></p>
     */
    inline DeletePackageResult& WithPackageDetails(const PackageDetails& value) { SetPackageDetails(value); return *this;}

    /**
     * <p><code>PackageDetails</code></p>
     */
    inline DeletePackageResult& WithPackageDetails(PackageDetails&& value) { SetPackageDetails(std::move(value)); return *this;}

  private:

    PackageDetails m_packageDetails;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
