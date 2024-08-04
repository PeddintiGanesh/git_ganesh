// 1.C) ARMSTRONG OR NOT -d
//  153=1^3+5^3+3^3=153
#include <stdio.h>
void main()
{
    int n, r, temp, sum = 0;
    printf("enter a number : ");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum + (r * r * r); // r^3=pow(r,3);
        n = n / 10;
    }
    if (temp == sum)
    {
        printf("%d is an armsrtrong number", sum);
    }
    else
    {
        printf("%d is not an armstrong  number", sum);
    }
}