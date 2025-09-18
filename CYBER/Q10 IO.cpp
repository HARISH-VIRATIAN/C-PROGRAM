#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter a value:");
	scanf("%d",&a);
	b=a%10;
	c=a/100;
	d=b+c;
	printf("%d",d);
}