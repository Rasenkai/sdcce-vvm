#include <stdio.h>
int main(void){
int num;
printf("Enter your mark ");
scanf("%d",&num);

        if(num >= 80){
        printf(" Distinction ");
                }
        else if ( num >= 60 && num < 80){
                printf(" First class ");
                }
        else if ( num >= 50 && num < 60){
                printf(" Second class ");
                }
        else if ( num >= 40 && num < 50){
                printf(" Pass class ");
                }
        else if ( num < 40){
                printf(" Fail ");
                }
return 0;
}
