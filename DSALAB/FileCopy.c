//4.B) Coping one fiel into another
//NOTE : Not working in @vscode

#include<stdlib.h>
//#include <cstdio>
/*
void main()
{
    FILE *fptr1,*fptr2;
    char ch,fname1[20],fname2[20];;
    //printf("\n\n copy a file in another name ");
    printf("input source file name :");
    scanf("%s",fname1);
    fptr1=fopen(fname1,"r");
    if (fptr1==NULL)
    {
        printf("file doesnt found");
        exit(1);
    }
    printf("input the new file name :");
    scanf("%s",fname2);
    fptr2=fopen(fname2,"w");
    if (fptr2==NULL)
    {
        printf("file doesnt found \n");
        fclose(fptr1);
        exit(2);
    }
    while (1)
    {
        ch=getc(fptr1);
        if(ch==EOF)
        {
            break;
        }
        else
        {
            fputc(ch,fptr2);
        }
    }
    printf("the file %s copied successfully in file %s \n\n",fname1,fname2);
    fclose(fptr1);
    fclose(fptr2);
}*/

