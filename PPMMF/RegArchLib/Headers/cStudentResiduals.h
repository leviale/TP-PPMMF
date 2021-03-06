/*
 * cStudentResiduals.h
 *
 *  Created on: 2 déc. 2017
 *      Author: kedap
 */

#ifndef CSTUDENTRESIDUALS_H
#define CSTUDENTRESIDUALS_H

#include "StdAfxVectorAndMatrix.h"
#include "cAbstResiduals.h"
#include "RegArchDef.h"

namespace RegArchLib {
    class _DLLEXPORT_ cStudentResiduals : public cAbstResiduals {
    private:
        int mNbParam;
        cDVector mParams;
    public:
        cStudentResiduals(uint theNParams = 0) ; ///< A simple constructor
	cStudentResiduals(const cDVector& theParams) ; ///< Another constructor
	virtual ~cStudentResiduals() ;  ///< A simple destructor
	void Delete(void) ; ///< Free memory
	void Print(ostream& theOut=cout) const ; ///< Print the parameters
	void ReAlloc(uint theSize, uint theNumParam=0) ; ///< Allocation of the model parameters
	void ReAlloc(const cDVector& theVectParam) ; ///< Allocation of the model parameters
	void Set(double theValue, uint theIndex=0) ; ///< Set model parameters.
	void Set(const cDVector& theVectParam) ; ///< Set model parameters.
	double Get(uint theIndex=0) ;
	uint GetNParam(void) const ;
        double clogDensity(double d);
        double cSimulate();
        cAbstResiduals* mCopy() const;
    };

}

#endif /* CNORMRESIDUALS_H */

