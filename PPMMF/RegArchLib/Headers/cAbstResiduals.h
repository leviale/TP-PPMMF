/*
 * File:   cAbstResiduals.h
 * Author: kedap
 *
 * Created on December 2, 2017, 09:25 AM
 */

#ifndef CABSTRESIDUALS_H
#define CABSTRESIDUALS_H

#include "StdAfxVectorAndMatrix.h"
#include "RegArchDef.h"

namespace RegArchLib {
    class _DLLEXPORT_ cAbstResiduals {
    private:
        int mNbParam;
        cDVector mParams;
    public:
        cAbstResiduals(uint theNParams = 0) ; ///< A simple constructor
		cAbstResiduals(const cDVector& theParams) ; ///< Another constructor
	virtual ~cAbstResiduals() ;  ///< A simple destructor
	void Delete(void) ; ///< Free memory
	void Print(ostream& theOut=cout) const ; ///< Print the parameters
	void ReAlloc(uint theSize, uint theNumParam=0) ; ///< Allocation of the model parameters
	void ReAlloc(const cDVector& theVectParam) ; ///< Allocation of the model parameters
	void Set(double theValue, uint theIndex=0) ; ///< Set model parameters.
	void Set(const cDVector& theVectParam) ; ///< Set model parameters.
	double Get(uint theIndex=0) ;
	uint GetNParam(void) const ;
        virtual double clogDensity(double d) = 0;
        virtual double cSimulate() = 0;
        virtual cAbstResiduals* mCopy() const = 0;
    };

}

#endif /* CABSTRESIDUALS_H */
