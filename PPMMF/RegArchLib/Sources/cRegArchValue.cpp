/* 
 * File:   cCondMean.cpp
 * Author: levia
 * 
 * Created on December 5, 2017, 9:57 AM
 */

#include "cRegArchValue.h"

namespace RegArchLib {
    cRegArchValue::cRegArchValue() {
    }
    
    cRegArchValue::cRegArchValue(const cDVector& theY, const cDVector& theU, const cDVector& theH, const cDVector& theEps) {
        mYt = theY;
        mUt = theU;
        mHt = theH;
        mEpst = theEps;
    }
    
    void cRegArchValue::setmYt(double value, int t) {
        mYt[t] = value;
    }
    
    void cRegArchValue::setmUt(double value, int t) {
        mUt[t] = value;
    }
    
    void cRegArchValue::setmHt(double value, int t) {
        mHt[t] = value;
    } 
    
    void cRegArchValue::setmEpst(double value, int t) {
        mEpst[t] = value;
    }
    
    double cRegArchValue::getmYt(int t) const {
        return mYt[t];
    }
    
    double cRegArchValue::getmUt(int t) const {
        return mUt[t];
    }
    
    double cRegArchValue::getmHt(int t) const {
        return mHt[t];
    }
    
    double cRegArchValue::getmEpst(int t) const {
        return mEpst[t];
    }
}

