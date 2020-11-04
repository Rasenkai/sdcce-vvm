#include <stdio.h>

void main ()
{

int a;

printf("Enter a number : \n");
scanf("%d", &a);

if (a >= 0 && a < 10 )
{      printf("single digit \n");

}
  else if ( a >= 10 && a < 100)
{      printf("double digit \n");
}
 else if (a >= 100 && a < 1000)
 {      printf("triple digit \n");
}
else
{      printf("invalid digit \n");
}
}

