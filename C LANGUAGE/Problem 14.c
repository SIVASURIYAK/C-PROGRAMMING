#include <stdio.h>
int main()
{
int x,y,z;
printf("Enter a 3 digit Number : ");
scanf("%d",&x);
y = x / 10;
z = y % 10;
printf("%d",z);
}
//Enter a 3 digit Number : 678
// output is 7
