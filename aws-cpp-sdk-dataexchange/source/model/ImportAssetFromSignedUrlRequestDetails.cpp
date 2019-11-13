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

#include <aws/dataexchange/model/ImportAssetFromSignedUrlRequestDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataExchange
{
namespace Model
{

ImportAssetFromSignedUrlRequestDetails::ImportAssetFromSignedUrlRequestDetails() : 
    m_assetNameHasBeenSet(false),
    m_dataSetIdHasBeenSet(false),
    m_md5HashHasBeenSet(false),
    m_revisionIdHasBeenSet(false)
{
}

ImportAssetFromSignedUrlRequestDetails::ImportAssetFromSignedUrlRequestDetails(JsonView jsonValue) : 
    m_assetNameHasBeenSet(false),
    m_dataSetIdHasBeenSet(false),
    m_md5HashHasBeenSet(false),
    m_revisionIdHasBeenSet(false)
{
  *this = jsonValue;
}

ImportAssetFromSignedUrlRequestDetails& ImportAssetFromSignedUrlRequestDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AssetName"))
  {
    m_assetName = jsonValue.GetString("AssetName");

    m_assetNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSetId"))
  {
    m_dataSetId = jsonValue.GetString("DataSetId");

    m_dataSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Md5Hash"))
  {
    m_md5Hash = jsonValue.GetString("Md5Hash");

    m_md5HashHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RevisionId"))
  {
    m_revisionId = jsonValue.GetString("RevisionId");

    m_revisionIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ImportAssetFromSignedUrlRequestDetails::Jsonize() const
{
  JsonValue payload;

  if(m_assetNameHasBeenSet)
  {
   payload.WithString("AssetName", m_assetName);

  }

  if(m_dataSetIdHasBeenSet)
  {
   payload.WithString("DataSetId", m_dataSetId);

  }

  if(m_md5HashHasBeenSet)
  {
   payload.WithString("Md5Hash", m_md5Hash);

  }

  if(m_revisionIdHasBeenSet)
  {
   payload.WithString("RevisionId", m_revisionId);

  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
