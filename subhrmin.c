#include <stdio.h>
main()
{
int h1,h2,m1,m2,hr,mi;
printf("fist hr");
scanf("%d\t%d",&h1,&m1);
printf("second hr");
scanf("%d\t%d",&h2,&m2);
hr=h1-h2;
mi=m1-m2;
printf("%d\t%d",hr,mi);
}
