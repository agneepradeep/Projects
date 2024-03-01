#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**Function Header Declaration*/
void printQueenBoard(int* Q,int);
bool nQueen(int* Q,int,int,int);
bool checkPosition(int* Q,int,int,int);
bool feasible(int,int,int,int);

int main() {
    int size = 4;
    int *Queen = (int *)malloc(size * size * sizeof(int));

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            *((Queen + i * size) + j) = 0;
        }
    }

    if (nQueen(Queen, size, 0, 0)) {
        printQueenBoard(Queen, size);
    } else {
        printf("No solution found.\n");
    }

    free(Queen);

    return 0;
}

bool nQueen(int* Q,int S,int x,int y){
    if(x == S){
        return true;
    }
    
    for(int i = 0;i<S;i++){
        if(checkPosition(Q,S,x,i)){
            *((Q+x*S)+i) = 1;
            
            if(nQueen(Q,S,x+1,0)){
                return true;
            }
            
            *((Q+x*S)+i) = 0;
        }
    }
    
    return false;
}

bool checkPosition(int* Q,int S,int x,int y){
    int Ri,Ci;
    for(int i = 0;i<x;i++){
        for(int j = 0;j<S;j++){
            if(*((Q+i*S)+j) == 1){
                Ci = j;
                Ri = i;
                
                if(!feasible(Ri,Ci,x,y)){
                    return false;
                }
            }
        }
    }
    return true;
}

bool feasible(int R1,int C1,int R2,int C2){
    if((C1 == C2) || (abs(R1-R2) == abs(C1-C2))){
        return false;
    } else {
        return true;
    }
}

void printQueenBoard(int* Q,int S){
    for(int i = 0;i<S;i++){
        for(int j = 0;j<S;j++){
            printf("%d ",*((Q+i*S)+j));
        }
        printf("\n");
    }
    return;
}