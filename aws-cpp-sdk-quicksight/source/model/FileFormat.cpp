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

#include <aws/quicksight/model/FileFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace FileFormatMapper
      {

        static const int CSV_HASH = HashingUtils::HashString("CSV");
        static const int TSV_HASH = HashingUtils::HashString("TSV");
        static const int CLF_HASH = HashingUtils::HashString("CLF");
        static const int ELF_HASH = HashingUtils::HashString("ELF");
        static const int XLSX_HASH = HashingUtils::HashString("XLSX");
        static const int JSON_HASH = HashingUtils::HashString("JSON");


        FileFormat GetFileFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CSV_HASH)
          {
            return FileFormat::CSV;
          }
          else if (hashCode == TSV_HASH)
          {
            return FileFormat::TSV;
          }
          else if (hashCode == CLF_HASH)
          {
            return FileFormat::CLF;
          }
          else if (hashCode == ELF_HASH)
          {
            return FileFormat::ELF;
          }
          else if (hashCode == XLSX_HASH)
          {
            return FileFormat::XLSX;
          }
          else if (hashCode == JSON_HASH)
          {
            return FileFormat::JSON;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FileFormat>(hashCode);
          }

          return FileFormat::NOT_SET;
        }

        Aws::String GetNameForFileFormat(FileFormat enumValue)
        {
          switch(enumValue)
          {
          case FileFormat::CSV:
            return "CSV";
          case FileFormat::TSV:
            return "TSV";
          case FileFormat::CLF:
            return "CLF";
          case FileFormat::ELF:
            return "ELF";
          case FileFormat::XLSX:
            return "XLSX";
          case FileFormat::JSON:
            return "JSON";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FileFormatMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
