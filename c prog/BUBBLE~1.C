#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],temp,i,j,n,changes,k;
	clrscr();
	printf("\nEnter array size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
    {
		printf("\nEnter array elements a[%d]:",i);
		scanf("%d",&a[i]);
		}
 	for(i=0;i<n;i++)
	{
		changes=0;
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				changes++;
			}
		}
		if(changes==0)
			break;
		printf("\n After pass %d elements are:\n",i+1);
		for(k=0;k<n;k++)
		{
			printf("\t%d",a[k]);
		}
	}
	printf("\nAfter sorting array elements are:\n");
	for(i=0;i<n;i++)
	{
			printf("\t%d",a[i]);
	}
	getch();
}
