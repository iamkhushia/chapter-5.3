#include<stdio.h>

main()
{
	// find the minimum number from the given 3 numbers using the ternary
	
	int a,b,c;
	printf("enter the value a=");
	scanf("%d",&a);
	
	printf("enter the value b=");
	scanf("%d",&b);
	
	printf("enter the value c=");
	scanf("%d",&c);
	
	(a<b)? (a<c)? printf("a is min"): printf("c is min"): (b<c)? printf("b is min") : printf("c is min"); 
}