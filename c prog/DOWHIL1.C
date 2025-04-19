// Example of do while loop
void main()
{
	int n, c=0, s=0;
	float a;
	clrscr();
	do
	{
		printf("Enter n(0 to terminate):");
		scanf("%d",&n);
		if(n!=0)
		{
			s = s + n;
			c++;
		}
	}while(n!=0);
	a = (float)s / c;
	printf("\n s = %d",s);
	printf("\n a = %.2f",a);
	getch();
}

