#include <stdio.h>
void swap(int *,int *);
int main(){
	int Size;
	printf("Type the Size of Array :");
	scanf("%d",&Size);
	
	int Arr[Size],i,j;
	printf("\nType the Array Elements\n");
	i = 0;
	while (i != Size){
		scanf("%d",&Arr[i]);
		i = i + 1;
	}
	
	/*Printing Unsorted Array*/
	printf("\nUnsorted Array :{");
	for (i=0;i<Size;i++){
		if (i != Size -1){
		printf("%d, ",Arr[i]);
		}
		else{
			printf("%d",Arr[i]);
		}
	}
	printf("}");
	
	/*Implementing Selection Sort*/
	int Min;
	for (i = 0;i<Size;i++){
		Min = Arr[i];
		for (j = i+1;j<Size;j++){
			if (Min > Arr[j]){
				Min = Arr[j];
				swap((Arr + i),(Arr + j));
			}
		}
	}
	
	/*Printing The Sorted Array*/
	printf("\nSorted Array :{");
	for (i=0;i<Size;i++){
		if (i != Size -1){
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
