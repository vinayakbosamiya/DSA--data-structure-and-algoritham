// call by value & call by reference

void swap(int a, int b);	// call by value
void swap1(int *a, int *b);	// call by reference

void main()
{
	int a, b;
	clrscr();
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	printf("\nBefore call by value a = %d \t b = %d",a,b);
	swap(a, b);
	printf("\nAfter call by value a = %d \t b = %d",a,b);
	printf("\nBefore call by reference a = %d \t b = %d",a,b);
	swap1(&a, &b);
	printf("\nAfter call by reference a = %d \t b = %d",a,b);
	getch();
}

void swap(int a, int b)
{
	int c = a;
	a = b;
	b = c;
	printf("\ninside call by value a = %d \t b = %d",a,b);
}
void swap1(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
	printf("\nInside call by reference a = %d \t b = %d",*a,*b);
}