#include <stdio.h>
int main(void)
{
int grade;
grade = getchar();
switch(grade){
	case 'b': printf("you did great!\n");
break;
	case 'a' : printf("liar\n");
		   break;
	default : printf("not bad\n");}
return (0);
}
	
