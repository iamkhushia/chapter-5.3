#include<stdio.h>

main()
{
	//arithmetic 
	
	int a,b,choice;
	
	printf("enter the value a=");
	scanf("%d",&a);
	
	printf("enter the value b=");
	scanf("%d",&b);
	
	printf("press 1 for addition\n");
	printf("press 2 for substraction\n");
	printf("press 3 for multiplication\n");
	printf("press 4 for devision\n");
	printf("press 5 for moduls\n");
	
	printf("enter your choice=");
	scanf("%d",&choice);
	
	switch(choice)
	
	{
		case 1 :
			   printf("addition of %d + %d = %d",a,b,a+b);
			   break;
			   
		case 2 :
			   printf("substraction of %d - %d = %d",a,b,a-b);
			   break;
			   
		case 3 :
			   printf("multiplication of %d * %d = %d",a,b,a*b);
			   break;
			   
		case 4 :
			   printf("devision of %d / %d = %d",a,b,a/b);
			   break;
			   
		case 5 :
			   printf("moduls of %d %% %d = %d",a,b,a%b);
			   break;
			   
		defult :
			   printf("plz enter valid choice");
	}
	
	
}