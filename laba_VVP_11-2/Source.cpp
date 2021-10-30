#include <stdio.h>
int main()
{
	int A, B, C, summ;
	printf("A = ");
	scanf("%i", &A);
	printf("B = ");
	scanf("%i", &B);
	printf("C = ");
	scanf("%i", &C);
	if (A > B && A > C)
	{
		if (C > B)
		{
			summ = A + C;
			printf("The sum of the largest numbers = %i", summ);
		}
		else if (B > C)
		{
			summ = A + B;
			printf("The sum of the largest numbers = %i", summ);
		}
	}
	else if (C > B && A < C)
	{
		if (A > B)
		{
			summ = A + C;
			printf("The sum of the largest numbers = %i", summ);
		}
		else if (B > A)
		{
			summ = C + B;
			printf("The sum of the largest numbers = %i", summ);
		}
	}
	else if (C < B && A < B)
	{
		if (A > C)
		{
			summ = A + B;
			printf("The sum of the largest numbers = %i", summ);
		}
		else if (C > A)
		{
			summ = C + B;
			printf("The sum of the largest numbers = %i", summ);
		}
	}

}