#include <stdio.h>
int main()
{
    int n =0, num = 0, quo = 0, rem = 0, rev=0;
    printf("Enter value: ");
    scanf("%d",&num);
    n = num;

    while(num>0)
{
    quo=num/10;
    rem=num%10;
    printf("\t\t%d\n", rem);
    num=quo;
    }
}

