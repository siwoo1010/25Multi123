#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int PassOrFail(int score)
{


	if (score >= 50) {
		return 1;

	}
	else if (score < 50)
	{
		return 0;
	}

}

int main()

{
	int A;
	int myscore = 80;

	scanf("%d", &A);

	if (A == 80)
	{
		printf("����� �����ϴ�.\n");

	}
	else {

		printf("����� �ֽ��ϴ�.\n");
	}
	return 0;
}
