/* 
 * File:   cCondMean.h
 * Author: levia
 *
 * Created on December 1, 2017, 10:22 AM
 */

#ifndef CCONDMEAN_H
#define CCONDMEAN_H

#include "StdAfxVectorAndMatrix.h"
#include "cRegArchValue.h"
#include "cAbstCondMean.h"
#include "RegArchDef.h"
#include <vector>

using namespace std;

namespace RegArchLib {
    class _DLLEXPORT_ cCondMean {
    private:
        std::vector<cAbstCondMean*> mMeans;
    public:
        cCondMean() ; ///< A simple constructor
	cCondMean(const std::vector<cAbstCondMean*>& theParams) ; ///< Another constructor
	virtual ~cCondMean() ;  ///< A simple destructor
	void Delete(void) ; ///< Free memory
	void Print(ostream& theOut=cout) const ; ///< Print the parameters
	void ReAlloc(uint theSize, uint theNumParam=0) ; ///< Allocation of the model parameters
	void ReAlloc(const std::vector<cAbstCondMean*>& theVectParam) ; ///< Allocation of the model parameters
	void Set(cAbstCondMean* theMean, uint theIndex=0) ; ///< Set model parameters.
	void Set(const std::vector<cAbstCondMean*>& theVectParam) ; ///< Set model parameters.
        cAbstCondMean* Get(uint theIndex);
	uint GetNParam(void) const ;
        double mComputeMean(const cRegArchValue &data, int t) const;
        cCondMean* mCopy() const;
    };
}

#endif /* CCONDMEAN_H */

