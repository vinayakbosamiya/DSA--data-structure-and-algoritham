// Example Of goto statement

#include<math.h>

void main()
{
	float n, s;
	clrscr();
	L1:
		printf("\nEnter a no(0 TO Terminate):");
		scanf("%f",&n);
		if(n<=0)
			goto L2;
		s = sqrt(n);
		printf("\n Square root of %.2f is %.2f",n,s);
			L2:
		if(n!=0)
			goto L1;
	getch();
}

