#include <stdio.h>
#include <stdlib.h>

#include "mat-mul.h"

int main() {
  float *a = (float*) malloc(sizeof(float)*N*N);
  float *b = (float*) malloc(sizeof(float)*N*N);
  float *c = (float*) malloc(sizeof(float)*N*N);
  MatMul(a, b, c);
  return 0;
}
