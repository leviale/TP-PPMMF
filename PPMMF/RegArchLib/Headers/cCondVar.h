/* 
 * File:   cCondVar.h
 * Author: levia
 *
 * Created on December 1, 2017, 10:22 AM
 */

#ifndef CCONDVAR_H
#define CCONDVAR_H

#include "StdAfxVectorAndMatrix.h"
#include "cRegArchValue.h"
#include "cAbstCondVar.h"
#include "RegArchDef.h"

namespace RegArchLib {
    class _DLLEXPORT_ cCondVar {
    private:
        std::vector<cAbstCondVar*> mVars;
    public:
        cCondVar() ; ///< A simple constructor
	cCondVar(const std::vector<cAbstCondVar*>& theParams) ; ///< Another constructor
	virtual ~cCondVar() ;  ///< A simple destructor
	void Delete(void) ; ///< Free memory
	void Print(ostream& theOut=cout) const ; ///< Print the parameters
	void ReAlloc(uint theSize, uint theNumParam=0) ; ///< Allocation of the model parameters
	void ReAlloc(const std::vector<cAbstCondVar*>& theVectParam) ; ///< Allocation of the model parameters
	void Set(double theValue, uint theIndex=0) ; ///< Set model parameters.
	void Set(const std::vector<cAbstCondVar*>& theVectParam) ; ///< Set model parameters.
	uint GetNParam(void) const ;
        double mComputeVar(const cRegArchValue &data, int t)const;
    };
}

#endif /* CCONDVAR_H */

