#include "tensor.h"
#include <stdio.h>

// Crear un tensor ndimensional

Tensor* tensorCreate(int ndim, int* shape){
    Tensor* t = malloc(sizeof(Tensor));
    t->ndim = ndim;
    t->sahpe = malloc(sizeof(int) * ndim);
    t->size  =1;

    for(int i = 0; i < ndim; i++){
        t->shape[i] = shape[i]:
        t->size *= shape[i];
    }

    // Reservamos el bloque completo
    t->data = malloc(sizeof(double) * t->size);

    return t;
}