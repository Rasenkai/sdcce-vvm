#include <stdio.h>
int main()
{
    int n, p=1, i;
    printf("Enter value: ");
    scanf("\n%d",&n);

    for(i=1; i<=n; i++) {
        p=p*i;
}
    printf("Product is %d\n",p);

}
