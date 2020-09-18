#include <stdio.h>

typedef struct {
int age;
stu_t *hi;
}stu_t;

int main()
{
	stu_t check,test;

	check.age=5;

	check.hi = &test;
	printf("hello bhrathat %d and %p \n",check.age, check.hi);

	return 0 ;
}
