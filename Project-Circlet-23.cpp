#include<stdio.h>
main()
{
	int i,o;
	for(o=1;o<=5;o++)
     {
       for(i=1;i<=o;i++)
       {
       		if(i%2==1)
       		{
       			printf("1");
			}
			else
			{
				printf("0");
			}
	   }
	   printf("\n");
	 }
}
