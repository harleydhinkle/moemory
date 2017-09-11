#include <iostream>
int sum(int *numA, int *numB) 
{
	return *numA + *numB;
}
int sum2(int *numC, int *numD)
{
	return *numC - *numD;
}
void motbles(int*nums, int size) 
{
	for (int i = 0; i < size; i++)
	{
		nums[i] =(i+1) * 3;
		std::cout << nums[i] << std::endl;
	}
}
void point(int * arr, int size) 
{

}

int main()
{
	int age = 13;
	std::cout << age << std::endl;
	int * agePtr = new int(22);
	std::cout << agePtr << std::endl;
	std::cout << *agePtr << std::endl;
	int * ageAlias = &age;
	*ageAlias = 48;
	std::cout << age << std::endl;
	std::cout << *ageAlias << std::endl;
	int result = sum(agePtr, ageAlias);
	std::cout << result << std::endl;
	delete agePtr;
	//closed
	//1.
	int num = 12;
	bool(false);
	float(1.0f);
	int *numK = new int[13];
	bool*game2 = new bool(false);
	float*home2 = new float(1.0f);
	int *numL = new int(12);
	delete game2;
	delete numK;
	//2.

	//int result2 = sum2(numL, numK);
	//std::cout << result2 << std::endl;
	//3.
	//open
	//1.
	int *numsD = new int(100);
	motbles(numsD, 100);
	delete[] numsD;
	//2.

	//3.
	std::cout << "howdy ! how many ?" << std::endl;
	int qty = 0; 
	std::cin >> qty;
	int * inputs = new int[qty];
	for (int i = 0; i < qty; ++i)
	{
		std::wcout << "whats number " << i + 1 << "?" << std::endl;
		int input = -1;
		std::cin >> input;
		inputs[i] = input;

	}
	int evens = 0;
	for (int i = 0; i < qty; ++i) 
	{
		if (inputs[i] % 2 == 0) { evens++; }
	}
	int odds = qty - evens;
	if (evens > odds) 
	{
		std::cout << "even lover" << std::endl;
	}

	//4.
	std::cout << "how many ?" << std::endl;
	int count = 0;
	std::cin >> count;
	int *boo = new int[count];
	for (int i = 0; i < count; i++) 
	{

	}
	while (true){}
}