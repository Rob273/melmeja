#include <stdio.h>
int main(void)
{
int a,b,c,d;

d = (a>b)? (a>c?a:c):(b>c?b:c);
printf("enter three numbers:\n");
scanf("%d %d %d",&a ,&b ,&c);
d = (a>b)? (a>c?a:c):(b>c?b:c);
printf("The largest of the three numbers is:%d \n",d);
printf("\n");
return (0);
}
