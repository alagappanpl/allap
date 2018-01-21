#include <stdio.h>
main()
{
    char str[100];
    int countDigits;
    int counter;
    countDigits=0;
    printf("Enter a string: ");
    gets(str);
    for(counter=0;str[counter]!=NULL;counter++)
    {
    if(str[counter]>='0' && str[counter]<='9')
            countDigits++;
     }
    printf("\nDigits:%d",countdigits);
}
