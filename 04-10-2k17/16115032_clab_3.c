#include <stdio.h>

int main() {
  int A[3][3], B[3], i, j ,k;

    printf("Enter sudoku (put 0 for unknowns): \n");
      for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d", &A[i][j]);
        }
      }

      for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            if(A[i][j]==0) {
                B[0] = 0, B[1] = 0, B[2] = 0;
                //check row

                for(k=0; k<3; k++) {
                    if(A[i][k] == 1) ;
                }

                //check column

                for(k=0; k<3; k++) {

                }
            }
        }
      }


  return 0;
}
