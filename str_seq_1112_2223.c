#include<stdio.h>

int main()
{
	int i,j,num;
	i=j=1;
	num=2;
	
	for(i=1;i<9;i++)
	{
		for(j=1;j<=6;j++)
		{
			printf("%d",i);
		}
		printf("%d\n",num);
		num++;
	}
	return 0;
}
