/* OUTPUT : Enter frame:
1 0 1 0 1 0 1 0
Enter generator:
1 0 1 1
Frame is received correctly


*/
#include<stdio.h>
int gen[4],genl, frl, rem[4];
void remainder();
void main ( )
{
    int i,j,fr[8],dupfr[11],recfr[11],tlen,flag;
    frl=8;  genl=4;
    printf ("Enter frame:\n");
    for (i=0; i<frl; i++)
    {
    	scanf ("%d", &fr[i]);
        dupfr[i]=fr[i];
    }
    printf("Enter generator:\n");
    for (i=0; i<genl;i++)
    	scanf ("%d", &gen[i]);
    tlen=frl+genl-1;
    for(i=frl;i<tlen;i++)
    {
        dupfr[i] =0;
    }
    remainder(dupfr);
    for (i=0; i<frl; i++)
    {
        recfr[i]=fr[i];
    }
    for(i=frl,j=1;j<genl;i++,j++)
    {
        recfr[i]=rem[j];
    }
    remainder(recfr);
    flag=0;
    for(i=0;i<4;i++)
    {
    	if(rem[i]!=0)
        flag++;
    }
    if (flag==0)
    {
    	printf ("Frame is received correctly\n");
    }
    else
    {
    	printf ("The received frame is wrong\n");
    }
}
void remainder (int fr[])
{
    int k,k1,i,j;
    for(k=0;k<frl;k++)
    {
        if (fr[k]==1)
        {
            k1=k;
            for (i=0,j=k;i<genl;i++,j++)
            {
                rem[i]=fr[j]^gen[i];
            }
        	for(i=0;i<genl;i++)
        	{
            	fr[k1]=rem[i];
                k1++;
            }
        }

    } 
} 
