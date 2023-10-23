#include <stdio.h>
int main(void)
{
	int upper, lower, i;
	
	printf("Please input the upper integers:\n");
	scanf("%d", &upper);
	printf("Please input the lower integers:\n");
	scanf("%d", &lower);
	
	printf("%-10s %-10s %-10s\n", "int", "pow", "tri");
	for(i = lower; i <= upper; i++)
	{
		printf("%-10d %-10d %-10d\n", i, i * i, i * i * i);
	}
	#哈哈哈哈哈哈哈哈，真有意思
	return 0;
}
