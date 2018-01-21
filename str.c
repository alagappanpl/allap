#include<stdio.h>
int main()
{
    char v;
    printf("Enter the word ");
    scanf("%s",&v);
    if(v>='0'&&v<='9')
    {
        printf("yes is numeric",v);
        
}
else
{
    printf("no is not numeric",v);
    return 0;
}
}
