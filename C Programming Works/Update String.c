#include <stdio.h>
#include <string.h>
int main(){
	char Word[30],UpWord[30],DelC;
	int i,j;
	printf("Type the String :");
	gets(Word);
	printf("Character To be Deleted :");
	scanf("%c",&DelC);
	
	for (i=0,j=0;i<strlen(Word);)
	{
		if (Word[i] != DelC)
		{
			UpWord[j] = Word[i];
			j = j + 1;
		}
		i= i+ 1;
	}
	printf("Updated String :%s",UpWord);
	return 0;
}
