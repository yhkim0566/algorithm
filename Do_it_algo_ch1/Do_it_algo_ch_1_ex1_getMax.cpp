#include <stdio.h>

int main(void)
{
    int a, b, c;
    int max;
    printf("Find a maximum value among given integer numbers");
    printf("number of a: ");
    scanf("%d",&a);
    printf("number of b: ");
    scanf("%d",&b);
    
    printf("number of c: ");
    scanf("%d",&c);

    max = a;
    if(b>max)
        max = b;
    if(c>max)
        max = c;
    printf("the maximum value is : %d",max);

    return 0;
}

