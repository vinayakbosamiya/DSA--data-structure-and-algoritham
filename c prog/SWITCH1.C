// Exaple of switch statement

void main()
{
	char c;
	clrscr();
	printf("Enter color code \n R-Red \n G - Green \n B - Blue\n");
	scanf("%c",&c);
	switch(c)
	{
		case 'r':
		case 'R':
			printf("\nRed");
			break	;
		case 'g':
		case 'G':
			printf("\nGreen");
			break;
		case 'b':
		case 'B':
			printf("\nBlue");
			break;
		default:
			printf("\nInvalid Color Code");
			break;
	}
	getch();
}
