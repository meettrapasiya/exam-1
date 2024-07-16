#include<stdio.h>

main()
{
	float angale1, angale2,angale3;
	
	printf("enter first angale ");
	scanf("%f",&angale1);
	printf("enter second angale");
	scanf("%f",angale2);
	
	angale3 = 180 - angale1-angale2;
	
	printf("third angle is %.2f\n",angale3);
}