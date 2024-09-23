//Using extended euclidean algorithm to find coefficient and gcd
#include<stdio.h>
int gcd(int a, int b)
{
    int q,r,x,y,temp_a=a,temp_b=b;
    int x1=1,y1=0,x2=0,y2=1;
    while(b!=0){
    q=a/b;
    r=a%b;
    a=b;
    b=r;
    x=x1-q*x2;
    y=y1-q*y2;
    x1=x2;
    y1=y2;
    x2=x;
    y2=y;
    }
    if(b==0){
           printf("Using Extended Euclidean algorithm,  Bezout's Identity:\n");
           printf("x*%d+y*%d=%d\n",temp_a,temp_b,a);
           printf("Finally \n\t\t(%d*%d)+(%d*%d)=%d\n",x1,temp_a,y1,temp_b,a);
            printf("the coefficent of x=%d and y=%d\n",x1,y1);
        return a;
    }
}
int main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("the gcd of numbers is %d",gcd(a,b));
    }
    else
        printf("the gcd of numbers is %d",gcd(b,a));
    return 0;
}