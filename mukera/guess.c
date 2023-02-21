#include <stdio.h>
int main(void)

{
	int no;
	printf("guess the no\n");
	scanf("%d", &no);
	while(no != 7){
		printf("guess the no again\n");
	scanf("%d", &no);}

	printf("you win!\n");

	return (0);
}
