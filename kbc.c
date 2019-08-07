#include<math.h>
#include<stdio.h>
#include<conio.h>
void main()
{
		int i,a[5],n=0;
	printf("welcome to the game ko bancha cororpati . It contains 5 QUESTIONS each carry 20 points \n\t");
	for(i=1;i<=5;i++)
	{
		n=0;
		switch(i)
			{
				case 1:
				printf("WHICH IS THE FIRST ELECTRONIC COMPUTER\n\t. 1.EDVAC 2.EDSAC 3.ENIAC 4.ABC\n\t");
				scanf("%d",&n);
				if(n==3)
				{
					printf("YOU HAVE ENTERED THE CORRECT ANSWER. NOW YOU HAVE WON RS.10000 your next question is\n\t ",i);
		         }
				else
				{			
					printf("YOU HAVE ENTERED THE WRONG ANSWER. BETTER LUCK NEXT TIME YOU HAVE EARNED RS.0000",i-1);
					i=5;
				}
				
				break;
					case 2:
				printf("WHO IS THE FOUNDER OF FACEBOOK.\n\t 1.LARRY PAGE 2.BILL GATES 3.SUNDAR PICHAI 4.MARK ZUKERBERG\n\t");
				scanf("%d",&n);
				if(n==4)
				{
				
			
			
			printf("YOU HAVE ENTERED THE CORRECT ANSWER. NOW YOU HAVE WON RS.30000 your next question is\n\t",i );
		}
			else
			{
			
				printf("YOU HAVE ENTERED THE WRONG ANSWER.BETTER LUCK NEXT TIME YOU HAVE EARNED RS.10000",i-1);
				i=5;
			}
			
			break;
			case 3:
				printf("WHICH IS THE FIRST COUNTRY TO INTRODUCE THE INTERNET.\n\t 1.CHINA 2.AMERICA 3.JAPAN 4.NEPAL\n\t");
				scanf("%d",&n);
				if(n==2)
				{
					printf("YOU HAVE ENTERED CORRECT ANSWER.NOW YOU WON RS.60000 your next question is\n\t",i);
			}
				else
				{
					printf("YOU HAVE ENTERED THE WRONG ANSWER.BETTER LUCK NEXT TIME YOU HAVE WON RS.30000",i-1);
					i=5;
				}
				break;
				case 4:
					printf("which is the highest peaks of the world .\n\t 1 mt everest 2.mt killemangzaro 3.mt kanchanjunga 4.mt Api\n\t");
					scanf("%d",&n);
					if(n==1)
					{
						printf("you have entered the correct number.now you have won RS.120000 \n\tyour next question is \n\t",i);
					}
					else
					{
						printf("you have entered wrong answer. better luck next time .you have won rs.120000",i-1);
						i=5;
					}
					break;
				default :
				break;	
	          }
              }
          getch();
                   }
