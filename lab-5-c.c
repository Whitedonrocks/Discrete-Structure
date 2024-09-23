//permutation and combination
#include<stdio.h>
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else 
    return n*fact(n-1);
}
int main()
{
    int n,r;
    printf("enter the value of n and r");
    scanf("%d %d",&n,&r);
    int numerator=fact(n);
    int denominator=fact(n-r);
    printf("Value of permutation is : %d\n",numerator/denominator);
    printf("value of combination is:%d",numerator/(fact(r)*denominator));
    return 0;
}