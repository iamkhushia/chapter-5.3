#include<stdio.h>

main()
{
	// weekly 
	
	int choice;
	
	printf("press 1 for sunday\n");
	printf("press 2 for monday\n");
	printf("press 3 for tuesday\n");
	printf("press 4 for wednesday\n");
	printf("press 5 for thursday\n");
	printf("press 6 for friday\n");
	printf("press 7 for saturday\n");
	
	printf("enter your choice=");
	scanf("%d",&choice);
	
	
	switch(choice)
	
	{
		case 1 :
			   printf("sunday");
			   break;
			   
		case 2 :
			   printf("monday");
			   break;
			   
		case 3 :
			   printf("tuesday");
			   break;
			   
		case 4 :
			   printf("wednesday");
			   break;
			   
		case 5 :
			   printf("thursday");
			   break;
			   
		case 6 :
			   printf("friday");
			   break;
			   
		case 7 :
			   printf("saturday");
			   break;
			   
		defult :
			   printf("plz enter valid choice");
	}
	
	
}