#include <stdio.h>

int main() {
  int A[10][10], B[10][10], C[10][10] = {0}, p, q, r, s, i, j, k, l;
    printf("Enter Dimensions of first matrix: \n");
    scanf("%d %d", &p, &q);

    printf("Enter Dimensions of second matrix: \n");
    scanf("%d %d", &r, &s);

    if(q!=r) {
        printf("Matrix multiplication is not possible for given matrices");
        return 0;
    }
    printf("Enter first matrix: \n");
    for(i=0; i<p; i++) {
      for(j=0; j<q; j++) {
          scanf("%d", &A[i][j]);
      }
    }
    printf("Enter second matrix: \n");
    for(i=0; i<r; i++) {
      for(j=0; j<s; j++) {
          scanf("%d", &B[i][j]);
      }
    }


  for(i=0; i<p; i++) {
    for(j=0; j<s; j++) {
        for(k=0; k<q; k++) {
            C[i][j] += A[i][k] * B[k][j];
        }

    }
  }

  for(i=0; i<p; i++) {
    for(j=0; j<s; j++) {
        printf("%d ", C[i][j]);
    }
    printf("\n");
  }

  return 0;
}
