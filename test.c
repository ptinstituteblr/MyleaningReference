#include<stdio.h>
int main ()
{
int a=5;
int *p;

p=&a;

printf("it is p++ %p\n",p++);
printf("it is p++ %p\n",p++);

p=&a;

printf("it is ++p %p\n",++p);
printf("it is ++p %p\n",++p);



return 0;
}

