/*Write a function that receives 5 integers and returns the sum,
average and standard deviation of these numbers. Call this function
from main( ) and print the results in main( )*/
#include <stdio.h>
#include <math.h>
void Stats(int *,int *,double *);
int main()
{
	int Sum,Avg;
	double StdDev;
	Stats(&Sum,&Avg,&StdDev);
	printf("\nSum = %d\nAverage = %d\nStandard Deviation = %f",Sum,Avg,StdDev);
	return 0;
}
void Stats(int *S,int *A,double *SD)
{
	int N1,N2,N3,N4,N5;
	printf("Type 5 integer Number :\n");
	scanf("%d%d%d%d%d",&N1,&N2,&N3,&N4,&N5);
	*S = N1 + N2 + N3 + N4 + N5;
	*A = *S/5;
	*SD = sqrt((pow(N1 - *A,2.0) + pow(N2 - *A,2.0) + pow(N3 - *A,2.0) + pow(N4 - *A,2.0) + pow(N1 - *A,2.0))/4);
}
