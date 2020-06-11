#include<stdio.h>
#include<conio.h>
main()
{
	long int n;
	long int tong;
	long int i;
	char ch;
	do{
		tong=0;
		printf("\n nhap vao 1 so nguyen:");
		scanf("%1d",&n);
		printf("\n cac uoc cua so %1d la:",n);
		for(i=1;i<n;i++)
		if(n%i==0)
		{
			printf("%5d",i);
			tong=tong+i;
		}
		printf("\n tong cac uoc cua so %1d bang %1d",n,tong);
		if(tong==n)
		printf("\n %51d la so hoan thien",n);
		else printf("\n %51d khong la so hoan thien",n);
		printf("\nban co muon thuc hien lai(c/k)?");
		fflush(stdin);
		scanf("%c",&ch);
		while ((ch!='k')&&(ch!='K'));
		printf("\n an phim bat ky de ket thuc");
		getch();
	}while ((ch!='k')&&(ch!='K'));
		printf("\n an phim bat ky de ket thuc");
		getch();
}
