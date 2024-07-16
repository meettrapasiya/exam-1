#include<stdio.h>

main()
{
	int month;
	
	printf("enter your month");
	scanf("%d",month);
	
	switch(month){
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:	
		case 9:
		case 10:
		case 11:
		case 12:		

      printf("enter day of month = 30\n");
      break; 
      case 4:
      case 6:
      case 9:
      case 11:
      	
      	printf("enter the month = 31/n");
      	break;
      	
     case 2:
     	
     	peintf("enter day of month =28/29\n");
     	break;
     	default:
     		printf("invalide month :");
}