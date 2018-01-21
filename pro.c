#include <stdio.h>
#include <string.h>
#include<conio.h>
char input_combination[100];
char *p=input_combination;
char *iv=input_combination;
char output_combination_B[50];
char output_combination_W[50];
char *b =output_combination_B;
char *w =output_combination_W;
int delay(unsigned long int t)
{
    while(t--)
    {
    }
}

int main()
{
    int i,x,n,v;
    int j;
    printf("Enter the n value:\t");
    scanf("%d",&n);
    x=n*4;
    printf("\nYour series is:\n");
    for(i=0;i<x;i++)
    {
        if((i%2)==0)
            {
                *p='B';
                p++;
            }
        else
            {
                 *p='W';
                p++;
            }
    }
    printf("%s\n",input_combination);
    printf("\nOutput Series\n");
    v=0;
    for(i=1;i<=n;i++)
    {
        printf("\nMove %d",i);
        for(j=0;j<=3;j++,iv++)
        {
            if(*iv=='B')
            {
                *b='B';
                b++;
            }
            else if(*iv=='W')
            {
                *w='W';
                w++;
            }
        }
        printf("\n%s%s\n",output_combination_W,output_combination_B);
        v=v+4;
    }
    return 0;
}
