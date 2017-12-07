/* 
 * File:   cCondMean.cpp
 * Author: levia
 * 
 * Created on December 5, 2017, 9:57 AM
 */

#include "cNormResiduals.h"

namespace RegArchLib {
    cNormResiduals::cNormResiduals(uint theNParams) {
        mNbParam = theNParams;
        mParams.ReAlloc(theNParams);
        MESS_CREAT("cNormResiduals")
    }
    
    cNormResiduals::cNormResiduals(const cDVector& theParams){
        mNbParam = theParams.GetSize();
        mParams = theParams;
        MESS_CREAT("cNormResiduals")
    }
    
    cNormResiduals::~cNormResiduals(){
        mParams.Delete();
        MESS_DESTR("cNormResiduals")
    }
    
    void cNormResiduals::Delete(void){
        mParams.Delete();
    }
    
    void cNormResiduals::Print(ostream& theOut) const{;
        theOut << "cNormResiduals (" << mNbParam << " parameters):" << endl;
        for (register uint i = 0; i < mNbParam; i++)
            theOut << "\tcNormResiduals[" << i + 1 << "] = " << mParams[i] << endl;
    }
    
    void cNormResiduals::ReAlloc(uint theSize, uint theNumParam){
        mNbParam = theSize;
        mParams.ReAlloc(theSize);
    }
    
    void cNormResiduals::ReAlloc(const cDVector& theVectParam){
        mNbParam = theVectParam.GetSize();
        mParams = theVectParam;
    }
	
    void cNormResiduals::Set(double theValue, uint theIndex){
        if (theIndex >= mNbParam)
            throw cError("Bad index");
        else
            mParams[theIndex] = theValue;
    }

    void cNormResiduals::Set(const cDVector& theVectParam){
        mNbParam = theVectParam.GetSize();
        mParams = theVectParam;
    }
    
    double cNormResiduals::Get(uint theIndex){
        return mParams[theIndex];
    }

    uint cNormResiduals::GetNParam(void) const {
        return mNbParam;
    }
    
    double cNormResiduals::clogDensity(double d) {
        return  exp(-d*d/2) / sqrt(2*PI);
    }
    
    double cNormResiduals::cSimulate() {
        double d1 = rand() / (double) RAND_MAX;
	double d2 = rand() / (double) RAND_MAX;
	return sqrt((double) -2*log(d1)) * cos(2*M_PI*d2);
    }

    cAbstResiduals* cNormResiduals::mCopy() const {
        cNormResiduals* theCopy = new cNormResiduals(mParams);
        return theCopy;
    }
}
