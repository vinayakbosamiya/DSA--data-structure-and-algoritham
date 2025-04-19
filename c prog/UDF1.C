// Function with no arg and no return
main()
{
	clrscr();
	add();   // calling
	getch();
	return 0;
}

add()	// called
{
	int a,b,c;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	c = a + b;
	printf("\n %d + %d = %d",a,b,c);
	return 0;
}