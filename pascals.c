#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int row = atoi(argv[1]);
	long data[row];
	for (int i = 0; i < row; i++) 
	{
		data[i] = 1;
		for (int j = i - 1; j > 0; j--) data[j] += data[j - 1];
	}
	for (int i = 0; i < row; i++) 
		printf("%ld ", data[i]);
	printf("\n");
	return 0;
}