#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char str[30], str1[30];
	int i=0, len;
	printf("Enter a string : ");
	gets(str);
	len=strlen(str);
	printf("Result of AND Operation : ");
	for (i=0;i<len;i++){
		str1[i]=str[i]&127;
		printf("%c",str1[i]);
	}
	printf("\n");
	printf("Result of XOR Operation : ");
	for (i=0;i<len;i++){
		str1[i]=str[i]^127;
		printf("%c",str1[i]);
	}
	printf("\n");
	printf("Result of OR Operation : ");
	for (i=0;i<len;i++){
		str1[i]=str[i]|127;
		printf("%c",str1[i]);
	}
	printf("\n");
	return 0;
}
