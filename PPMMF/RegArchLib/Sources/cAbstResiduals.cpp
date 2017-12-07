/* 
 * File:   cAbstResiduals.cpp
 * Author: levia
 * 
 * Created on December 5, 2017, 9:57 AM
 */

#include "cAbstResiduals.h"

namespace RegArchLib {
    cAbstResiduals::cAbstResiduals(uint theNParams) {
        mNbParam = theNParams;
        mParams.ReAlloc(theNParams);
        MESS_CREAT("cAbstResiduals")
    }

    cAbstResiduals::cAbstResiduals(const cDVector& theParams) {
        mNbParam = theParams.GetSize();
        mParams = theParams;
        MESS_CREAT("cAbstResiduals")
    }
}

