// Input rollno, name and marks of 3 subject of 10 students. WAP that print merit list

#define size 5
struct Result
{
	int rn;
	char nm[20];
	int m[3],total;
};

void main()
{
	struct Result r[size];
	int i, j;
	clrscr();
	for(i=0 ; i<size ; i++)
	{
		printf("Enter roll no, name and marks of 3 subj.:");
		scanf("%d %s",&r[i].rn,r[i].nm);
		r[i].total=0;
		for(j=0 ; j<3 ; j++)
		{
			scanf("%d",&r[i].m[j]);
			r[i].total += r[i].m[j];
		}
	}
	printf("\n RNO \t name \t  m1 \t m2 \t m3 \t Total");
	for(i=0 ; i<size ; i++)
	{
		printf("\n %d \t %s",r[i].rn,r[i].nm);
		for(j=0 ; j<3 ; j++)
			printf("\t %d",r[i].m[j]);
		printf("\t %d",r[i].total);
	}
	getch();
}

