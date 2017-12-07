/* 
 * File:   cCondMean.cpp
 * Author: levia
 * 
 * Created on December 5, 2017, 9:57 AM
 */

#include "cRegArchModel.h"

namespace RegArchLib {
    cRegArchModel::cRegArchModel() {
    }

    cRegArchModel* cRegArchModel::mCopy() const {
        //cRegArchModel *theModel = new cRegArchModel(*this);
        //return theModel;
        cRegArchModel *theModel = new cRegArchModel();
        //theModel->mMeans = mMeans.mCopy(); // ajouter la méthode = en CPP
        return theModel;
        // TODO ajouter la copie de cCondVar et des Residuals quand celles-ci seront implémentées 
    }
    
    double cRegArchModel::mSimulate(cRegArchValue & data, int t) const {
        data.setmYt(mMeans.mComputeMean(data, t), t);
        //TODO ajouter les parties variances et residus quand celles-ci seront implémentées.
        return 0;
    }
}

