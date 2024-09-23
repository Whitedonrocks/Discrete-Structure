 //ceiling and flooring
#include<stdio.h>
#include<conio.h>
int ceil(float num)
{
    int n=num;
    if(num>n)
    {
        return n+1;
    }
    else
        return n;
}
int floor(float num)
{
    int n=num;
    if(num>n)
    {
        return n;
    }
    else
        return n-1;
}
int main()
{
    float num;
    printf("enter a number= ");
    scanf("%f",&num);
    printf("Ceiling of given number=%d \n",ceil(num));
    printf("flooring of given number=%d",floor(num));
    return 0;
}

