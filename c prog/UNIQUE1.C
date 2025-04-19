// Unique values from the array.

#define size 10
void main()
{
	int a[size], i, j, c;
	clrscr();
	for(i=0 ; i<size ; i++)
	{
		printf("Enter a[%d]:",i+1);
		scanf("%d",&a[i]);
	}

	for(i=0 ; i<size ; i++)
	{
		c = 0;
		for(j=i+1 ; j<size ; j++)
		{
			if(a[i]==a[j])
				c++;
		}
		if(c==0)
			printf("\n %d",a[i]);
	}
	getch();
}