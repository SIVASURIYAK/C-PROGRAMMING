#include <stdio.h>
int main()
{
int x,y,z,s;
printf("Enter a TWO digit Number : ");
scanf("%d",&x);
y = x /10;
z = x % 10;
s = y + z;
printf("%d",s);
}
//Enter a TWO digit Number : 78
//15
