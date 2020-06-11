#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	int S;
	S=0;
	for (i=1; i<=199; i=i+2)
	S=S+i;
	printf(" Tong 100 so la %5d",S);
	getch();
}
