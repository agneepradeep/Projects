/*Write a program to generate all pythagorean triplets with side length less than or equal to 30*/
#include <stdio.h>
int main(){
	int i,j,k;
	for (i=1;i<=30;i=i+1){
		for (j=1;j<=30;j=j+1){
			for (k=1;k<=30 && (k*k) <= (i*i + j*j);k=k+1){
				if (k*k == i*i + j*j)
					printf("(%d, %d, %d)\n",i,j,k);
			}
		}
	}
	return 0;
}
