#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	long long* numPtr = (long long*)malloc(sizeof(long long));

	//numPtr�� ����Ű�� �޸𸮸� 8����Ʈ��ŭ 0x27 ����
	memset(numPtr, 0x27, 8);

	printf("0x%llx\n", *numPtr);

	free(numPtr);

	return 0;
}