/*Any year is entered through the keyboard. Write a function to
determine whether the year is a leap year or not.*/
#include <stdio.h>
void CheckYear(int);
int main()
{
	int Year;
	printf("Type Year: ");
	scanf("%d",&Year);
	CheckYear(Year);
	return 0;
}
void CheckYear(int Y){
	if (Y%4 == 0){
		if (Y%100 == 0){
			if (Y%400 == 0){
				printf("Leap Year");
			}
			else{
				printf("Not a Leap Year");
			}
		}
		else{
			printf("Leap Year");
		}
	}
	else{
		printf("Not a Leap Year");
	}
}
