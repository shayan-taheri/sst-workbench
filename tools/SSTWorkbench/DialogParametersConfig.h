////////////////////////////////////////////////////////////////////////
// Copyright 2009-2014 Sandia Corporation. Under the terms
// of Contract DE-AC04-94AL85000 with Sandia Corporation, the U.S.
// Government retains certain rights in this software.
//
// Copyright (c) 2009-2014, Sandia Corporation
// All rights reserved.
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
    explicit DialogParametersConfig(QWidget *parent = 0);
    ~DialogParametersConfig();

private:
    Ui::DialogParametersConfig *ui;
};

#endif // DIALOGPARAMETERSCONFIG_H
