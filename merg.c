#include<stdio.h>
int main()
{
   int n,a[100],i,temp,j,k;
   printf("enter the count\nenter the elements");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(j=1;j<=n;j++)
   {
      for(k=j+1;k<=n;k++)
      {
        if(a[j]>=a[k])
        {
        temp=a[j];
        a[j]=a[k];
        a[k]=temp;
            
        }
      }
   
   }
        printf(" %d\t",a[j/2]);
return 0;
}
