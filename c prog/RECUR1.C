// Recusion
int power(int a, int b);
void main()
{
	int a, b, p;
	clrscr();
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	p = power(a, b);
	printf("\n p = %d",p);
	getch();
}

int power(int a, int b)
{
	int p = 1;
	if(b==0)
		return 1;
	else
		p = a * power(a, b-1);
	return p;
}
