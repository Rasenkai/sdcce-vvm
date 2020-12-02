#include <stdio.h>

int checkEvenOdd(int N)
{
     int chk;
     if (N % 2 == 0) {
                chk=1;
      }
        else {
                chk = 0;
    }
       return chk;
}

int main()
{
    int N, c;
    printf("Enter a number to check odd or even\n");
    scanf("%d",&N);
    c = checkEvenOdd(N);
    if (c == 1)
    printf( "%d is Even No" , N);
    else
     printf ("%d odd number", N);
}
