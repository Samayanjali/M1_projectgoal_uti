#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int count = 0;
	int **seatnum,choice,cost=500,selection,i;
	seatnum=(int **)calloc(101,sizeof(int *));
	for (i=0;i<3;i++)
		*(seatnum+i)=(int *)calloc(101,sizeof(int ));
	int x;
	char pass[10],pak[10]="user";
while(x!=3)
	{
        a:choice=enterchoice();
		switch(choice)
		{
		    int y;
		    int ch;
			case 1:
			    b:printf(" 1- To edit cost of ticket :   \n");
                printf(" 2- To view reserve ticket:   \n");
                printf(" 3- Exit  System:        \n");
	            scanf("%d", &ch);
	            switch(ch){
            case 1:
                cost();
                goto b;
                break;
            
	    case 2:
    		view_reserve();
   		break;
    		
	    case 3:
    		find();
   		break;

	    case 4:
		book_ticket();
		break;

    		default:
    		printf("Wrong choice !");
    		break;

	        case 2:
                c:
                printf(" User login: \n");
                printf("        1- To purchase ticket:        \n");
                printf("        2- To cancel the seat:       \n");
                printf("        3- Exit System       \n");
                scanf("%d",&ch);
                switch(ch){


                case 1:
                    printf("Enter the Choice to book the ticket: ");
                    scanf("%s",&pass);
                    if (strcmp(pass,pak)==0){
                        selection=ListofMovies();
                        reserveticket(seatnum[selection-1],cost,selection);
                        count++;
                    }
                    else
                        printf("Wrong Choice!\n");
                    goto c;
                    break;
                case 2:
                    printf("Enter the Choice to book the ticket: ");
                    scanf("%s",&pass);
                    if (strcmp(pass,pak)==0){
                        selection=movieselect();
                        cancelticket(seatnum[selection-1]);
                    }
                    else
                    printf("Wrong Choice!\n");
                    goto c;
                    break;
				case 3:
                goto a;
                break;
             default:
				printf("Choice not avail\n");
				break;
				    }



			case 3:
				x=3;
				break;
			default:
				printf("Choice not avail\n");
				break;
		}
	}
return 0;
}