#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int cardset[5][16] = {
	{16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31 },
	{ 8, 9, 10, 11, 12, 13, 14, 15, 24, 25, 26, 27, 28, 29, 30, 31},
	{ 4, 5, 6, 7, 12, 13, 14, 15, 20, 21, 22, 23, 28, 29, 30, 31 },
	{ 2,3,6,7,10,11,14,15,18,19,22,23,26,27,30,31 },
	{ 1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31 }
};
int main() {
	int sum = 0;
	char response;
	char temp;

	for (int i=4; i>=0; --i)
	{
		for (int j = 0; j < 16; ++j) {
			printf("%d ", cardset[i][j]);
			if (i % 4 == 0)
				printf("\n");
		}
		printf("원하는 숫자가 있나요?\n");
		scanf_s("%c", &response);
		scanf_s("%c", &temp);

		if (response=='y')
			sum=sum+pow(2.0, 4.0-i);

	}
	printf("%d\n", sum);
	return 0;
}

