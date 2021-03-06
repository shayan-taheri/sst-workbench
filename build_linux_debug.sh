#!/bin/sh
## Copyright 2009-2018 NTESS. Under the terms
## of Contract DE-NA0003525 with NTESS, the U.S.
## Government retains certain rights in this software.
##
## Copyright (c) 2009-2018, NTESS
## All rights reserved.
##
## Portions are copyright of other developers:
## See the file CONTRIBUTORS.TXT in the top level directory
## the distribution for more information.
##
## This file is part of the SST software package. For license
## information, see the LICENSE file in the top level directory of the
## distribution.

TARGET=LINUX_DEBUG
APP=SSTWorkbench

## Create the Target Directory and cd into it
mkdir -p $TARGET
cd $TARGET

## Build the application
qmake ../$APP.pro -r -spec linux-g++ CONFIG+=debug CONFIG-=release CONFIG+=declarative_debug CONFIG+=qml_debug
make 

## Copy any distribution files 
cd ..
cp DistributionSupportFiles/$APP.png $TARGET/

