// Function with  arg but no return
main()
{
	int a, b;
	clrscr();
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	add(a, b);   // calling(actual arg)
	getch();
	return 0;
}

add(int a, int b)	// called(formal arg)
{
	int c;
	c = a + b;
	printf("\n %d + %d = %d",a,b,c);
	return 0;
}