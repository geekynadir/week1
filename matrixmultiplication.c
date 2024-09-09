#include<stdio.h>

int main() {
    int r1, c1, i, j,k;
    printf("Enter the rows and columns of the first Matrix\n");
    scanf("%d %d", &r1, &c1);

    int mat1[r1][c1];

    printf("Enter the Elements of the First Matrix\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\nThe first Matrix Elements are\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    //declaring the second Array
     int r2, c2;
    printf("Enter the rows and columns of the second Matrix\n");
    scanf("%d %d", &r2, &c2);

    int mat2[r2][c2];

    printf("Enter the Elements of the Second Matrix\n");
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

     printf("\nThe Second Matrix Elements are\n");
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }
    if(c1!=r2){
             printf("Matrix Multiplication not possible \n");
             return 0;
    }
    else{
             int res[r1][c2];

             for(i=0;i<r1;i++){
              for(j=0;j<c2;j++){
                 res[i][j]=0;
               for(k=0;k<c1;k++){
               res[i][j]+=mat1[i][k]*mat2[k][j];
               }
              }
             }
              printf("\nThe Matrix Multiplication is \n");
           for(i = 0; i < r1; i++) {
          for(j = 0; j < c2; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    }
}