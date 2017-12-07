/* 
 * File:   cConstVar.h
 * Author: levia
 *
 * Created on December 1, 2017, 10:11 AM
 */

#ifndef CCONSTVAR_H
#define CCONSTVAR_H

#include "StdAfxVectorAndMatrix.h"
#include "cRegArchValue.h"
#include "RegArchDef.h"

namespace RegArchLib {
    class _DLLEXPORT_ cConst : public cAbstCondVar {
    private :
        double mValue;
    public :
        cConstVar(uint theValue = 0) ; ///< A simple constructor
	virtual ~cConstVar() ;  ///< A simple destructor
	void Delete(void) ; ///< Free memory
	void Print(ostream& theOut=cout) const ; ///< Print the parameters
	void Set(double theValue) ; ///< Set model parameters.
	double Get() ;
        double mComputeVar(const cRegArchValue & data, int t) const;
    };
}

#endif /* CCONSTVAR_H */

