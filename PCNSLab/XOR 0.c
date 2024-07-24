/*
Enter a string : ganesh
length is : 6
*/




#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char str[30], str1[30];
	int i, len;
	printf("Enter a string : ");
	gets(str);
	len=strlen(str);
	printf("\n len is : %d\n",len);
	for(i=0;i<len;i++){
		str1[i]=str[i]^0;
	}
	printf("The result of XOR operation is : %s", str1);
	return 0;
}
