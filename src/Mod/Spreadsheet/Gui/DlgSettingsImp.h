/***************************************************************************
 *   Copyright (c) 2021 Mark Ganson <TheMarkster>                          *
 *                                                                         *
 *   This file is part of the FreeCAD CAx development system.              *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Library General Public           *
 *   License as published by the Free Software Foundation; either          *
 *   version 2 of the License, or (at your option) any later version.      *
 *                                                                         *
 *   This library  is distributed in the hope that it will be useful,      *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU Library General Public License for more details.                  *
 *                                                                         *
 *   You should have received a copy of the GNU Library General Public     *
 *   License along with this library; see the file COPYING.LIB. If not,    *
 *   write to the Free Software Foundation, Inc., 59 Temple Place,         *
 *   Suite 330, Boston, MA  02111-1307, USA                                *
 *                                                                         *
 ***************************************************************************/


#ifndef SPREADSHEETGUI_DLGSETTINGSIMP_H
#define SPREADSHEETGUI_DLGSETTINGSIMP_H

#include <Gui/PropertyPage.h>
#include <memory>

namespace SpreadsheetGui
{
class Ui_DlgSettings;

/**
 * The DlgSettingsImp class implements a preference page to change settings
 * for the Spreadsheet workbench.
 * /author TheMarkster, based on work by Jürgen Riegel
 */
class DlgSettingsImp: public Gui::Dialog::PreferencePage
{
    Q_OBJECT

public:
    explicit DlgSettingsImp(QWidget* parent = nullptr);
    ~DlgSettingsImp() override;

protected:
    void saveSettings() override;
    void loadSettings() override;
    void changeEvent(QEvent* e) override;

private:
    std::unique_ptr<Ui_DlgSettings> ui;
};

}// namespace SpreadsheetGui

#endif// SPREADSHEETGUI_DLGSETTINGSIMP_H
