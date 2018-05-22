////////////////////////////////////////////////////////////////////////
// Copyright 2009-2018 NTESS. Under the terms
// of Contract DE-NA0003525 with NTESS, the U.S.
// Government retains certain rights in this software.
//
// Copyright (c) 2009-2018, NTESS
// All rights reserved.
//
// Portions are copyright of other developers:
// See the file CONTRIBUTORS.TXT in the top level directory
// the distribution for more information.
//
// This file is part of the SST software package. For license
// information, see the LICENSE file in the top level directory of the
// distribution.
////////////////////////////////////////////////////////////////////////

#ifndef DIALOGPARAMETERSCONFIG_H
#define DIALOGPARAMETERSCONFIG_H

#include "GlobalIncludes.h"

//////////////////////////////////////////////////////////////////////////////

namespace Ui {
class DialogParametersConfig;
}

//////////////////////////////////////////////////////////////////////////////

class DialogParametersConfig : public QDialog
{
    Q_OBJECT

public:
    explicit DialogParametersConfig(ItemProperty* SelectedProperty, QWidget *parent = 0);
    ~DialogParametersConfig();

signals:

private:
    // Table Management
    void SetupTable();
    void PopulateParameterData();
    void AddParameterDataEntry(QString Name, QString Value);
    // Save the Changes back to the Parameter
    void SaveParameterData();

private slots:
    // Handlers for Messages from the UI Controls
    void on_CloseBtn_clicked();
    void keyPressEvent(QKeyEvent* evt);

private:
    Ui::DialogParametersConfig* ui;
    SpinBoxEditor*              m_SpinBoxEditor;
    ItemProperty*               m_SelectedProperty;
};

#endif // DIALOGPARAMETERSCONFIG_H