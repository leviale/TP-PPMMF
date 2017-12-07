/* 
 * File:   cRegArchData.h
 * Author: levia
 *
 * Created on December 1, 2017, 10:24 AM
 */

#ifndef CREGARCHVALUE_H
#define CREGARCHVALUE_H

#include "StdAfxVectorAndMatrix.h"
#include "RegArchDef.h"

namespace RegArchLib {
    class _DLLEXPORT_ cRegArchValue {
    private:
        cDVector mYt;
        cDVector mUt;
        cDVector mHt;
        cDVector mEpst;
        cDVector mXt;
    public:
        cRegArchValue() ; ///< A simple constructor
        cRegArchValue(const cDVector& theY, const cDVector& theU, const cDVector& theH, const cDVector& theEps) ; ///< An other constructor
        void setmYt(double value, int t); // Ajoute value dans mYt // TODO (décider si on ajoute en fin ou si on place en t)
        void setmUt(double value, int t); 
        void setmHt(double value, int t); 
        void setmEpst(double value, int t); 
        
        double getmYt(int t) const; 
        double getmUt(int t) const; 
        double getmHt(int t) const; 
        double getmEpst(int t) const; 
    };
}

#endif /* CREGARCHVALUE_H */

