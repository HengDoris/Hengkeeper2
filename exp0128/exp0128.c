//page96 3.
/*
#include<stdio.h>
int main()
{
	int  x=3;
	do
	{
		printf("%3d",x-=2);
	}while(!(--x));
	return 1;
}
*/
//page 96 4.
/*
#include<stdio.h>
int main()
{
	int x=10,y=10,i;
	for(i=0;x>8;y=++i)
	{
		printf("%d,%d\n",x,y);
		x--;
	}
	return 1;
}
*/
//page 97 2.
/*
#include<stdio.h>
int main()
{
	int num=0;
	while (num<=2)
	{
		num++;
		printf("%d\n",num);
	}
	return 1;
}
*/
/*
#include<stdio.h>
int main()
{
	int y=10;
	do
	{
		y--;
	}while(--y);
	printf("%d\n",y--);               
}
*/
#include<stdio.h>
int main()
{
	int x,y;
	for(y=1,x=1;y<=50;y++)
	{
		if(x>=10)break;
		if(x%2==1)
		{
			x+=5;
			continue;
		}
		x-=3;
	}
	printf("%d,%d\n",x,y);
	return 1;
}