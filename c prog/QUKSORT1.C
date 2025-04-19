#include<stdio.h>
#include<conio.h>
void quicksort(int [],int,int);	
void main()
{
	int a[100],n,i; 
	clrscr();
	printf("\nenter array size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n enter array elements a[%d]",i);
		scanf("%d",&a[i]);
	}
	quicksort(a,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("\n sorted array elements %d",a[i]);
	}
	getch();
}
 
void quicksort(int a[], int first, int last)	//function definition
{
	int low, high, temp, pivot, i;
	low=first;
	high=last;
	pivot=(low+high)/2;
	while(low<=high)
	{
		while(a[low]<a[pivot])
			low++;
		while(a[hig	h]>a[pivot])
			high--;
		if(low<=high)
		{
			temp=a[low];
			a[low]=a[high];
			a[high]=temp;
			low++;
			high--;
		}
	}
	if(first<high)
		quicksort(a,first,high);
	if(low<last)
		quicksort(a,low,last);
}
