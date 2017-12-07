/* 
 * File:   cAbstCondVar.h
 * Author: levia
 *
 * Created on December 1, 2017, 10:05 AM
 */

#ifndef CABSTCONDVAR_H
#define CABSTCONDVAR_H

#include "StdAfxVectorAndMatrix.h"
#include "cRegArchValue.h"
#include "RegArchDef.h"

namespace RegArchLib {
    class _DLLEXPORT_ cAbstCondVar {
    private:
        int mNbParam;
        cDVector mParams;
    public:
        cAbstCondVar(uint theNParams = 0) ; ///< A simple constructor
	cAbstCondVar(const cDVector& theParams) ; ///< Another constructor
	virtual ~cAbstCondVar() ;  ///< A simple destructor
	void Delete(void) ; ///< Free memory
	void Print(ostream& theOut=cout) const ; ///< Print the parameters
	void ReAlloc(uint theSize, uint theNumParam=0) ; ///< Allocation of the model parameters
	void ReAlloc(const cDVector& theVectParam) ; ///< Allocation of the model parameters
	void Set(double theValue, uint theIndex=0) ; ///< Set model parameters.
	void Set(const cDVector& theVectParam) ; ///< Set model parameters.
	double Get(uint theIndex=0) ;
	uint GetNParam(void) const ;
        virtual double mComputeVar(const cRegArchValue &data, int t) const = 0 ;
    };
}

#endif /* CABSTCONDVAR_H */

