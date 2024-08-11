#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a 3 digit number : ");
    scanf("%d",&x);
    y=x%10;
    printf("Output is %d",y);
}
//Enter a 3 digit number : 953
//Output is 3
