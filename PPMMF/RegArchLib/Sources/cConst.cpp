/* 
 * File:   cConst.cpp
 * Author: levia
 * 
 * Created on December 5, 2017, 9:57 AM
 */

#include "cConst.h"

namespace RegArchLib {

    cConst::cConst(uint theValue) {
        mValue = theValue;
        MESS_CREAT("cConst")
    }

    cConst::~cConst() {
        MESS_DESTR("cConst")
    }

    void cConst::Delete(void) {
    }

    void cConst::Print(ostream& theOut) const {
        theOut << "cConst : " << mValue << endl;
    }

    void cConst::Set(double theValue) {
        mValue = theValue;
    }

    double cConst::Get() {
        return mValue;
    }
    
    double cConst::mComputeMean(const cRegArchValue & data, int t) const {
        return mValue;
    }

    cConst* cConst::mPtrCopy() const {
        cConst* theCopy = new cConst(*this);
        return theCopy;
    }
}

