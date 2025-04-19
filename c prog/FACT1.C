// Factorial value of a number
int fact(int);	// function prototype
main()
{
	int n, f;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);
	f = fact(n);   // calling
	printf("Factorial value of %d is %d",n,f);
	getch();
	return 0;
}

int fact(int n)	// called
{
	int f=1, i;
	for(i=1 ; i<=n ; i++)
		f*=i;
	return f;
}

// function prototype : Declaration of the function.

