#include <stdio.h>

int vowelcheck(char c)
{
    if (c >= 'A' && c <= 'Z')
       c = c + 32;

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
       return 1;

    return 0;
}

int main()
{
    char ch;
    printf("Please Enter an alphabet: \n");
    scanf(" %c", &ch);

    if(vowelcheck(ch))  {
		printf("\n %c is a VOWEL.", ch);
	}
    else {
    	printf("\n %c is a CONSONANT.", ch);
	}
    return 0;
}
