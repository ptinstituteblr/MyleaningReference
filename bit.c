#include <stdio.h>


typedef struct stu{
unsigned int sec:6;
unsigned int min:6;
unsigned int hour:5;
unsigned int day:3;
unsigned int ag1:12;   //32bits
}stu_t;

typedef union ustu{
unsigned int a;  //32 bits
stu_t bits;      //32 bits

}ustu_t;



int main (void)
{

ustu_t yogi;
scanf("%x",&yogi.a);
printf("we got number as %x\n",yogi.a);

printf("sec as %x\n",yogi.bits.sec);
printf("min as %x\n",yogi.bits.min);
printf("hour as %x\n",yogi.bits.hour);
printf("day as %x\n",yogi.bits.day);
printf("ag1 as %x\n",yogi.bits.ag1);


return 0;
}
