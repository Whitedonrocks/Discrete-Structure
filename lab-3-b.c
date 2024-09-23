//Find GCD
 #include<stdio.h>
int gcd(int a, int b)
{
    int temp=a;
    a=b%a;
    b=temp;
    if(a==0){
        return b;
    }
    else return gcd(a,b);
}
int main()
{
    int a,b,hcf;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    if(a<b)
    {
        printf("the gcd of numbers is %d",gcd(a,b));
    }
    else
        printf("the gcd of numbers is %d",gcd(b,a));
    return 0;
}