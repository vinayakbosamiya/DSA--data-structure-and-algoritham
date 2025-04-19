void main()
{
	int n, r, s=0;
	clrscr();
	printf("Enter n:");
	scanf("%d",&n);
	while(n!=0)
	{
		r = n % 10;
		s = s + r;
		n = n / 10;
	}
	printf("\n s = %d",s);
	getch();
}

