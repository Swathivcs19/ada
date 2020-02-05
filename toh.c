#include<stdio.h>
void toh(int n,char frm,char to,char aux)
{
	if(n==1)
	{
	 printf("move disk 1 from %c to %c",frm,to);
	}
	else
	{
	 toh(n-1,frm,aux,to);
	 printf("move disk %d from %c to %c",n,frm,to);
	 toh(n-1,aux,to,frm);
	}
}
void main()
{
	int n=4;
	toh(n,'A','B','C');
}

