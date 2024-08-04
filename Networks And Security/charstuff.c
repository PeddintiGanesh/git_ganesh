/*
* OOUTPUT : Enter a frame(string) : ganesh
            Frame after stuffing : dlestxganeshdleetx
*/


#include<stdio.h>
int main(){
	char start[]="dlestx", mid[]="dle", end[]="dleetx";
	char frame[30];
	int i=0;
	printf("Enter a frame(string) : ");
	scanf("%s",&frame);
	printf("Frame after stuffing : ");
	printf("%s",start);
	while(frame[i]!='\0'){
		if(frame[i]=='d'&&frame[i+1]=='l'&&frame[i+2]=='e'){
			printf("%c%c%c", frame[i], frame[i+1], frame[i+2]);
			printf("%s",mid);
			i=i+3;
		}
		printf("%c",frame[i]);
		i++;
	}
	printf("%s",end);
	return 0;
}
