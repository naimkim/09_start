#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int	average;
	int sum = 0;
	int grade[SIZE];
	
	printf("input the grade of 5 students. \n");
	
	for(i=0;i<SIZE;i++)
		scanf("%d", &grade[i]);
		
	for(i=0;i<SIZE;i++)
	{
	printf("grade[%d] = %d\n", i, grade[i]);
	sum += grade[i];
	}
	average = sum/SIZE;
	printf("average of grade : %d\n", average);
	
	return 0;
}
