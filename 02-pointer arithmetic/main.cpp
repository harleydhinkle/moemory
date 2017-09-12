#include <iostream>
void printFloats(float * arr, int size) 
{
	for (float i = 0.0f; i < size; i++) 
	{
		std::cout << *(arr + 1) << std::endl;
	}
}
int arraySum(int * arr, int size) 
{
	int total = 0;
	for (int i = 0; i <size; ++i)
	{
		total += *(arr + 1);
	}
	return total;
}
int findCount(int target, int * arr, int size) 
{
	int freg = 0;
	for (int i = 0; i < size; i++) 
	{
		if (*(arr + 1) == target) { freg++; }
	}
	return freg;
}
void arrCopy(int * srcArr, int srcSize, int * dstArr, int dstSize) 
{

}
void arrReversal(int * arr, int size) 
{

}
void cstrReversal(char * arr, int size) 
{

}
float arrayAvg(int * arr, int size) 
{
	int total = arraySum(arr, size);
	return total / (float)size;
}
int main ()
{
	int a = 1;
	int b = 2;
	int *notA = &a;
	std::cout << a << std::endl;
	std::cout << *(notA+1) << std::endl;
	int* hArr = new int[2];
	hArr[0] = 1;
	hArr[1] = 2;
	std::cout << hArr[0] << std::endl;
	std::cout << hArr[0] << std::endl;
	int*arrLarge = new int[100];
	int arrLargeStack[100];
	for (int i = 0; i < 100; i++) 
	{
		arrLarge[i] = i;
		arrLargeStack[i] = i;

	}
	for (int i = 0; i < 100; i++) 
	{
		std::cout << *(arrLargeStack + i) << std::endl;
	}
	//closed
	//1.
	//float *arr = new float[10];
	//for (int i = 0; i <10; ++i)
	//{

	//}
	//printFloats(arr,10);
	////2.
	//arraySum();
	////3.
	//arrayAvg();
	//open
	//1.

	while (true){}
}