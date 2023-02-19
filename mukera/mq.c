#include <stdio.h>
int main(void)
{
char name[] = "code";
char action[] = "kiss";
int age1 = 23;
int age2 = 18;
char sex[100];
char grade;
printf("my first %s was at %d \n", name, age1);
printf("my first %s was at %d \n", action, age2);
printf("sice of int : %lu \n", sizeof(age1));
printf("enter your sex\n");
fgets(sex, 100, stdin);
puts("what is your grade?");
grade = getchar();
printf("why are you%s\n", sex);
printf("your grade is:\n");
putchar(grade);

return (0);
}

