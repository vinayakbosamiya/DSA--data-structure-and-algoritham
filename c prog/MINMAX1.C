// Example of do while loop
void main()
{
	int n, min=1, max=1;
	clrscr();
	do
	{
		printf("Enter n(-999 to terminate):");
		scanf("%d",&n);
		if(n!=-999)
		{
			if(n<min)
				min = n;
			if(n>max)
				max = n;
		}
	}while(n!=-999);
	printf("\n min = %d",min);
	printf("\n max = %d",max);
	getch();
}

