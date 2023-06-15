/* Program To Multiply 2 Matrix*/

#include <stdio.h>
#include <stdlib.h>

int** CreateMatrix(int,int);
int** MultiplyMatrix(int **,int **,int,int,int,int);

int main(){
    int R1,R2,C1,C2;
    
    printf("Matrix - 1\n");
    printf("Rows :");
    scanf("%d",&R1);
    printf("Columns :");
    scanf("%d",&C1);
    
    int **M1;
    M1 = CreateMatrix(R1,C1);
    
    printf("\n");

    printf("Matrix - 2\n");
    printf("Rows :");
    scanf("%d",&R2);
    printf("Columns :");
    scanf("%d",&C2);

    int** M2;
    M2 = CreateMatrix(R2,C2);

    if (C1 != R2){
        printf("\nMultiplication Of Matrix Is Not Possible\n");
    }
    else{
        int **M3;
        M3 = MultiplyMatrix(M1,M2,R1,C1,R2,C2);
    }
    return 0;
}

int** CreateMatrix(int R,int C){
    int **M,i,j,E;
    M = (int **)malloc(sizeof(int**)*R); 

    for (i = 0;i<R;i++){
        *(M + i) = (int *)malloc(sizeof(int*)*C);
    }

    for(i = 0;i<R;i++){
        for (j = 0;j<C;j++){
            printf("Matrix[%d][%d] :",i,j);
            scanf("%d",&E);
            *(*(M+i)+j) = E;
        }
    }

    for(i = 0;i<R;i++){
        for (j = 0;j<C;j++){
            printf("%d\t",M[i][j]);
        }
        printf("\n");
    }

    return M;
}

int** MultiplyMatrix(int **A,int **B,int RA,int CA,int RB,int CB){
    int **R,g;

    R = (int **)malloc(sizeof(int**)*RA);
    for(g = 0;g<RA;g++){
        R[g] = (int*)malloc(sizeof(int *)*CB);
    }

    int i,j,k;

    for(i = 0;i < RA;i++){
        for (j = 0;j<CB;j++){
            R[i][j] = 0;
        }
    }

    for (i = 0;i<RA;i++){
        for(j = 0;j<CB;j++){
            for(k = 0;k<RB;k++){
                R[i][j] += A[i][k] + B[k][j];
            }
        }
    }
	
	printf("\nMultiplication of Matrix(3)\n");
    for(i = 0;i<RA;i++){
        for (j = 0;j<CB;j++){
            printf("%d\t",R[i][j]);
        }
        printf("\n");
    }

    return R;
}
