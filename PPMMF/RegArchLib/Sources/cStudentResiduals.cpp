/* 
 * File:   cCondMean.cpp
 * Author: levia
 * 
 * Created on December 5, 2017, 9:57 AM
 */

#include "cStudentResiduals.h"

namespace RegArchLib {
    cStudentResiduals::cStudentResiduals(uint theNParams) {
        mNbParam = theNParams;
        mParams.ReAlloc(theNParams);
        MESS_CREAT("cStudentResiduals")
    }
    
    cStudentResiduals::cStudentResiduals(const cDVector& theParams){
        mNbParam = theParams.GetSize();
        mParams = theParams;
        MESS_CREAT("cStudentResiduals")
    }
    
    cStudentResiduals::~cStudentResiduals(){
        mParams.Delete();
        MESS_DESTR("cStudentResiduals")
    }
    
    void cStudentResiduals::Delete(void){
        mParams.Delete();
    }
    
    void cStudentResiduals::Print(ostream& theOut) const{;
        theOut << "cStudentResiduals (" << mNbParam << " parameters):" << endl;
        for (register uint i = 0; i < mNbParam; i++)
            theOut << "\tcStudentResiduals[" << i + 1 << "] = " << mParams[i] << endl;
    }
    
    void cStudentResiduals::ReAlloc(uint theSize, uint theNumParam){
        mNbParam = theSize;
        mParams.ReAlloc(theSize);
    }
    
    void cStudentResiduals::ReAlloc(const cDVector& theVectParam){
        mNbParam = theVectParam.GetSize();
        mParams = theVectParam;
    }
	
    void cStudentResiduals::Set(double theValue, uint theIndex){
        if (theIndex >= mNbParam)
            throw cError("Bad index");
        else
            mParams[theIndex] = theValue;
    }

    void cStudentResiduals::Set(const cDVector& theVectParam){
        mNbParam = theVectParam.GetSize();
        mParams = theVectParam;
    }
    
    double cStudentResiduals::Get(uint theIndex){
        return mParams[theIndex];
    }

    uint cStudentResiduals::GetNParam(void) const {
        return mNbParam;
    }
    
    double cStudentResiduals::clogDensity(double d) {
        double k = 3; //c'est un paramètre de la loi de Student à déterminer (ou mettre en paramètre?) 
        //return (1/sqrt(k*PI))*(Gamma((k+1)/2)/Gamma(k/2))pow((1 + d*d/k),-(k+1)/2);
        // TODO ecrire la fonction Gamma et mettre k en argument (ou savoir s'il est fixé dans l'énoncé)
        return 0;
    }
    
    double cStudentResiduals::cSimulate() {
        //TODO
        return 0;
    }

    cAbstResiduals* cStudentResiduals::mCopy() const {
        cStudentResiduals* theCopy = new cStudentResiduals(mParams);
        return theCopy;
    }
}
