#include<stdio.h>

int main(){
char data[25],dum;
int i,n,ct=0;
printf("Enter the size of array(maximum size allowed 25) :");
scanf("%d",&n);
scanf("%c",&dum);

printf("enter character data: ");
for(i=0;i<n;i++)
{    scanf("%c",&data[i]);
    scanf("%c",&dum);
    }

printf("output is \n");
for(i=0;i<n;i++)
{    if(data[i]=='a'|| data[i]=='e' || data[i]=='i' ||data[i]=='o'||data[i]=='u')
     { printf(" data is : %c \t\t",data[i]);
       printf("index position : %d \n",i);
       ct++;
     }
}
printf("count of vowels is %d",ct);
}
