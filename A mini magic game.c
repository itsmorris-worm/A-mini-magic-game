////////////////////////////////////////////////////////A MINI MAGIC GAME////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////CHANDAN-SHARMA//////////////////

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
void gotoxy( int x, int y )
    {
    COORD p = { x, y };
    SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), p );
    }
void printing()
{
gotoxy(88,20);
printf("Hi There! Glad to see you here.\n");
gotoxy(103,21);
int temp=3;
printf("%c",temp);
gotoxy(89,22);
printf("WELCOME TO THE GAME OF MAGIC");
int t1=3,t2=14;
gotoxy(103,23);
printf("%c",temp-2);
printf("\n");
t1=15; t2=105; temp--;
int flag;
while(t1--)
{
	t2=105,flag=0;
	if(t1>=3 && t1<=11)
	{
		while(t2--)
		{
			if(t2>=12 && t2<=67)
				printf(" ");
			else
				printf(" %c",temp);
				Sleep(3);
		}
		flag=28;
		while(flag--)
		{
			printf(" %c",temp);
			Sleep(1);
		}
		printf("\n");
	}
	else
	{
		while(t2--)
		{
			printf(" %c",temp);
			Sleep(1);
		}
		printf("\n");
	}
}
}

void wholeprint()
{	

int t1=50,t2=105,temp=1;
while(t1--)
{
	t2=105;
	if(t1>=6 && t1<=44)
	{
		while(t2--)
		{
			if((t2>=6) && (t2<=99))
				printf("  ");
			else
				printf(" %c",temp);
		}
		printf("\n");
	}
	else
	{
		while(t2--)
		{
			printf(" %c",temp);
		}
		printf("\n");
	}
}
}

void show(char str[],char ttr[])
{
	gotoxy(96,31);
	Sleep(1000);
	printf("Hello! %s",str);
	gotoxy(89,32);
	Sleep(6000);
	printf("I'm here in this magical box.");
	gotoxy(78,33);
	Sleep(6000);
	printf("Let me show you this box chamber, it's empty. Look!");
	Sleep(6000);
	
	gotoxy(95,31);
	printf("                                      ");
	gotoxy(89,32);
	printf("                                   ");
	gotoxy(78,33);
	printf("                                                     ");
	
	
	gotoxy(83,31);
	printf("Now think about a big amount of money.");
	Sleep(6000);
	gotoxy(87,33);
	printf("Hey! Hey! Hey! Don't tell me.");
	Sleep(6000);
	
	gotoxy(83,31);
	printf("                                                   ");
	gotoxy(87,33);
	printf("                                 ");
	
	gotoxy(73,31);
	Sleep(1000);
	printf("Let me connect myself to your brain. Aaaa..ha! Connected!");
	gotoxy(73,33);
	Sleep(6000);
	printf("Now I'm putting that amount into this box, it's encrypted.");
	gotoxy(98,36);
	Sleep(6000);
	printf("$$$$$$$$");
	gotoxy(96,37);
	Sleep(500);
	printf("$$$$$$$$$$$$");  
	gotoxy(94,38);
	Sleep(500);
	printf("$$$$$$$$$$$$$$$$");
	
	gotoxy(73,31);
	printf("                                                               ");
	gotoxy(73,33);
	printf("                                                             ");
	
	gotoxy(83,31);
	Sleep(6000);
	printf("I'm sure it's not visible. Ha! Ha! Ha!");
	gotoxy(75,32);
	Sleep(6000);
	printf("Now take the same amount money from your mom, add all up.");
	gotoxy(77,33);
	Sleep(6000);
	printf("No! you don't have to tell me. I'll figure it out.");
	gotoxy(85,34);
	Sleep(6000);
	printf("Can you tell me your birth-date.");
	int n;
	gotoxy(101,35);
	scanf("%d",&n);
	gotoxy(101,35);
	printf("    ");
	Sleep(5000);
	
	
	gotoxy(83,31);
	printf("                                         ");
	gotoxy(75,32);
	printf("                                                         ");
	gotoxy(77,33);
	printf("                                                   ");
	gotoxy(85,34);
	printf("                                    ");
	gotoxy(102,35);
	printf(" ");

	
	gotoxy(80,31);
	printf("Add all the amount with the birth-date number.");
	gotoxy(76,33);
	Sleep(6000);
	printf("Suppose you donated half of that total amount in poors.");
	gotoxy(81,34);
	Sleep(6000);
	printf("Your mother wanted her money back. Give her.");
	gotoxy(85,35);
	Sleep(6000);
	printf("Let me chant those magical spell.");
	Sleep(6000);
	
	gotoxy(80,31);
	printf("                                                   ");
	gotoxy(76,33);
	printf("                                                         ");
	gotoxy(81,34);
	printf("                                               ");
	gotoxy(85,35);
	printf("                                 ");
	
	int v=3;
	while(v--)
	{
	gotoxy(91,33);
	printf("AABRA KA DAABRA..FOO");
	Sleep(1000);
	gotoxy(91,33);
	printf("                     ");
	}
	
	float ans=(float)n/2;
	gotoxy(98,36);
	printf("           ");
	gotoxy(99,36);
	printf("%.2f$",ans);
	Sleep(1000);
	
	
	gotoxy(70,33);
	printf("Uhhuuuu! I think that is the current amount running in your head.");
	Sleep(8000);
	system("cls");
//////////////////////////////
	main();
/////////////////////////////
	
}

void magicbox(char str[], char ttr[])
{
	int t1=15, t2=80,temp1=120, temp2=79;
	int x=12,y=27;
	while(t1--)
	{
	t2=90;
	if(t1>=3 && t1<=11)
	{
		gotoxy(x+2,y++);
		while(t2--)
		{
			if(t2>=25 && t2<=65)
				printf("  ");
			else
				printf("%c%c",temp1,temp2);
				Sleep(10);
		}
	}
	else
	{
		gotoxy(x,y++);
		while(t2--)
		{
			printf("%c%c",temp1,temp2);
			Sleep(1);
		}
		int temp=2;
		while(temp--)
		{
			printf("%c%c",temp1,temp2);
			Sleep(1);
		}
	}
	}
	show(str,ttr);
}

void gamestarting(char str[],char ttr[])
{
	wholeprint();
	gotoxy(90,11);
	printf("WELCOME! Mr.%s WELCOME!",ttr);
	
	gotoxy(97,13);
	Sleep(3000);
	printf("I know you!");
	
	gotoxy(88,14);
	Sleep(4000);
	printf("You're here to see the magic!");
	
	gotoxy(93,15);
	Sleep(2000);
	printf("**AABRA KA DAABRA**");
	int t=90,temp2=45;
	Sleep(10);
	gotoxy(13,18);
	while(t--)
	{
		Sleep(1);
		printf(" %c",temp2);
	}
	
	gotoxy(95,17);
	Sleep(2000);
	printf("Don't be afraid!");
	Sleep(4000);
	t=90;
	gotoxy(13,20);
	while(t--)
	{
		Sleep(1);
		printf(" %c",temp2);
	}
	gotoxy(70,19);
	printf("I'm Chandan, THE MAGICIAL. It's pleasure to meet you %s %s.",str,ttr);
	Sleep(5000);
	t=90;
	gotoxy(13,22);
	while(t--)
	{
		Sleep(1);
		printf(" %c",temp2);
	}
	gotoxy(48,21);
	printf("You know %s, My grandmother was a great magician. When I was a kid, she used to teach me a lot of magical tricks.",str);
	Sleep(5000);
	t=90;
	gotoxy(13,24);
	while(t--)
	{
		Sleep(1);
		printf(" %c",temp2);
	}
	gotoxy(50,23);
	printf("She also taught me how to read someones mind. Do not have believe? Okay! Let me show you this by my magic box.");
	Sleep(2000);
	gotoxy(93,26);
	printf("*** AABRA KA DAABRA ***");
	Sleep(3000);
	magicbox(str,ttr);	
}

void start()
{
	gotoxy(97,29);
	printf("          ");
	gotoxy(100,30);
	printf(" ");
	gotoxy(85,28);
	printf("ENTER YOUR NAME :");
	char str[25]={""},ttr[25]={""};
	gotoxy(104,28);
	scanf("%s %s",str,ttr);
	gotoxy(81,30);
	printf("Welcome to the Magical World, %s %s",str,ttr);
	Sleep(1000);
	gotoxy(80,32);
	printf("Just wait a few seconds, it's starting soon");
	gotoxy(108,34);
	printf("Loading...");
	Sleep(3000);
	system("cls");
	gamestarting(str,ttr);	
}

void end()
{
	char s[50];
	gotoxy(97,29);
	printf("           ");
	gotoxy(100,30);
	printf(" ");
	gotoxy(88,29);
	printf("PLEASE, GIVE YOUR FEEDBACK");
	gotoxy(80,30);
	scanf("%s",s);
	gotoxy(105,32);
	Sleep(3000);
	printf("saving...");
	Sleep(2000);
	gotoxy(86,32);
	printf("Your feedback has been saved now.");
	Sleep(3000);
	gotoxy(83,32);
	printf("Thank you! for your valuable feedback.");
	Sleep(3000);
	system("cls");
	exit(1);
}
int flag=0;
int main()
{
printing();
gotoxy(97,29);
printf("PLAY(Y/N)");

char p;
gotoxy(100,30);
scanf("%c",&p);
if(p=='Y' || p=='y')
	start();
else
{
end();
}
return 0;
}
