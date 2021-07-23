//sort array less than100 in descending order by using DMA
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int *ptr=NULL,i,n,j,t;
	printf("enter total no.less than 100 which have to be sort");
	scanf("%d",&n);
	ptr=(int*)malloc(sizeof(int*));
	printf("enter elements");
	for(i=0;i<n;i++)
	{
		if(*(ptr+i)<=100)
		{
		scanf("%d\n",(ptr+i));
		}
	}
	printf("elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(ptr+i));
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(*(ptr+i)<*(ptr+j))
		{
			t=*(ptr+i);
			*(ptr+i)=*(ptr+j);
			*(ptr+j)=t;
		}
		}
	}
	printf("descending order=\n");
for(i=0;i<n;i++)
{
	printf("%d\n",*(ptr+i));
}
getch();
}
