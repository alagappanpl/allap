#include<stdio.h>
main()
{
int d,count=0;
scanf("%d",&d);
while(d!=0)
{
d=d/10;
++count;
}
printf("no of digit is %d",count);
}
