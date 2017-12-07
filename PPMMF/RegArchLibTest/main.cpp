/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: levia
 *
 * Created on December 4, 2017, 11:35 AM
 */

#include <cstdlib>
#include "cAr.h"
#include "cConst.h"
#include "cMa.h"
#include "cRegArchModel.h"
#include "cRegArchValue.h"

using namespace std;
using namespace RegArchLib;

/*
 * 
 */
int main(int argc, char** argv) {
    /* Création des modèles d'espérance conditionnelle*/
    int myArNbParam = 3;
    cDVector myArVec();
    //myArVec.GetSize();
    //myArVec.ReAlloc(myArNbParam);
    for (int i = 0; i < myArNbParam; i++)
        //myArVec[i] = i+1;
    cAr *myAr();

    //myAr->Print();
    
    cMa *myMa();
    cConst *myConst();
    
    /* Création du vecteur contenant les modèles d'espérance conditionnelle */
    std::vector<cAbstCondMean*> myAbstCondMean;
    //myAbstCondMean.assign(0, myAr);
    
    /* Création du modèle d'espérance conditionnele-*/
    cCondMean myCondMean();
    //cCondMean myCondMean(myAbstCondMean);
    
    /* Création du modèle global*/
    cRegArchModel myModel();
    
    /* Création des données */
    cRegArchValue myValue();
    
    /* Simulation des Yt */
    //myModel.mSimulate(myValue, 20);
    return 0;
}

