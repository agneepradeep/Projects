 /*Write a program to add first seven terms of the following series using a for loop
 1/1! + 2/2! + 3/3! +.....*/
 #include <stdio.h>
 int main(){
 	float Sum,Product;
 	int i,j;
 	for (i=1;i<=7;i=i+1){	
 		Product = 1;
 		for (j=1;j<=i;j=j+1)
 			Product *= j;
 		Sum = Sum + i/Product;
	}
	printf("Sum = %f",Sum);
	return 0;
 }
