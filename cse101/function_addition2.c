//sum using functions
#include<stdio.h>
void addition(int a,int b)
{
	int sum =a+b;
	printf("\nsum =%d",sum);
}
int main ()
{
	int val1 ,val2;
	printf("enter the value of 2 numbers :");
	scanf("%d %d",&val1,&val2);
	addition(val1, val2);
}
