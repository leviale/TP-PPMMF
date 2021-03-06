/* 
 * File:   cMA.h
 * Author: levia
 *
 * Created on December 1, 2017, 10:16 AM
 */

#ifndef CMA_H
#define CMA_H

#include "StdAfxVectorAndMatrix.h"
#include "cRegArchValue.h"
#include "RegArchDef.h"
#include "cAbstCondMean.h"

namespace RegArchLib {
    class _DLLEXPORT_ cMa : public cAbstCondMean {
    private:
        int mNbParam;
        cDVector mParams;
    public:
        cMa(uint theNParams = 0) ; ///< A simple constructor
	cMa(const cDVector& theParams) ; ///< Another constructor
	virtual~cMa() ;  ///< A simple destructor
	void Delete(void) ; ///< Free memory
	void Print(ostream& theOut=cout) const ; ///< Print the parameters
	void ReAlloc(uint theSize, uint theNumParam=0) ; ///< Allocation of the model parameters
	void ReAlloc(const cDVector& theVectParam) ; ///< Allocation of the model parameters
	void Set(double theValue, uint theIndex=0) ; ///< Set model parameters.
	void Set(const cDVector& theVectParam) ; ///< Set model parameters.
	double Get(uint theIndex=0) ;
	uint GetNParam(void) const ;
        double mComputeMean(const cRegArchValue & data, int t) const;
        cAbstCondMean* mPtrCopy() const;
    };
}

#endif /* CMA_H */

