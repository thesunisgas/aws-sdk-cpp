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
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/Ami.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>The resources produced by this image. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/OutputResources">AWS
   * API Reference</a></p>
   */
  class AWS_IMAGEBUILDER_API OutputResources
  {
  public:
    OutputResources();
    OutputResources(Aws::Utils::Json::JsonView jsonValue);
    OutputResources& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The EC2 AMIs created by this image. </p>
     */
    inline const Aws::Vector<Ami>& GetAmis() const{ return m_amis; }

    /**
     * <p>The EC2 AMIs created by this image. </p>
     */
    inline bool AmisHasBeenSet() const { return m_amisHasBeenSet; }

    /**
     * <p>The EC2 AMIs created by this image. </p>
     */
    inline void SetAmis(const Aws::Vector<Ami>& value) { m_amisHasBeenSet = true; m_amis = value; }

    /**
     * <p>The EC2 AMIs created by this image. </p>
     */
    inline void SetAmis(Aws::Vector<Ami>&& value) { m_amisHasBeenSet = true; m_amis = std::move(value); }

    /**
     * <p>The EC2 AMIs created by this image. </p>
     */
    inline OutputResources& WithAmis(const Aws::Vector<Ami>& value) { SetAmis(value); return *this;}

    /**
     * <p>The EC2 AMIs created by this image. </p>
     */
    inline OutputResources& WithAmis(Aws::Vector<Ami>&& value) { SetAmis(std::move(value)); return *this;}

    /**
     * <p>The EC2 AMIs created by this image. </p>
     */
    inline OutputResources& AddAmis(const Ami& value) { m_amisHasBeenSet = true; m_amis.push_back(value); return *this; }

    /**
     * <p>The EC2 AMIs created by this image. </p>
     */
    inline OutputResources& AddAmis(Ami&& value) { m_amisHasBeenSet = true; m_amis.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Ami> m_amis;
    bool m_amisHasBeenSet;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
