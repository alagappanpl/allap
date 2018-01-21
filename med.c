#include <stdio.h>

int main() {
int a[100],n,i,median;
printf("\n enter the no. of values");
scanf("%d",&n);
printf("\n median element is");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	median=a[(i+1)/2];
}

printf("\t %d ", median);
return 0;
} 
