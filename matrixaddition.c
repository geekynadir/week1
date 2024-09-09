#include<stdio.h>

int main() {
    int r1, c1, i, j;
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

    //Now working on resultant
    int res[r1][c1];
    if(r1!=r2 || c1!=c2){
    printf("Matrix Addition Not Possible ");
     return;
    }
    else{
       
       for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
             res[i][j]=mat1[i][j]+ mat2[i][j];
        }
       }
    }

    printf("\nThe Resultant matrix is\n ");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
             printf("%d ",res[i][j]);
        }
        printf("\n");
    }

    return 0;
}
