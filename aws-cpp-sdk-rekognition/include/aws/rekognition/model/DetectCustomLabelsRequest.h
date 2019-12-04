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
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/Image.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class AWS_REKOGNITION_API DetectCustomLabelsRequest : public RekognitionRequest
  {
  public:
    DetectCustomLabelsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetectCustomLabels"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the model version that you want to use.</p>
     */
    inline const Aws::String& GetProjectVersionArn() const{ return m_projectVersionArn; }

    /**
     * <p>The ARN of the model version that you want to use.</p>
     */
    inline bool ProjectVersionArnHasBeenSet() const { return m_projectVersionArnHasBeenSet; }

    /**
     * <p>The ARN of the model version that you want to use.</p>
     */
    inline void SetProjectVersionArn(const Aws::String& value) { m_projectVersionArnHasBeenSet = true; m_projectVersionArn = value; }

    /**
     * <p>The ARN of the model version that you want to use.</p>
     */
    inline void SetProjectVersionArn(Aws::String&& value) { m_projectVersionArnHasBeenSet = true; m_projectVersionArn = std::move(value); }

    /**
     * <p>The ARN of the model version that you want to use.</p>
     */
    inline void SetProjectVersionArn(const char* value) { m_projectVersionArnHasBeenSet = true; m_projectVersionArn.assign(value); }

    /**
     * <p>The ARN of the model version that you want to use.</p>
     */
    inline DetectCustomLabelsRequest& WithProjectVersionArn(const Aws::String& value) { SetProjectVersionArn(value); return *this;}

    /**
     * <p>The ARN of the model version that you want to use.</p>
     */
    inline DetectCustomLabelsRequest& WithProjectVersionArn(Aws::String&& value) { SetProjectVersionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the model version that you want to use.</p>
     */
    inline DetectCustomLabelsRequest& WithProjectVersionArn(const char* value) { SetProjectVersionArn(value); return *this;}


    
    inline const Image& GetImage() const{ return m_image; }

    
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }

    
    inline void SetImage(const Image& value) { m_imageHasBeenSet = true; m_image = value; }

    
    inline void SetImage(Image&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }

    
    inline DetectCustomLabelsRequest& WithImage(const Image& value) { SetImage(value); return *this;}

    
    inline DetectCustomLabelsRequest& WithImage(Image&& value) { SetImage(std::move(value)); return *this;}


    /**
     * <p>Maximum number of results you want the service to return in the response. The
     * service returns the specified number of highest confidence labels ranked from
     * highest confidence to lowest.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum number of results you want the service to return in the response. The
     * service returns the specified number of highest confidence labels ranked from
     * highest confidence to lowest.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Maximum number of results you want the service to return in the response. The
     * service returns the specified number of highest confidence labels ranked from
     * highest confidence to lowest.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum number of results you want the service to return in the response. The
     * service returns the specified number of highest confidence labels ranked from
     * highest confidence to lowest.</p>
     */
    inline DetectCustomLabelsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Specifies the minimum confidence level for the labels to return. Amazon
     * Rekognition doesn't return any labels with a confidence lower than this
     * specified value. If you specify a value of 0, all labels are return, regardless
     * of the default thresholds that the model version applies.</p>
     */
    inline double GetMinConfidence() const{ return m_minConfidence; }

    /**
     * <p>Specifies the minimum confidence level for the labels to return. Amazon
     * Rekognition doesn't return any labels with a confidence lower than this
     * specified value. If you specify a value of 0, all labels are return, regardless
     * of the default thresholds that the model version applies.</p>
     */
    inline bool MinConfidenceHasBeenSet() const { return m_minConfidenceHasBeenSet; }

    /**
     * <p>Specifies the minimum confidence level for the labels to return. Amazon
     * Rekognition doesn't return any labels with a confidence lower than this
     * specified value. If you specify a value of 0, all labels are return, regardless
     * of the default thresholds that the model version applies.</p>
     */
    inline void SetMinConfidence(double value) { m_minConfidenceHasBeenSet = true; m_minConfidence = value; }

    /**
     * <p>Specifies the minimum confidence level for the labels to return. Amazon
     * Rekognition doesn't return any labels with a confidence lower than this
     * specified value. If you specify a value of 0, all labels are return, regardless
     * of the default thresholds that the model version applies.</p>
     */
    inline DetectCustomLabelsRequest& WithMinConfidence(double value) { SetMinConfidence(value); return *this;}

  private:

    Aws::String m_projectVersionArn;
    bool m_projectVersionArnHasBeenSet;

    Image m_image;
    bool m_imageHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    double m_minConfidence;
    bool m_minConfidenceHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
