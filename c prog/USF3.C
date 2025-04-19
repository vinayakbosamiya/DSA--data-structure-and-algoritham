// Function with no arg but return
main()
{
	int c;
	clrscr();
	c = add();   // calling
	printf(" %d",c);
	getch();
	return 0;
}

add()	// called
{
	int a, b, c;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	c = a + b;
	printf("\n %d + %d = ",a,b);
	return c;
}