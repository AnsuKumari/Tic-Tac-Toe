#include<iostream.h>
#include<conio.h>
#include<dos.h>
char s[3][3]={"123","456","789"};
char p1[15],p2[15]="COMPUTER";

void board()
{
	clrscr();
	cout<<"The block # sequence is as follows:-\n";
	cout<<"				           |           |      "<<"\n";
	cout<<"				           |           |      "<<"\n";
	cout<<"				     "<<s[0][0]<<"     |     "<<s[0][1]<<"     |     "<<s[0][2]<<"\n";
	cout<<"				           |           |      "<<"\n";
	cout<<"				___________|___________|___________"<<"\n";
	cout<<"				           |           |      "<<"\n";
	cout<<"				           |           |      "<<"\n";
	cout<<"				     "<<s[1][0]<<"     |     "<<s[1][1]<<"     |     "<<s[1][2]<<"\n";
	cout<<"				           |           |      "<<"\n";
	cout<<"				___________|___________|___________"<<"\n";
	cout<<"				           |           |      "<<"\n";
	cout<<"				           |           |      "<<"\n";
	cout<<"				     "<<s[2][0]<<"     |     "<<s[2][1]<<"     |     "<<s[2][2]<<"\n";
	cout<<"				           |           |      "<<"\n";
	cout<<"				           |           |      "<<"\n\n\n\n\n\n";
}

void main()
{
	board();
	getch();
}
