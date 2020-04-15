#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("enter order number\n");
scanf("%d",&a);
switch(a)
{
case 1:
printf("food order: pizza\n");
printf("cost: rs.239");
break;
case 2:
printf("food order: burger\n\n");
printf("cost:rs.139");
break;
case 3:
printf("food order:pasta\n");
printf("cost:rs.179");
break;
case 4:
printf("food order:french fries\n")';
printf("cost:rs.99");
break;
case 5:
printf("food order:sandwich\n");
printf("cost:rs.149");
break;
default:
printf("invalid order");
}
}
