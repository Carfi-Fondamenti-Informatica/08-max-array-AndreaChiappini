//
// Created by Andrea Chiappini on 14/12/22.
//

#include "lib.h"

float funzione(float numeri[], int dimensione){
    float massimo= numeri[0];
    for (int i=0;i < dimensione;i++) {
        if (massimo < numeri[i]) {
            massimo = numeri[i];
        }
    }
    return massimo;
}
