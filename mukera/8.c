#include <stdio.h>
int main(void)
{
int i;
char alpha;
for (i = 0; i < 10; i++)
putchar((i % 10) + '0');
for (alpha = 'a'; alpha < 'g'; alpha++)
	putchar(alpha);
putchar('\n');
return (0);
}

