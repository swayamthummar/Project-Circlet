#include<stdio.h>
main()
{
	int i,o,n=4,m=4;
	
	for(o=1;o<=4;i++)
	{
		for(i=1;i<=7;i++)
		{
			if(i==n || i==m)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		n++;
		m--;
		printf("\n");
	}
}
