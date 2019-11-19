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
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/ConformancePackInputParameter.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class AWS_CONFIGSERVICE_API PutConformancePackRequest : public ConfigServiceRequest
  {
  public:
    PutConformancePackRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutConformancePack"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Name of the conformance pack you want to create.</p>
     */
    inline const Aws::String& GetConformancePackName() const{ return m_conformancePackName; }

    /**
     * <p>Name of the conformance pack you want to create.</p>
     */
    inline bool ConformancePackNameHasBeenSet() const { return m_conformancePackNameHasBeenSet; }

    /**
     * <p>Name of the conformance pack you want to create.</p>
     */
    inline void SetConformancePackName(const Aws::String& value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName = value; }

    /**
     * <p>Name of the conformance pack you want to create.</p>
     */
    inline void SetConformancePackName(Aws::String&& value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName = std::move(value); }

    /**
     * <p>Name of the conformance pack you want to create.</p>
     */
    inline void SetConformancePackName(const char* value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName.assign(value); }

    /**
     * <p>Name of the conformance pack you want to create.</p>
     */
    inline PutConformancePackRequest& WithConformancePackName(const Aws::String& value) { SetConformancePackName(value); return *this;}

    /**
     * <p>Name of the conformance pack you want to create.</p>
     */
    inline PutConformancePackRequest& WithConformancePackName(Aws::String&& value) { SetConformancePackName(std::move(value)); return *this;}

    /**
     * <p>Name of the conformance pack you want to create.</p>
     */
    inline PutConformancePackRequest& WithConformancePackName(const char* value) { SetConformancePackName(value); return *this;}


    /**
     * <p>Location of file containing the template body. The uri must point to the
     * conformance pack template (max size: 300,000 bytes) that is located in an Amazon
     * S3 bucket in the same region as the conformance pack.</p> <note> <p>You must
     * have access to read Amazon S3 bucket.</p> </note>
     */
    inline const Aws::String& GetTemplateS3Uri() const{ return m_templateS3Uri; }

    /**
     * <p>Location of file containing the template body. The uri must point to the
     * conformance pack template (max size: 300,000 bytes) that is located in an Amazon
     * S3 bucket in the same region as the conformance pack.</p> <note> <p>You must
     * have access to read Amazon S3 bucket.</p> </note>
     */
    inline bool TemplateS3UriHasBeenSet() const { return m_templateS3UriHasBeenSet; }

    /**
     * <p>Location of file containing the template body. The uri must point to the
     * conformance pack template (max size: 300,000 bytes) that is located in an Amazon
     * S3 bucket in the same region as the conformance pack.</p> <note> <p>You must
     * have access to read Amazon S3 bucket.</p> </note>
     */
    inline void SetTemplateS3Uri(const Aws::String& value) { m_templateS3UriHasBeenSet = true; m_templateS3Uri = value; }

    /**
     * <p>Location of file containing the template body. The uri must point to the
     * conformance pack template (max size: 300,000 bytes) that is located in an Amazon
     * S3 bucket in the same region as the conformance pack.</p> <note> <p>You must
     * have access to read Amazon S3 bucket.</p> </note>
     */
    inline void SetTemplateS3Uri(Aws::String&& value) { m_templateS3UriHasBeenSet = true; m_templateS3Uri = std::move(value); }

    /**
     * <p>Location of file containing the template body. The uri must point to the
     * conformance pack template (max size: 300,000 bytes) that is located in an Amazon
     * S3 bucket in the same region as the conformance pack.</p> <note> <p>You must
     * have access to read Amazon S3 bucket.</p> </note>
     */
    inline void SetTemplateS3Uri(const char* value) { m_templateS3UriHasBeenSet = true; m_templateS3Uri.assign(value); }

    /**
     * <p>Location of file containing the template body. The uri must point to the
     * conformance pack template (max size: 300,000 bytes) that is located in an Amazon
     * S3 bucket in the same region as the conformance pack.</p> <note> <p>You must
     * have access to read Amazon S3 bucket.</p> </note>
     */
    inline PutConformancePackRequest& WithTemplateS3Uri(const Aws::String& value) { SetTemplateS3Uri(value); return *this;}

    /**
     * <p>Location of file containing the template body. The uri must point to the
     * conformance pack template (max size: 300,000 bytes) that is located in an Amazon
     * S3 bucket in the same region as the conformance pack.</p> <note> <p>You must
     * have access to read Amazon S3 bucket.</p> </note>
     */
    inline PutConformancePackRequest& WithTemplateS3Uri(Aws::String&& value) { SetTemplateS3Uri(std::move(value)); return *this;}

    /**
     * <p>Location of file containing the template body. The uri must point to the
     * conformance pack template (max size: 300,000 bytes) that is located in an Amazon
     * S3 bucket in the same region as the conformance pack.</p> <note> <p>You must
     * have access to read Amazon S3 bucket.</p> </note>
     */
    inline PutConformancePackRequest& WithTemplateS3Uri(const char* value) { SetTemplateS3Uri(value); return *this;}


    /**
     * <p>A string containing full conformance pack template body. Structure containing
     * the template body with a minimum length of 1 byte and a maximum length of 51,200
     * bytes.</p> <note> <p>You can only use a YAML template with one resource type,
     * that is, config rule.</p> </note>
     */
    inline const Aws::String& GetTemplateBody() const{ return m_templateBody; }

    /**
     * <p>A string containing full conformance pack template body. Structure containing
     * the template body with a minimum length of 1 byte and a maximum length of 51,200
     * bytes.</p> <note> <p>You can only use a YAML template with one resource type,
     * that is, config rule.</p> </note>
     */
    inline bool TemplateBodyHasBeenSet() const { return m_templateBodyHasBeenSet; }

    /**
     * <p>A string containing full conformance pack template body. Structure containing
     * the template body with a minimum length of 1 byte and a maximum length of 51,200
     * bytes.</p> <note> <p>You can only use a YAML template with one resource type,
     * that is, config rule.</p> </note>
     */
    inline void SetTemplateBody(const Aws::String& value) { m_templateBodyHasBeenSet = true; m_templateBody = value; }

    /**
     * <p>A string containing full conformance pack template body. Structure containing
     * the template body with a minimum length of 1 byte and a maximum length of 51,200
     * bytes.</p> <note> <p>You can only use a YAML template with one resource type,
     * that is, config rule.</p> </note>
     */
    inline void SetTemplateBody(Aws::String&& value) { m_templateBodyHasBeenSet = true; m_templateBody = std::move(value); }

    /**
     * <p>A string containing full conformance pack template body. Structure containing
     * the template body with a minimum length of 1 byte and a maximum length of 51,200
     * bytes.</p> <note> <p>You can only use a YAML template with one resource type,
     * that is, config rule.</p> </note>
     */
    inline void SetTemplateBody(const char* value) { m_templateBodyHasBeenSet = true; m_templateBody.assign(value); }

    /**
     * <p>A string containing full conformance pack template body. Structure containing
     * the template body with a minimum length of 1 byte and a maximum length of 51,200
     * bytes.</p> <note> <p>You can only use a YAML template with one resource type,
     * that is, config rule.</p> </note>
     */
    inline PutConformancePackRequest& WithTemplateBody(const Aws::String& value) { SetTemplateBody(value); return *this;}

    /**
     * <p>A string containing full conformance pack template body. Structure containing
     * the template body with a minimum length of 1 byte and a maximum length of 51,200
     * bytes.</p> <note> <p>You can only use a YAML template with one resource type,
     * that is, config rule.</p> </note>
     */
    inline PutConformancePackRequest& WithTemplateBody(Aws::String&& value) { SetTemplateBody(std::move(value)); return *this;}

    /**
     * <p>A string containing full conformance pack template body. Structure containing
     * the template body with a minimum length of 1 byte and a maximum length of 51,200
     * bytes.</p> <note> <p>You can only use a YAML template with one resource type,
     * that is, config rule.</p> </note>
     */
    inline PutConformancePackRequest& WithTemplateBody(const char* value) { SetTemplateBody(value); return *this;}


    /**
     * <p>Location of an Amazon S3 bucket where AWS Config can deliver evaluation
     * results. AWS Config stores intermediate files while processing conformance pack
     * template.</p>
     */
    inline const Aws::String& GetDeliveryS3Bucket() const{ return m_deliveryS3Bucket; }

    /**
     * <p>Location of an Amazon S3 bucket where AWS Config can deliver evaluation
     * results. AWS Config stores intermediate files while processing conformance pack
     * template.</p>
     */
    inline bool DeliveryS3BucketHasBeenSet() const { return m_deliveryS3BucketHasBeenSet; }

    /**
     * <p>Location of an Amazon S3 bucket where AWS Config can deliver evaluation
     * results. AWS Config stores intermediate files while processing conformance pack
     * template.</p>
     */
    inline void SetDeliveryS3Bucket(const Aws::String& value) { m_deliveryS3BucketHasBeenSet = true; m_deliveryS3Bucket = value; }

    /**
     * <p>Location of an Amazon S3 bucket where AWS Config can deliver evaluation
     * results. AWS Config stores intermediate files while processing conformance pack
     * template.</p>
     */
    inline void SetDeliveryS3Bucket(Aws::String&& value) { m_deliveryS3BucketHasBeenSet = true; m_deliveryS3Bucket = std::move(value); }

    /**
     * <p>Location of an Amazon S3 bucket where AWS Config can deliver evaluation
     * results. AWS Config stores intermediate files while processing conformance pack
     * template.</p>
     */
    inline void SetDeliveryS3Bucket(const char* value) { m_deliveryS3BucketHasBeenSet = true; m_deliveryS3Bucket.assign(value); }

    /**
     * <p>Location of an Amazon S3 bucket where AWS Config can deliver evaluation
     * results. AWS Config stores intermediate files while processing conformance pack
     * template.</p>
     */
    inline PutConformancePackRequest& WithDeliveryS3Bucket(const Aws::String& value) { SetDeliveryS3Bucket(value); return *this;}

    /**
     * <p>Location of an Amazon S3 bucket where AWS Config can deliver evaluation
     * results. AWS Config stores intermediate files while processing conformance pack
     * template.</p>
     */
    inline PutConformancePackRequest& WithDeliveryS3Bucket(Aws::String&& value) { SetDeliveryS3Bucket(std::move(value)); return *this;}

    /**
     * <p>Location of an Amazon S3 bucket where AWS Config can deliver evaluation
     * results. AWS Config stores intermediate files while processing conformance pack
     * template.</p>
     */
    inline PutConformancePackRequest& WithDeliveryS3Bucket(const char* value) { SetDeliveryS3Bucket(value); return *this;}


    /**
     * <p>The prefix for the Amazon S3 bucket. </p>
     */
    inline const Aws::String& GetDeliveryS3KeyPrefix() const{ return m_deliveryS3KeyPrefix; }

    /**
     * <p>The prefix for the Amazon S3 bucket. </p>
     */
    inline bool DeliveryS3KeyPrefixHasBeenSet() const { return m_deliveryS3KeyPrefixHasBeenSet; }

    /**
     * <p>The prefix for the Amazon S3 bucket. </p>
     */
    inline void SetDeliveryS3KeyPrefix(const Aws::String& value) { m_deliveryS3KeyPrefixHasBeenSet = true; m_deliveryS3KeyPrefix = value; }

    /**
     * <p>The prefix for the Amazon S3 bucket. </p>
     */
    inline void SetDeliveryS3KeyPrefix(Aws::String&& value) { m_deliveryS3KeyPrefixHasBeenSet = true; m_deliveryS3KeyPrefix = std::move(value); }

    /**
     * <p>The prefix for the Amazon S3 bucket. </p>
     */
    inline void SetDeliveryS3KeyPrefix(const char* value) { m_deliveryS3KeyPrefixHasBeenSet = true; m_deliveryS3KeyPrefix.assign(value); }

    /**
     * <p>The prefix for the Amazon S3 bucket. </p>
     */
    inline PutConformancePackRequest& WithDeliveryS3KeyPrefix(const Aws::String& value) { SetDeliveryS3KeyPrefix(value); return *this;}

    /**
     * <p>The prefix for the Amazon S3 bucket. </p>
     */
    inline PutConformancePackRequest& WithDeliveryS3KeyPrefix(Aws::String&& value) { SetDeliveryS3KeyPrefix(std::move(value)); return *this;}

    /**
     * <p>The prefix for the Amazon S3 bucket. </p>
     */
    inline PutConformancePackRequest& WithDeliveryS3KeyPrefix(const char* value) { SetDeliveryS3KeyPrefix(value); return *this;}


    /**
     * <p>A list of <code>ConformancePackInputParameter</code> objects.</p>
     */
    inline const Aws::Vector<ConformancePackInputParameter>& GetConformancePackInputParameters() const{ return m_conformancePackInputParameters; }

    /**
     * <p>A list of <code>ConformancePackInputParameter</code> objects.</p>
     */
    inline bool ConformancePackInputParametersHasBeenSet() const { return m_conformancePackInputParametersHasBeenSet; }

    /**
     * <p>A list of <code>ConformancePackInputParameter</code> objects.</p>
     */
    inline void SetConformancePackInputParameters(const Aws::Vector<ConformancePackInputParameter>& value) { m_conformancePackInputParametersHasBeenSet = true; m_conformancePackInputParameters = value; }

    /**
     * <p>A list of <code>ConformancePackInputParameter</code> objects.</p>
     */
    inline void SetConformancePackInputParameters(Aws::Vector<ConformancePackInputParameter>&& value) { m_conformancePackInputParametersHasBeenSet = true; m_conformancePackInputParameters = std::move(value); }

    /**
     * <p>A list of <code>ConformancePackInputParameter</code> objects.</p>
     */
    inline PutConformancePackRequest& WithConformancePackInputParameters(const Aws::Vector<ConformancePackInputParameter>& value) { SetConformancePackInputParameters(value); return *this;}

    /**
     * <p>A list of <code>ConformancePackInputParameter</code> objects.</p>
     */
    inline PutConformancePackRequest& WithConformancePackInputParameters(Aws::Vector<ConformancePackInputParameter>&& value) { SetConformancePackInputParameters(std::move(value)); return *this;}

    /**
     * <p>A list of <code>ConformancePackInputParameter</code> objects.</p>
     */
    inline PutConformancePackRequest& AddConformancePackInputParameters(const ConformancePackInputParameter& value) { m_conformancePackInputParametersHasBeenSet = true; m_conformancePackInputParameters.push_back(value); return *this; }

    /**
     * <p>A list of <code>ConformancePackInputParameter</code> objects.</p>
     */
    inline PutConformancePackRequest& AddConformancePackInputParameters(ConformancePackInputParameter&& value) { m_conformancePackInputParametersHasBeenSet = true; m_conformancePackInputParameters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_conformancePackName;
    bool m_conformancePackNameHasBeenSet;

    Aws::String m_templateS3Uri;
    bool m_templateS3UriHasBeenSet;

    Aws::String m_templateBody;
    bool m_templateBodyHasBeenSet;

    Aws::String m_deliveryS3Bucket;
    bool m_deliveryS3BucketHasBeenSet;

    Aws::String m_deliveryS3KeyPrefix;
    bool m_deliveryS3KeyPrefixHasBeenSet;

    Aws::Vector<ConformancePackInputParameter> m_conformancePackInputParameters;
    bool m_conformancePackInputParametersHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
