#include<stdio.h>
main()
{
	int i,o,s;//i=j,o=i,s=k
	for(o=5;o>=1;o--)
     {
       for(i=1;i<=o;i++)
       {
       		printf("%d",i);
	   }
	   printf("\n");
     }
     
     for(o=1;o<=5;o--)
     {
     	for(s=4;s>=o;s--)
     	{
     		printf(" ");
		 }
		 for(i=1;i<=5;i++)
		 {
		   printf("%d",i);	
		 }
		 printf("\n");
	 }
}
