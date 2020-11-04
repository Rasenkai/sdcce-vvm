#include <stdio.h>
int main(void){
int num;
printf("Enter your units consumed ");
scanf("%d",&num);

        if(num >= 0 && num < 199){
        printf(" 200 Rs ");
                }
        else if ( num >= 100 && num < 500){
                printf(" 300 Rs ");
                }
        else if ( num >= 501 && num < 1000){
                printf(" 500 Rs ");
                }
        else if ( num >= 1001 && num < 2000){
                printf(" 1000 Rs ");
                }
        else if ( num > 2000){
                printf(" Invalid ");
                }
return 0;
}
