
// Structure Demo

struct Demo
{
	int a;
	float b;
	char c;
};

void main()
{
	struct Demo d1;
	clrscr();
	printf("Enter an int, a float and a char type value:");
	scanf("%d %f %c",&d1.a,&d1.b,&d1.c);
	printf("\n a = %d",d1.a);
	printf("\n b = %.2f",d1.b);
	printf("\n c = %c",d1.c);
	getch();
}