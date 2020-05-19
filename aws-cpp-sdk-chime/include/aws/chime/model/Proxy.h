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
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Chime
{
namespace Model
{

  class AWS_CHIME_API Proxy
  {
  public:
    Proxy();
    Proxy(Aws::Utils::Json::JsonView jsonValue);
    Proxy& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline int GetDefaultSessionExpiryMinutes() const{ return m_defaultSessionExpiryMinutes; }

    
    inline bool DefaultSessionExpiryMinutesHasBeenSet() const { return m_defaultSessionExpiryMinutesHasBeenSet; }

    
    inline void SetDefaultSessionExpiryMinutes(int value) { m_defaultSessionExpiryMinutesHasBeenSet = true; m_defaultSessionExpiryMinutes = value; }

    
    inline Proxy& WithDefaultSessionExpiryMinutes(int value) { SetDefaultSessionExpiryMinutes(value); return *this;}


    
    inline bool GetDisabled() const{ return m_disabled; }

    
    inline bool DisabledHasBeenSet() const { return m_disabledHasBeenSet; }

    
    inline void SetDisabled(bool value) { m_disabledHasBeenSet = true; m_disabled = value; }

    
    inline Proxy& WithDisabled(bool value) { SetDisabled(value); return *this;}


    
    inline const Aws::String& GetFallBackPhoneNumber() const{ return m_fallBackPhoneNumber; }

    
    inline bool FallBackPhoneNumberHasBeenSet() const { return m_fallBackPhoneNumberHasBeenSet; }

    
    inline void SetFallBackPhoneNumber(const Aws::String& value) { m_fallBackPhoneNumberHasBeenSet = true; m_fallBackPhoneNumber = value; }

    
    inline void SetFallBackPhoneNumber(Aws::String&& value) { m_fallBackPhoneNumberHasBeenSet = true; m_fallBackPhoneNumber = std::move(value); }

    
    inline void SetFallBackPhoneNumber(const char* value) { m_fallBackPhoneNumberHasBeenSet = true; m_fallBackPhoneNumber.assign(value); }

    
    inline Proxy& WithFallBackPhoneNumber(const Aws::String& value) { SetFallBackPhoneNumber(value); return *this;}

    
    inline Proxy& WithFallBackPhoneNumber(Aws::String&& value) { SetFallBackPhoneNumber(std::move(value)); return *this;}

    
    inline Proxy& WithFallBackPhoneNumber(const char* value) { SetFallBackPhoneNumber(value); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetPhoneNumberCountries() const{ return m_phoneNumberCountries; }

    
    inline bool PhoneNumberCountriesHasBeenSet() const { return m_phoneNumberCountriesHasBeenSet; }

    
    inline void SetPhoneNumberCountries(const Aws::Vector<Aws::String>& value) { m_phoneNumberCountriesHasBeenSet = true; m_phoneNumberCountries = value; }

    
    inline void SetPhoneNumberCountries(Aws::Vector<Aws::String>&& value) { m_phoneNumberCountriesHasBeenSet = true; m_phoneNumberCountries = std::move(value); }

    
    inline Proxy& WithPhoneNumberCountries(const Aws::Vector<Aws::String>& value) { SetPhoneNumberCountries(value); return *this;}

    
    inline Proxy& WithPhoneNumberCountries(Aws::Vector<Aws::String>&& value) { SetPhoneNumberCountries(std::move(value)); return *this;}

    
    inline Proxy& AddPhoneNumberCountries(const Aws::String& value) { m_phoneNumberCountriesHasBeenSet = true; m_phoneNumberCountries.push_back(value); return *this; }

    
    inline Proxy& AddPhoneNumberCountries(Aws::String&& value) { m_phoneNumberCountriesHasBeenSet = true; m_phoneNumberCountries.push_back(std::move(value)); return *this; }

    
    inline Proxy& AddPhoneNumberCountries(const char* value) { m_phoneNumberCountriesHasBeenSet = true; m_phoneNumberCountries.push_back(value); return *this; }

  private:

    int m_defaultSessionExpiryMinutes;
    bool m_defaultSessionExpiryMinutesHasBeenSet;

    bool m_disabled;
    bool m_disabledHasBeenSet;

    Aws::String m_fallBackPhoneNumber;
    bool m_fallBackPhoneNumberHasBeenSet;

    Aws::Vector<Aws::String> m_phoneNumberCountries;
    bool m_phoneNumberCountriesHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
