/* 
 * File:   cRegArchModel.h
 * Author: levia
 *
 * Created on December 1, 2017, 10:28 AM
 */

#ifndef CREGARCHMODEL_H
#define CREGARCHMODEL_H

#include "StdAfxVectorAndMatrix.h"
#include "cRegArchValue.h"
#include "cCondMean.h"
#include "cCondVar.h"
#include "cAbstResiduals.h"
#include "RegArchDef.h"

namespace RegArchLib {
    class _DLLEXPORT_ cRegArchModel {
    private:
        cCondMean mMeans;
        cCondVar mCVarMean;
        cAbstResiduals *mCAbstResiduals;
    public:
        cRegArchModel() ; ///< A simple constructor
        double mSimulate(cRegArchValue & data, int t) const;
        cRegArchModel* mCopy() const;
    };
}

#endif /* CREGARCHMODEL_H */

