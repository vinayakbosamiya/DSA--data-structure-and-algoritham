// Function with arg and return
int add(int, int);	// function prototype
main()
{
	int a, b, c;
	clrscr();
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	c = add(a, b);   // calling
	printf("%d + %d = %d",a,b,c);
	getch();
	return 0;
}

int add(int a, int b)	// called
{
	int c;
	c = a + b;
	return c;
}

// function prototype : Declaration of the function.

