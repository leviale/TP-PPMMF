/* 
 * File:   cCondMean.cpp
 * Author: levia
 * 
 * Created on December 5, 2017, 9:57 AM
 */

#include "cCondMean.h"

namespace RegArchLib {
    cCondMean::cCondMean() {
    }
    
    cCondMean::cCondMean(const std::vector<cAbstCondMean*>& theVectParam) {
        mMeans = theVectParam;
        MESS_CREAT("cCondMean")
    }

    /*cCondMean::~cCondMean() {
        mMeans.Delete();
        MESS_DESTR("cCondMean")
    }*/

    /*void cCondMean::Delete(void) {
        mMeans.Delete();
    }*/

    void cCondMean::Print(ostream& theOut) const {
        uint myNParams = mMeans.size();
        theOut << "cCondMean (" << myNParams << "parameters):" << endl;
        for (register uint i = 0; i < myNParams; i++)
            theOut << "\tcCondMean[" << i + 1 << "]=" << mMeans[i] << endl;
    }

    void cCondMean::Set(cAbstCondMean* theMean, uint theIndex) {
        if (theIndex >= mMeans.size())
            throw cError("Bad index");
        else
            mMeans[theIndex] = theMean;
    }

    void cCondMean::Set(const std::vector<cAbstCondMean*>& theVectParam) {
        mMeans = theVectParam;
    }

    cAbstCondMean* cCondMean::Get(uint theIndex) {
        return mMeans[theIndex];
    }

    /*void cCondMean::ReAlloc(uint theSize, uint theNumParam)
    {
        mMeans.ReAlloc(theSize) ;
    }*/

    void cCondMean::ReAlloc(const std::vector<cAbstCondMean*>& theVectParam)
    {
        mMeans = theVectParam ;
    }

    uint cCondMean::GetNParam(void) const {
        return mMeans.size();
    }
    
    double cCondMean::mComputeMean(const cRegArchValue &data, int t) const {
        double res = .0;
        for (int i = 0; i < mMeans.size(); i++) {
            res += mMeans[i]->mComputeMean(data, t);
        }
        return res;
    }

    cCondMean* cCondMean::mCopy() const {
        cCondMean theMeans;
        theMeans.ReAlloc(mMeans.size());     
        
        for (int i = 0; i < mMeans.size(); i++) {
            theMeans.mMeans[i] = mMeans[i]->mPtrCopy();
        }
	return theMeans;
    }

    cCondMean& cCondMean::operator= (const cCondMean& copy) {
        this.mMeans = copy->mCopy();
        return *this;
    }
}

