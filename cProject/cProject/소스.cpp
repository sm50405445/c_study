#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	long long* numPtr = (long long*)malloc(sizeof(long long));

	//numPtr이 가리키는 메모리를 8바이트만큼 0x27 설정
	memset(numPtr, 0x27, 8);

	printf("0x%llx\n", *numPtr);

	free(numPtr);

	return 0;
}