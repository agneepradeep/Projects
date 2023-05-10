#include <stdio.h>
void swap(int *,int*);
int main(){
	int size;
	printf("Type Array Size :");
	scanf("%d",&size);
	int Arr[size],i;
	i = 0;
	while (i != size){
		scanf("%d",&Arr[i]);
		i = i + 1;
	}
	
	/*Printing Unsorted Array*/
	printf("\nUnsorted Array :{");
	for (i=0;i<size;i++){
		if (i != size -1){
		printf("%d, ",Arr[i]);
		}
		else{
			printf("%d",Arr[i]);
		}
	}
	printf("}");
	
	/*Implementing Bubble Sort*/
	int Swapping = 0;
	do{
		Swapping = 0;
		for (i = 0;i<(size-1);i++){
			if (Arr[i] > Arr[i+1]){
				swap((Arr + i),(Arr + i + 1));
 				Swapping = Swapping + 1;
			}
		}
	}while (Swapping != 0);
	
	/*Printing the Sorted Array*/
	printf("\nSorted Array :{");
	for (i=0;i<size;i++){
		if (i != size -1){
		printf("%d, ",Arr[i]);
		}
		else{
			printf("%d",Arr[i]);
		}
	}
	printf("}");
	return 0;
}

void swap(int *x,int *y){
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
}
