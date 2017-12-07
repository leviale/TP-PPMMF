/* 
 * File:   cMa.cpp
 * Author: levia
 * 
 * Created on December 5, 2017, 9:57 AM
 */

#include "cMa.h"

namespace RegArchLib {

    cMa::cMa(uint theNParams) {
        mNbParam = theNParams;
        mParams.ReAlloc(theNParams);
        MESS_CREAT("cMa")
    }

    cMa::cMa(const cDVector& theParams) {
        mNbParam = theParams.GetSize();
        mParams = theParams;
        MESS_CREAT("cMa")
    }

    cMa::~cMa() {
        mParams.Delete();
        MESS_DESTR("cMa")
    }

    void cMa::Delete(void) {
        mParams.Delete();
    }

    void cMa::Print(ostream& theOut) const {
        theOut << "cMa (" << mNbParam << "parameters):" << endl;
        for (register uint i = 0; i < mNbParam; i++)
            theOut << "\tcMa[" << i + 1 << "]=" << mParams[i] << endl;
    }

    void cMa::Set(double theValue, uint theIndex) {
        if (theIndex >= mNbParam)
            throw cError("Bad index");
        else
            mParams[theIndex] = theValue;
    }

    void cMa::Set(const cDVector& theVectParam) {
        mNbParam = theVectParam.GetSize();
        mParams = theVectParam;
    }

    double cMa::Get(uint theIndex) {
        return mParams[theIndex];
    }

    void cMa::ReAlloc(uint theSize, uint theNumParam)
    {
        mNbParam = theSize;
        mParams.ReAlloc(theSize) ;
    }

    void cMa::ReAlloc(const cDVector& theVectParam)
    {
        mNbParam = theVectParam.GetSize();
        mParams = theVectParam ;
    }

    uint cMa::GetNParam(void) const {
        return mNbParam;
    }
    
    double cMa::mComputeMean(const cRegArchValue & data, int t) const {
        double res = 0.;
        for (int i = 0; i < mNbParam; i++) {
            res += mParams[i] * data.getmUt(t-i);
        }
        return res;
    }

    cAbstCondMean* cMa::mPtrCopy() const {
        cMa* theCopy = new cMa(mParams);
        return theCopy;
    }
}

