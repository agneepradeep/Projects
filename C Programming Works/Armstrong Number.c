/*Write a program to print out all Armstrong numbers between 1 and 500.*/
#include <stdio.h>
#include <math.h>
int main()
{
	int UnitDigit,TenthDigit,HundredthDigit,i;
	i = 1;
	while (i<=500)
	{
		UnitDigit = i%10;
		TenthDigit = (i/10)%10;
		HundredthDigit = (i/100)%10;
		
		if (i == (pow(UnitDigit,3)+pow(TenthDigit,3)+pow(HundredthDigit,3)))
		{
		printf("%d\n",i);
		}
		i = i + 1;
	}
	return 0;
}
