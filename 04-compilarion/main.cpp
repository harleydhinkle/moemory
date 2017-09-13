#include<iostream>

void stepFizzBuzz() 
{
	
	static int fizzbuzz = 0;
	std::cin >> fizzbuzz;
	if (fizzbuzz % 3 == 0) 
	{
		std::cout << "fizz" << std::endl;
	}
	else if (fizzbuzz % 5 == 0)
	{
		std::cout << "buzz" << std::endl;
	}
	else if (fizzbuzz % 5  % 3 == 0)
	{
		std::cout << "fizzbuzz" << std::endl;
	}
	else
	{
		std::cout << fizzbuzz << std::endl;
	}

	
}
void callMeMaybe() 
{

}
int& picker(int& optA, int& optB, int& optC) 
{

}
int arrayCopy(int * srcArr, size_t srcSize,
	int * dstArr, size_t dstSize) 
{

}


void gridGen(int width, int height) 
{

}

void toUpper(char * cstr)
{

}


void toLower(char * cstr) 
{

}


void printFile(char * filePath) 
{

}

void releaseHalfLove() 
{
	static int game = 0;
	game = ++ game % 2;
	std::cout << "The game, Half-Love " << game + 1 << " was just relewst" << std::endl;
}

int main() 
{
	for (int i = 0; i < 4; ++i)
	{
		releaseHalfLove();
	}
	for (int i = 0; i < 5; ++i) 
	{
		stepFizzBuzz();
	}

	//open
	//1.
	//2.
	//3.
	while (true){}
}