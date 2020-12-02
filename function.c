#include<stdio.h>

main()
{  int a,b,sum=0;
   add();
   printf("Enter data :: ");
   scanf("%d",&a);
   scanf("%d",&b);
   add1(a,b);
   sum= add3(a,b);
   printf("sum of nos is ::%d",sum);
} //main ends


//fn with i/p parameters & return data
  int add3(int a,int b)
{  int c;
   c=a+b;
   printf("i m in add3\n");
   return c;
}//fn ends


// fn accepts input parametrs but no return
 void add1( int x,int y)
{    int c;
    c=x+y;
    printf(" in fn add1 sum is %d",c);
}//fn ends


//no input parameters no return type
 void add()
{  int a,b,c;
printf(" in ADD FN Enter data :: ");
   scanf("%d",&a);
   scanf("%d",&b);
   c=a+b;
   printf("sum is %d",c);
}
