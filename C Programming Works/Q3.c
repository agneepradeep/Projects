/*Write a menu driven program which has following options:
1. Factorial of a number.
2. Prime or not
3. Odd or even
4. Exit
Once a menu item is selected the appropriate action should be
taken and once this action is finished, the menu should reappear.
Unless the user selects the ‘Exit’ option the program should
continue to run*/

#include <stdio.h>
#include <stdlib.h>
int main(){
	int	Choose,Number,i,Factors;
	unsigned long long int Factorial;
	while (1){
		printf("\n");
		printf("1. Factorial of a number.\n");
		printf("2. Prime or not.\n");
		printf("3. Odd or even.\n");
		printf("4. Exit.\n");
		
		printf("Type Your Choice :");
		scanf("%d",&Choose);
		
		i = 1;
		Factors = 0;
		switch (Choose){
			case 1:
				printf("Type Number :");
				scanf("%d",&Number);
				
				Factorial = 1;
				for (i=1;i<=Number;i=i+1){
					Factorial *= i;
				}
				printf("%d! = %llu\n",Number,Factorial);
				break;
			case 2:
				printf("Type Number :");
				scanf("%ld" ,&Number);
				
				Factors= 0;
				for (i=1;i<=Number;i=i+1){
					if (Number%i == 0){
						Factors += 1;
					}
				}
				((Factors == 2)?printf("%d is a Prime Number\n",Number):printf("%d is not a Prime Number\n",Number));
				break;
			case 3:
				printf("Type Number :");
				scanf("%d",&Number);
				
				((Number%2 == 0)?printf("Even Number\n"):printf("Odd Number\n"));
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("Wrong Choice\n");
				break;
		}
	}
	return 0;
}
