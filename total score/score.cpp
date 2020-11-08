#include<stdio.h>
#include<conio.h>

int main()
{
	int testScore[2][5][5] = { 0 };
	int totalScore[5] = { 0 };
	int i, j;

	for (i = 0; i < 2; i++)
	{
		if (i == 0)
			printf("MIDTERM test score\n");
		else
			printf("FINAL test score\n");

		for (j = 0; j < 5; j++)
		{
			do {
				if (testScore[i][j][0] > 10 || testScore[i][j][1] > 10 || testScore[i][j][2] > 10 || testScore[i][j][3] > 10 || testScore[i][j][4] > 10)
					printf("Each test score not over 10\n");
				printf("Student %d score : ", j + 1);
				scanf_s("%d%d%d%d%d", &testScore[i][j][0], &testScore[i][j][1], &testScore[i][j][2], &testScore[i][j][3], &testScore[i][j][4]);
			} while (testScore[i][j][0] > 10 || testScore[i][j][1] > 10 || testScore[i][j][2] > 10 || testScore[i][j][3] > 10 || testScore[i][j][4] > 10);
			totalScore[j] = totalScore[j] + testScore[i][j][0] + testScore[i][j][1] + testScore[i][j][2] + testScore[i][j][3] + testScore[i][j][4];
		}
		printf("\n\n");
	}
	printf(":Total test score\n");
	for (j = 0; j < 5; j++)
	{
		printf("Student %d : %d \n", j + 1, totalScore[j]);
	}
	_getch();
}
