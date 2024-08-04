//5.B)GCD

#include<stdio.h>

int gcd(int a,int b)
{
    while (b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
}
void main()
{
    int n1,n2;
    printf("enter any 2 numbers\n");
    scanf("%d%d",&n1,&n2);
    int res=gcd(n1,n2);
    printf("gcd of %d and %d is :%d",n1,n2,gcd(n1,n2));
}
