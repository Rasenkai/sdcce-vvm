#include <stdio.h>

void main ()
{

char a;

printf("Enter an alphabet : \n");
scanf("%c", &a);

if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
{      printf("vowel \n");

}
  else
{      printf("consonant \n");
}

}
