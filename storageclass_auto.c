#include<stdio.h>
void func(void);
int main()
{
int x,y;
func();
func();
func();

printf("x=%d,y=%d\n",x,y);
return 0;
}
void func()
{
int x=2,y=5;
printf("x=%d,y=%d\n",x,y);
x++;
y++;
}
//output :x=2,y=5
//x=2,y=5
//x=2,y=5
//x=0,y=0
