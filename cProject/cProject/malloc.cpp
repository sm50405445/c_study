#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main() {


	int num1 = 20;
	int* numPtr = &num1;

	int *numPtr2;
	numPtr2 = (int *)malloc(sizeof(int));
	cout << numPtr<<"\n";
	cout << numPtr2<<"\n";

	free(numPtr2);

	return 0;
}