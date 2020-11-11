#include <stdio.h>

int main()
{
    int i, n = 1, numbah;

    printf("enter number: ");
    scanf("%d", &i);

    while(n <= i)
   {
     if(n%2 != 0)
     {
       numbah = numbah + n;
     }
    n++;
}
    printf("Sum of Odd number is %d\n", numbah);
    return 0;
}
