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
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AdHocFilteringOption.h>
#include <aws/quicksight/model/ExportToCSVOption.h>
#include <aws/quicksight/model/SheetControlsOption.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Dashboard publish options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DashboardPublishOptions">AWS
   * API Reference</a></p>
   */
  class AWS_QUICKSIGHT_API DashboardPublishOptions
  {
  public:
    DashboardPublishOptions();
    DashboardPublishOptions(Aws::Utils::Json::JsonView jsonValue);
    DashboardPublishOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Ad hoc filtering option.</p>
     */
    inline const AdHocFilteringOption& GetAdHocFilteringOption() const{ return m_adHocFilteringOption; }

    /**
     * <p>Ad hoc filtering option.</p>
     */
    inline bool AdHocFilteringOptionHasBeenSet() const { return m_adHocFilteringOptionHasBeenSet; }

    /**
     * <p>Ad hoc filtering option.</p>
     */
    inline void SetAdHocFilteringOption(const AdHocFilteringOption& value) { m_adHocFilteringOptionHasBeenSet = true; m_adHocFilteringOption = value; }

    /**
     * <p>Ad hoc filtering option.</p>
     */
    inline void SetAdHocFilteringOption(AdHocFilteringOption&& value) { m_adHocFilteringOptionHasBeenSet = true; m_adHocFilteringOption = std::move(value); }

    /**
     * <p>Ad hoc filtering option.</p>
     */
    inline DashboardPublishOptions& WithAdHocFilteringOption(const AdHocFilteringOption& value) { SetAdHocFilteringOption(value); return *this;}

    /**
     * <p>Ad hoc filtering option.</p>
     */
    inline DashboardPublishOptions& WithAdHocFilteringOption(AdHocFilteringOption&& value) { SetAdHocFilteringOption(std::move(value)); return *this;}


    /**
     * <p>Export to CSV option.</p>
     */
    inline const ExportToCSVOption& GetExportToCSVOption() const{ return m_exportToCSVOption; }

    /**
     * <p>Export to CSV option.</p>
     */
    inline bool ExportToCSVOptionHasBeenSet() const { return m_exportToCSVOptionHasBeenSet; }

    /**
     * <p>Export to CSV option.</p>
     */
    inline void SetExportToCSVOption(const ExportToCSVOption& value) { m_exportToCSVOptionHasBeenSet = true; m_exportToCSVOption = value; }

    /**
     * <p>Export to CSV option.</p>
     */
    inline void SetExportToCSVOption(ExportToCSVOption&& value) { m_exportToCSVOptionHasBeenSet = true; m_exportToCSVOption = std::move(value); }

    /**
     * <p>Export to CSV option.</p>
     */
    inline DashboardPublishOptions& WithExportToCSVOption(const ExportToCSVOption& value) { SetExportToCSVOption(value); return *this;}

    /**
     * <p>Export to CSV option.</p>
     */
    inline DashboardPublishOptions& WithExportToCSVOption(ExportToCSVOption&& value) { SetExportToCSVOption(std::move(value)); return *this;}


    /**
     * <p>Sheet controls option.</p>
     */
    inline const SheetControlsOption& GetSheetControlsOption() const{ return m_sheetControlsOption; }

    /**
     * <p>Sheet controls option.</p>
     */
    inline bool SheetControlsOptionHasBeenSet() const { return m_sheetControlsOptionHasBeenSet; }

    /**
     * <p>Sheet controls option.</p>
     */
    inline void SetSheetControlsOption(const SheetControlsOption& value) { m_sheetControlsOptionHasBeenSet = true; m_sheetControlsOption = value; }

    /**
     * <p>Sheet controls option.</p>
     */
    inline void SetSheetControlsOption(SheetControlsOption&& value) { m_sheetControlsOptionHasBeenSet = true; m_sheetControlsOption = std::move(value); }

    /**
     * <p>Sheet controls option.</p>
     */
    inline DashboardPublishOptions& WithSheetControlsOption(const SheetControlsOption& value) { SetSheetControlsOption(value); return *this;}

    /**
     * <p>Sheet controls option.</p>
     */
    inline DashboardPublishOptions& WithSheetControlsOption(SheetControlsOption&& value) { SetSheetControlsOption(std::move(value)); return *this;}

  private:

    AdHocFilteringOption m_adHocFilteringOption;
    bool m_adHocFilteringOptionHasBeenSet;

    ExportToCSVOption m_exportToCSVOption;
    bool m_exportToCSVOptionHasBeenSet;

    SheetControlsOption m_sheetControlsOption;
    bool m_sheetControlsOptionHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
