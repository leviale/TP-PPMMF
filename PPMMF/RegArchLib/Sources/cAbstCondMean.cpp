/* 
 * File:   cAbstCondMean.cpp
 * Author: levia
 * 
 * Created on December 5, 2017, 9:57 AM
 */

#include "cAbstCondMean.h"

namespace RegArchLib {
    cAbstCondMean::cAbstCondMean(uint theNParams) {
        mNbParam = theNParams;
        mParams.ReAlloc(theNParams);
        MESS_CREAT("cAbstCondMean")
    }

    cAbstCondMean::cAbstCondMean(const cDVector& theParams) {
        mNbParam = theParams.GetSize();
        mParams = theParams;
        MESS_CREAT("cAbstCondMean")
    }

  double cAbstCondMean::mComputeMean(const cRegArchValue &data, int t){
    
  }
}

