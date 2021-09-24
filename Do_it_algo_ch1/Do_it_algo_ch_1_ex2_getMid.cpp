#include <stdio.h>

// get median number is 
// one of the algorithm of quick sort

int med3(int a, int b, int c)
{
    if(a>=b)
        if(b>=c)
            return b;
        else
            if(a<c)
                return c;
            else
                return a;
    else if(a>c)
        return a;
    else if(b>c)
        return c;
    else
        return b;

}

int main(void)
{
    int a, b, c;
    int med;
    printf("Find a median value among given integer numbers\n");
    printf("number of a: ");
    scanf("%d",&a);
    printf("number of b: ");
    scanf("%d",&b);
    
    printf("number of c: ");
    scanf("%d",&c);

    med = med3(a,b,c);
    printf("the median value is : %d",med);

    return 0;
}

