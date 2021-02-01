#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void time();//displays the clock at the corner of the screen
int toss();//for toss between user and computer
int game(int);//game between user and computer
int main()
{
	printf("\t\t\t\t\tHAND CRICKET\n");
	int i=9,j=30;
	time(i,j);
}
void time()
{
	int i=9,j=30;
	int k=1;
	printf("\t\t\t\t\t\t\t\t");
	printf("%d%s%d",i,":",j);
	printf("\n");
	toss();
	
}	
int toss()
{
	int user,computer;
	char choice,ch;
	printf("\n\t\t\t\t O for odd E for even\n");
	printf("\t\t\t\t Select odd or even:");
	scanf("%c",&ch);
	printf("\nEnter a no between 1 and 10:");
	scanf("%d",&user);
	computer=rand()%10;
	int k=user+computer;
	printf("%d",k);
	printf("\nFor computer 0 for batting 1 for bowling\n");
	printf("For user B for batting O for bowling\n");
	printf("\t\t\t\t Enter user's choice:");
	scanf("%c",&choice);
	if(k%2==0&&ch=='E')
	{
		switch(choice)
		{
		case 'B':printf("\nUser won the toss and elect to bat\n");
			  break;
		case 'O':printf("\nUser won the toss and elect to bowl\n");
			  break;
		default:printf("\nWrong choice");break;
		}
	}
	else if(k%2!=0&&ch=='O')
	{
		switch(choice)
		{
		case 'B':printf("\nUser won the toss and elect to bat\n");
		         break;
		case 'O':printf("\nUser won the toss and elect to bowl\n");
                         break;
		default:printf("\nWrong choice");break;
		}
	}
	else
	{
		int loice=rand()%2;
		if(loice==0)
		{
			printf("\nComputer won the toss and elect to bat\n");
			game(loice);
		}
		else
		{
			printf("\nComputer won the toss and elect to bowl\n");
			game(loice);
		}
	}
}
int game(int x)
{
	int s=1,number,computer,w=1,run=0,wicket1=0,wicket2=0,k=1,u=1,b=0,t=0,total1=0,total2=0,m=1;
	if(x==0)
	{	
		printf("\t\t\t\t 1st innings begins\n");
		while(m<=5)
		{
			
				if(wicket1==5)
				{
					break;
				}
				 
				printf("\t\t\t\t New over begins\n");
				
			
			
				for(int i=1;i<=6;i++)
				{
					if(t==1)
					{
						break;
					}
					if(wicket1==5)
					{
						printf("\t\t\t\t\tInnings over\n");
						printf("COMPUTER 1st INNINGS Total Runs:\t\t");
						printf("%d%s",total1,"/5");
						printf("\t\t\t\t\t\t\t");
						k++;t=1;
						w=1,run=0;
						printf("\n\t\t\t\t2nd INNINGS BEGIN\n");
						break;
					} 
					
					
						
						
					
					printf("\t\t\t\tEnter a number:");
					scanf("%d",&number);
					printf("\n\t\t\t\tComputer enters a number:");
					computer=rand()%10;
					printf("%d",computer);
					if(computer==number)
					{
						printf("\n\t\t\t\tPlayer");
						printf("%d%s%d",w,"\t\t\t\tout\t\t\t",run);
						run=0;wicket1++;w++;
						printf("\n");
					}
					else
					{
						run=run+computer;
						total1=total1+computer;
					}
					
				}
				printf("\n\t\t\t\t%d/%d in %d overs",total1,wicket1,m);
				m++;
		}
		printf("\t\t\t\t\tInnings over\n");
		printf("COMPUTER 1st INNINGS Total Runs:\t\t");
		printf("%d/%d",total1,wicket1);
		printf("\t\t\t\t\t\t\t");
		w=1,run=0,t=1;
		printf("\n\t\t\t\t2nd INNINGS BEGIN\n");
	
				while(u<=5)
				{
					if(b==1)
					{
						break;
					}
					printf("\t\t\t\t New over begins\n");
				
					for(int j=1;j<=6;j++)
					{
						if(wicket2==5)
						{
								
							int win=total1-total2;
							printf("\t\t\t\t\tInnings over\n");
							printf("User 1st INNINGS Total Runs:\t\t");
							printf("%d/%d",total2,wicket2);
							printf("\t\t\t\tComputer wins by %d runs",win);
							b=1;
							break;
						}		
						if(total2>total1)
						{
							int win=5-wicket2;
							printf("\t\t\t\t\tInnings over\n");
							printf("User 1st INNINGS Total Runs:\t\t");
							printf("%d/%d",total2,wicket2);
							printf("User wins by %d wickets",win);
							b=1;
							break;
						}
						printf("\t\t\t\tEnter a number:");
						scanf("%d",&number);
						printf("\n\t\t\t\tComputer enters a number:");
						computer=rand()%10;
						printf("%d",computer);	
						if(computer==number)
						{
							printf("\n\t\t\t\tPlayer");
							printf("%d%s%d",w,"\t\t\t\tout\t\t\t",run);
							run=0;wicket2++;w++;
							printf("\n");		
						}
						else
						{
							run=run+number;
							total2=total2+number;
						}
							
					}
					printf("\n\t\t\t\t%d/%d in %d overs",total2,wicket2,u);
					u++;
				}
				if(total1>total2)
				{
					int win=total1-total2;
					printf("\t\t\t\t\tInnings over\n");
					printf("User 1st INNINGS Total Runs:\t\t");
					printf("%d/%d",total2,wicket2);
					printf("Computer wins by %d runs",win);
				}	
			}
		}
		
				
				


			
			









	



























