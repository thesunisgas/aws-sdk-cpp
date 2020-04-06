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
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/TranscribeServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

  /**
   */
  class AWS_TRANSCRIBESERVICE_API DeleteMedicalTranscriptionJobRequest : public TranscribeServiceRequest
  {
  public:
    DeleteMedicalTranscriptionJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteMedicalTranscriptionJob"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name you provide to the <code>DeleteMedicalTranscriptionJob</code> object
     * to delete a transcription job.</p>
     */
    inline const Aws::String& GetMedicalTranscriptionJobName() const{ return m_medicalTranscriptionJobName; }

    /**
     * <p>The name you provide to the <code>DeleteMedicalTranscriptionJob</code> object
     * to delete a transcription job.</p>
     */
    inline bool MedicalTranscriptionJobNameHasBeenSet() const { return m_medicalTranscriptionJobNameHasBeenSet; }

    /**
     * <p>The name you provide to the <code>DeleteMedicalTranscriptionJob</code> object
     * to delete a transcription job.</p>
     */
    inline void SetMedicalTranscriptionJobName(const Aws::String& value) { m_medicalTranscriptionJobNameHasBeenSet = true; m_medicalTranscriptionJobName = value; }

    /**
     * <p>The name you provide to the <code>DeleteMedicalTranscriptionJob</code> object
     * to delete a transcription job.</p>
     */
    inline void SetMedicalTranscriptionJobName(Aws::String&& value) { m_medicalTranscriptionJobNameHasBeenSet = true; m_medicalTranscriptionJobName = std::move(value); }

    /**
     * <p>The name you provide to the <code>DeleteMedicalTranscriptionJob</code> object
     * to delete a transcription job.</p>
     */
    inline void SetMedicalTranscriptionJobName(const char* value) { m_medicalTranscriptionJobNameHasBeenSet = true; m_medicalTranscriptionJobName.assign(value); }

    /**
     * <p>The name you provide to the <code>DeleteMedicalTranscriptionJob</code> object
     * to delete a transcription job.</p>
     */
    inline DeleteMedicalTranscriptionJobRequest& WithMedicalTranscriptionJobName(const Aws::String& value) { SetMedicalTranscriptionJobName(value); return *this;}

    /**
     * <p>The name you provide to the <code>DeleteMedicalTranscriptionJob</code> object
     * to delete a transcription job.</p>
     */
    inline DeleteMedicalTranscriptionJobRequest& WithMedicalTranscriptionJobName(Aws::String&& value) { SetMedicalTranscriptionJobName(std::move(value)); return *this;}

    /**
     * <p>The name you provide to the <code>DeleteMedicalTranscriptionJob</code> object
     * to delete a transcription job.</p>
     */
    inline DeleteMedicalTranscriptionJobRequest& WithMedicalTranscriptionJobName(const char* value) { SetMedicalTranscriptionJobName(value); return *this;}

  private:

    Aws::String m_medicalTranscriptionJobName;
    bool m_medicalTranscriptionJobNameHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
