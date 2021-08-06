#include<stdio.h>
int main()
{
int res,a=8,b=4,c=2,d=1,e=5,f=20;
res=a+b-(c+d)*3%e+f/9;
printf("%d\n",res); //10
{
int res,a=17,b=5,c=6,d=3,e=5;
printf("%d\n",a%6-b/2+(c*d-5)/e);//5
}
{
int a=8,b=3,c=2,d=3,e=2,f=11;
printf("%d\n",a-b||(a-b*c)+d&&e-f%3);//1
{
int a,b,c,d;
a=b=c=d=4;
a*=b+1;
c+=d*=3;
printf("%d %d\n",a,c);
}
{
int a=10;
a=a++;
a=a++*a--;
printf("%d\n",a);
//printf("%d\n",a++*a++);
}

}
}
