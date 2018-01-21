#include<stdio.h>
void merge(int [],int [],int [],int,int);
void mergesort(int [],int);
void main()
{
int a[15],n,i;
printf("\n\t\tMERGE SORT USING DIVIDE & CONQUER TECHNIQUE\n\n");
printf("\tEnter the No. of elt in the list : ");
scanf("%d",&n);
printf("\n\t\tEnter the Elements : ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
mergesort(a,n-1);
printf("\n\t\tSORTED LIST \n\n\t");
for(i=0;i<n;i++,printf("\t"))
printf("%d",a[i]);
getch();
}
void mergesort(int a[],int n)
{
int b[10],c[10],i,j,k;
if(n>=1)
{
k=n/2;
for(i=0;i<=k;i++)
b[i]=a[i];
for(j=0;i<=n;j++)
c[j]=a[i++];
mergesort(b,k);
mergesort(c,j-1);
merge(a,b,c,k,j-1);
}
}
