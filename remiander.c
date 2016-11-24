/*
Student Name : Kabir Shrestha
Subject : Programming Fundamental
Lab No. : 17
Program : WAP tp print the remainder of the number assigned by user.
	  a. Use division as 10
	  b. Ask user to enter division.
Date : 2016-11-24
*/
#include<stdio.h>
	int main()
	{
	int a,b,rem;
	
	printf("\nEnter the number : ");
	scanf("%d",&a);
	
	printf("\nEnter the division : ");
	scanf("%d",&b);

	rem=a%b;

	if(rem==0)
		{
		printf("The remainder is zero");
		}
	else
		printf("\nThe remainder is : %d",rem);

	return 0;
	}

	
