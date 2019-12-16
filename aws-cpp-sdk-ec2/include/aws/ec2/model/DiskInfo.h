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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/DiskType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the disk.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DiskInfo">AWS API
   * Reference</a></p>
   */
  class AWS_EC2_API DiskInfo
  {
  public:
    DiskInfo();
    DiskInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    DiskInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The size of the disk in GB.</p>
     */
    inline long long GetSizeInGB() const{ return m_sizeInGB; }

    /**
     * <p>The size of the disk in GB.</p>
     */
    inline bool SizeInGBHasBeenSet() const { return m_sizeInGBHasBeenSet; }

    /**
     * <p>The size of the disk in GB.</p>
     */
    inline void SetSizeInGB(long long value) { m_sizeInGBHasBeenSet = true; m_sizeInGB = value; }

    /**
     * <p>The size of the disk in GB.</p>
     */
    inline DiskInfo& WithSizeInGB(long long value) { SetSizeInGB(value); return *this;}


    /**
     * <p>The number of disks with this configuration.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>The number of disks with this configuration.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The number of disks with this configuration.</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The number of disks with this configuration.</p>
     */
    inline DiskInfo& WithCount(int value) { SetCount(value); return *this;}


    /**
     * <p>The type of disk.</p>
     */
    inline const DiskType& GetType() const{ return m_type; }

    /**
     * <p>The type of disk.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of disk.</p>
     */
    inline void SetType(const DiskType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of disk.</p>
     */
    inline void SetType(DiskType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of disk.</p>
     */
    inline DiskInfo& WithType(const DiskType& value) { SetType(value); return *this;}

    /**
     * <p>The type of disk.</p>
     */
    inline DiskInfo& WithType(DiskType&& value) { SetType(std::move(value)); return *this;}

  private:

    long long m_sizeInGB;
    bool m_sizeInGBHasBeenSet;

    int m_count;
    bool m_countHasBeenSet;

    DiskType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
