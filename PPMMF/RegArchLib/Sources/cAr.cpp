/* 
 * File:   cCondMean.cpp
 * Author: levia
 * 
 * Created on December 5, 2017, 9:57 AM
 */

#include "cAr.h"

namespace RegArchLib {
    cAr::cAr(uint theNParams) {
        mNbParam = theNParams;
        mParams.ReAlloc(theNParams);
        MESS_CREAT("cAr")
    }
    
    cAr::cAr(const cDVector& theParams){
        mNbParam = theParams.GetSize();
        mParams = theParams;
        MESS_CREAT("cAr")
    }
    
    cAr::~cAr(){
        mParams.Delete();
        MESS_DESTR("cAr")
    }
    
    void cAr::Delete(void){
        mParams.Delete();
    }
    
    void cAr::Print(ostream& theOut) const{;
        theOut << "cAr (" << mNbParam << " parameters):" << endl;
        for (register uint i = 0; i < mNbParam; i++)
            theOut << "\tcAr[" << i + 1 << "] = " << mParams[i] << endl;
    }
    
    void cAr::ReAlloc(uint theSize, uint theNumParam){
        mNbParam = theSize;
        mParams.ReAlloc(theSize);
    }
    
    void cAr::ReAlloc(const cDVector& theVectParam){
        mNbParam = theVectParam.GetSize();
        mParams = theVectParam;
    }
	
    void cAr::Set(double theValue, uint theIndex){
        if (theIndex >= mNbParam)
            throw cError("Bad index");
        else
            mParams[theIndex] = theValue;
    }

    void cAr::Set(const cDVector& theVectParam){
        mNbParam = theVectParam.GetSize();
        mParams = theVectParam;
    }
    
    double cAr::Get(uint theIndex){
        return mParams[theIndex];
    }

    uint cAr::GetNParam(void) const {
        return mNbParam;
    }
    
    double cAr::mComputeMean(const cRegArchValue & data, int t) const {
        double res = 0.;
        for (int i = 0; i < mNbParam; i++) {
            res += mParams[i] * data.getmYt(t - i);
        }
        return res;
    }

    cAbstCondMean* cAr::mPtrCopy() const {
        cAr* theCopy = new cAr(mParams);
        return theCopy;
    }
}
