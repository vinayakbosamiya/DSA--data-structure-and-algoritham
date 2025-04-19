// Input an int no. WAP that print sum and average of
// odd and even digit of the number.
//	123 => 1+3	2	1234
void main()
{
	int n, so=0, co=0, se=0, ce=0, r, c=0;
	float ao, ae;
	clrscr();
	printf("Enter a no:");
	scanf("%d",&n);
	while(n!=0)
	{
		r = n % 10;
		if(c%2==0)
		{
			se+=r;
			ce++;
		}
		else
		{
			so+=r;
			co++;
		}
		c++;
		n = n / 10;
	}
	printf("\n c = %d",c);
	ao = (float)so / co	;
	ae = (float)se / ce;
	if(c%2==0)
	{
		printf("\n Sum of Odd = %d",so);
		printf("\n Sum of Even = %d",se);
		printf("\n Average of Odd = %.2f",ao);
		printf("\n Average of Even = %.2f",ae);
	}
	else
	{
		printf("\n Sum of Odd = %d",se);
		printf("\n Sum of Even = %d",so);
		printf("\n Average of Odd = %.2f",ae);
		printf("\n Average of Even = %.2f",ao);
	}
	getch();
}

