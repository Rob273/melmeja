#include <stdio.h>
int max(int num1, int num2) {
	int result;
	if(num1 > num2){
		result = num1;
	} else {
	result = num2;
	}
return result;
}



int main(void)
{
	printf ("%d\n", max(4000, 10));
	return (0);
}

