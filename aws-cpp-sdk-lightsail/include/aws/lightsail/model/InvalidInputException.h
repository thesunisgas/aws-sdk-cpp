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
#include <aws/lightsail/Lightsail_EXPORTS.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Lightsail throws this exception when user input does not conform to the
   * validation rules of an input field.</p> <note> <p>Domain-related APIs are only
   * available in the N. Virginia (us-east-1) Region. Please set your AWS Region
   * configuration to us-east-1 to create, view, or edit these resources.</p>
   * </note><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/InvalidInputException">AWS
   * API Reference</a></p>
   */
  class AWS_LIGHTSAIL_API InvalidInputException
  {
  public:
    InvalidInputException();
    InvalidInputException(Aws::Utils::Json::JsonView jsonValue);
    InvalidInputException& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetCode() const{ return m_code; }

    
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    
    inline InvalidInputException& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    
    inline InvalidInputException& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    
    inline InvalidInputException& WithCode(const char* value) { SetCode(value); return *this;}


    
    inline const Aws::String& GetDocs() const{ return m_docs; }

    
    inline bool DocsHasBeenSet() const { return m_docsHasBeenSet; }

    
    inline void SetDocs(const Aws::String& value) { m_docsHasBeenSet = true; m_docs = value; }

    
    inline void SetDocs(Aws::String&& value) { m_docsHasBeenSet = true; m_docs = std::move(value); }

    
    inline void SetDocs(const char* value) { m_docsHasBeenSet = true; m_docs.assign(value); }

    
    inline InvalidInputException& WithDocs(const Aws::String& value) { SetDocs(value); return *this;}

    
    inline InvalidInputException& WithDocs(Aws::String&& value) { SetDocs(std::move(value)); return *this;}

    
    inline InvalidInputException& WithDocs(const char* value) { SetDocs(value); return *this;}


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline InvalidInputException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline InvalidInputException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline InvalidInputException& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const Aws::String& GetTip() const{ return m_tip; }

    
    inline bool TipHasBeenSet() const { return m_tipHasBeenSet; }

    
    inline void SetTip(const Aws::String& value) { m_tipHasBeenSet = true; m_tip = value; }

    
    inline void SetTip(Aws::String&& value) { m_tipHasBeenSet = true; m_tip = std::move(value); }

    
    inline void SetTip(const char* value) { m_tipHasBeenSet = true; m_tip.assign(value); }

    
    inline InvalidInputException& WithTip(const Aws::String& value) { SetTip(value); return *this;}

    
    inline InvalidInputException& WithTip(Aws::String&& value) { SetTip(std::move(value)); return *this;}

    
    inline InvalidInputException& WithTip(const char* value) { SetTip(value); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet;

    Aws::String m_docs;
    bool m_docsHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::String m_tip;
    bool m_tipHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
