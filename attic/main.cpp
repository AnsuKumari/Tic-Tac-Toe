#include<iostream.h>
#include<conio.h>
#include<dos.h>
char s[3][3]={"   ","   ","   "};
char p1[15],p2[15]="COMPUTER";

void board()
{
	clrscr();
	cout<<"\n\n\n";
	cout<<"				1          |2          |3     "<<"\n";
	cout<<"				           |           |      "<<"\n";
	cout<<"				     "<<s[0][0]<<"     |     "<<s[0][1]<<"     |     "<<s[0][2]<<"\n";
	cout<<"				           |           |      "<<"\n";
	cout<<"				___________|___________|___________"<<"\n";
	cout<<"				4          |5          |6     "<<"\n";
	cout<<"				           |           |      "<<"\n";
	cout<<"				     "<<s[1][0]<<"     |     "<<s[1][1]<<"     |     "<<s[1][2]<<"\n";
	cout<<"				           |           |      "<<"\n";
	cout<<"				___________|___________|___________"<<"\n";
	cout<<"				7          |8          |9     "<<"\n";
	cout<<"				           |           |      "<<"\n";
	cout<<"				     "<<s[2][0]<<"     |     "<<s[2][1]<<"     |     "<<s[2][2]<<"\n";
	cout<<"				           |           |      "<<"\n";
	cout<<"				           |           |      "<<"\n";
}

void clrbd()
{
	int i,j;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			s[i][j]=' ';
}

void menu()
{
	int a;
	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t1.Player Vs Player\n\n\n\t\t\t2.Computer Vs Player";
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\tEnter your choice(1/2) :- ";
	cin>>a;
	clrscr();
	if(a==2)
	{
		cout<<"\n\n\n\n\n\n\n\n\n\t\t\tEnter your name:-";
		cin>>p1;
		clrscr();
		cout<<"\n\n\n\n\n\n\n\n\n\t\t\t1.Computer will start\n\n\n\t\t\t2.I will start";
		cout<<"\n\n\n\n\n\n\n\n\n\t\t\tEnter your choice(1/2) :- ";
		cin>>a;
	}
	else
	{
		cout<<"\n\n\n\n\n\n\n\n\n			Player 1 Enter your name:-";
		cin>>p2;
		cout<<"\n\n			Player 2 Enter your name:-";
		cin>>p1;
	}
}

void main()
{
	menu();
	board();
	getch();
}
