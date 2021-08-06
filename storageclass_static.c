#include<stdio.h>
static int x=2,y=5;
void func(void);
int main()
{

func();
func();
func();

printf("x=%d,y=%d\n",x,y);
return 0;
}
void func()
{
 
printf("x=%d,y=%d\n",x,y);
x++;
y++;
}
//output :x=2,y=5
//x=3,y=6
//x=4,y=7
//x=5,y=8
