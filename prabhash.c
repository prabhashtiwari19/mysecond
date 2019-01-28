#include<stdio.h>
int a,b,c;
void addition();
void difference();
void multiply();
void divide();
void modulo();
void main()
{
printf("enter values of a and b");
scanf("%d %d", &a, &b);
printf("enter choice to operate function 1- addition  2-substraction  3- multiply  4-divide 5- modulos\n");
scanf("%d", &c );
switch(c)
{
case 1: addition();
break;
case 2: difference();
break;
case 3: multiply();
break;
case 4: divide();
break;
case 5: modulo();
break;
default : printf("wrong choice");
}

}
void addition()
{
 int sum= a+b;
printf("result = %d",sum);
}

void difference()
{
 int differ= a-b;
printf("result = %d" ,differ);
}
void multiply()
{
 int product= a*b;
printf("result = %d" ,product);
}
void divide()
{
 int divided= a+b;
printf("result = %d",divided);
}
void modulo()
{
int modu=a%b;
printf("result= %d" ,modu);
}
