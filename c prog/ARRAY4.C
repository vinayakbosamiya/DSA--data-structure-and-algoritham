// One dimenisional array sum and average
#define size 10
void main()
{
	int a[size], i, sum=0;
	float avg;
	clrscr();
	for(i=0 ; i<size ; i++)
	{
		printf("Enter a[%d]:",i+1);
		scanf("%d",&a[i]);
		sum += a[i];
	}
	avg = sum / 10.0;

	printf("\n Sum = %d",sum);
	printf("\n Average = %.2f",avg);

	for(i=0 ; i<size ; i++)
	{
		if(a[i]<avg)
			printf("\n %d", a[i]);
	}

	getch();
}