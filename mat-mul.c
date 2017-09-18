#include "mat-mul.h"

void MatMul(float *a, float *b, float *c) {
  #pragma omp target map(to: a[:N*N], b[:N*N]) map(from : c[:N*N]) device(0)
  #pragma omp parallel for
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      c[i * N + j] = 0;
      for (int k = 0; k < N; ++k) {
        c[i * N + j] += a[i * N + k] * b[k * N + j];
      }
    }
  }
}
