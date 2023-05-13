/*Write a program to find the grace marks for a student using switch.
The user should enter the class obtained by the student and the
number of subjects he has failed in. Use the following logic:
- If the student gets first class and the number of subjects he
failed in is greater than 3, then he does not get any grace.
Otherwise the grace is of 5 marks per subject.
- If the student gets second class and the number of subjects he
failed in is greater than 2, then he does not get any grace.
Otherwise the grace is of 4 marks per subject.
- If the student gets third class and the number of subjects he
failed in is greater than 1, then he does not get any grace.
Otherwise the grace is of 5 marks.*/

#include <stdio.h>
int main(){
	int Division,Subjects;
	
	printf("Type the Division(1,2,3) :");
	scanf("%d",&Division);
	printf("Type the No of Subjects which you are failed :");
	scanf("%d",&Subjects);
	
	switch (Division){
	
		case 1:
			if (Subjects <= 3){
				printf("5 Marks Grace per subject");
			}
			else{
				printf("No Grace Marks");
			}
			break;
		case 2:
			if (Subjects <= 2){
				printf("4 Marks Grace per subject");
			}
			else{
				printf("No Grace Marks");
			}
			break;			
		case 3:
			if (Subjects <= 1){
				printf("5 Marks Grace");
			}
			else{
				printf("No Grace Marks");
			}
			break;
	}
	return 0;
}