/* 
 * File:   cConst.h
 * Author: levia
 *
 * Created on December 1, 2017, 10:11 AM
 */

#ifndef CCONST_H
#define CCONST_H

#include "StdAfxVectorAndMatrix.h"
#include "cRegArchValue.h"
#include "RegArchDef.h"
#include "cAbstCondMean.h"

namespace RegArchLib {
    class _DLLEXPORT_ cConst : public cAbstCondMean {
    private :
        double mValue;
    public :
        cConst(uint theValue = 0) ; ///< A simple constructor
	virtual ~cConst() ;  ///< A simple destructor
	void Delete(void) ; ///< Free memory
	void Print(ostream& theOut=cout) const ; ///< Print the parameters
	void Set(double theValue) ; ///< Set model parameters.
	double Get() ;
        double mComputeMean(const cRegArchValue & data, int t) const;
        cConst* mPtrCopy() const;
    };
}

#endif /* CCONST_H */

