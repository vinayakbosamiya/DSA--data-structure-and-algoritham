#include<math.h>

void main()
{
	int n, s, p, t, c = 0;
	clrscr();
	printf("Enter n:");
	scanf("%d",&n);
	t = n;
	s = n * n;
	while(n!=0)
	{
		c++;
		n = n / 10;
	}
	p = pow(10, c);
	if(t == s%p)
		printf("\n %d is murphy",t);
	else
		printf("\n %d is not murphy",t);
	getch();
}

