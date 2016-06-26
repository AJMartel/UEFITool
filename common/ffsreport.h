/* fssreport.h

Copyright (c) 2016, Nikolaj Schlej. All rights reserved.
This program and the accompanying materials
are licensed and made available under the terms and conditions of the BSD License
which accompanies this distribution.  The full text of the license may be found at
http://opensource.org/licenses/bsd-license.php

THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.

*/

#ifndef FFSREPORT_H
#define FFSREPORT_H

#include <vector>

#include "../common/ubytearray.h"
#include "../common/ustring.h"
#include "../common/umodelindex.h"
#include "basetypes.h"
#include "treemodel.h"
#include "ffs.h"
#include "utility.h"

class FfsReport
{
public:

    FfsReport(TreeModel * treeModel) : model(treeModel) {}
    ~FfsReport() {};

    std::vector<UString> generate();

private:
    TreeModel* model;
    
    USTATUS generateRecursive(std::vector<UString> & report, UModelIndex index, UINT32 level = 0);
    
};

#endif // FFSREPORT_H
