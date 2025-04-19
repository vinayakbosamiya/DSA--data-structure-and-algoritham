void main()
{
	int *p, q = 10;
	p = &q;
	clrscr();
	/*
	*p	=> Value at address (p)
	&q	=> Address of operator
	*/
	printf("\n %d is store at address %u", q, &q);
	printf("\n %d is store at address %u", *p, p);
	printf("\n %d is store at address %u", *&q, &q);
	printf("\n %u is store at address %u", p, &p);
	getch();
}
