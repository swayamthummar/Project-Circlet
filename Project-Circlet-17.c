#include<stdio.h>
main()
{
	int i,o,s;
	for (o=1;o<=5;o++)
	{
		for(s=5;s>=o;s--)
		{
			printf(" ");
		}
		for(i=1;i<o;i++)
		{
			printf("%d",i);		
		}
		printf("\n");
      	}
	for(o=1;o<=5;o++)
     {
     	for(s=1;s<o;s++)
     	{
     		printf(" ");
		 }
       for(i=o;i<=5;i++)
       {
       		printf("%d",i);
	   }
	   printf("\n");
	 }
	
}
