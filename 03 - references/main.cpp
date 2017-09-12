#include <iostream>
using std::cout;
void sum(int a, int b, int&c) 
{
	c = a + b;
}
void product(float a, float b, float& c) 
{
	c = a*b;
}
void swap(float& a, float& b) 
{
	float c;
	c = a;
	a = b;
	b = c;
}

struct Aussiegochi
{
	float happiness;
	float hunger;
	float thirst;
	float sanity;
};

void feedAussie(Aussiegochi& aus) 
{
	float feed;
	if (aus.hunger = feed)
	{
		feed = aus.hunger - 1;
		feed = aus.happiness + .5;
	}
	else 
	{
		aus.hunger + 1;
		aus.happiness;
	}
}
void waterAussie(Aussiegochi& aus)
{
	float water;
	if (aus.thirst = water) 
	{
		water = aus.thirst - 1;
		water = aus.happiness + .5;
	}
	else
	{
		aus.thirst + 1;
		aus.happiness;
	}
}
void abuseAussie(Aussiegochi& aus) 
{
	float hit;
	if (aus.sanity = hit) 
	{
		hit = aus.sanity - 1;
		hit = aus.happiness - 1;
	}
	else 
	{
		aus.happiness;
		aus.sanity;
	}
}
void coddleAussie(Aussiegochi& aus)
{
	float hug;
	if (aus.happiness = hug) 
	{
		hug = aus.happiness + 1;
		hug = aus.sanity + 1;
	}
	else
	{
		aus.happiness;
		aus.sanity;
	}
}

int main() 
{
	int hotdog = 10;
	int& dinosaur = hotdog;
	int* dinosautPtr = &hotdog;
	int tacos = hotdog;
	hotdog = 15;
	cout << hotdog << std::endl;
	cout << dinosaur << std::endl;
	cout << *dinosautPtr << std::endl;
	cout << "tacos" << std::endl;
	cout << tacos << std::endl;
	int valA = 1;
	int velB = 2;
	int velC = -1;
	cout << velC << std::endl;
	sum(valA, velB, velC);
	cout << velC << std::endl;

	//closed
	//1.
	int num = 0;
	float dec = 0.0f;
	bool tf = false;
	char letter = 'a';
	int& numRef = num;
	float& decRef = dec;
	bool& tfRef = tf;
	char& letterRef = letter;
	float velA2 = 1.5;
	float velB2 = 4.5;
	float velC2 = 10;
	cout << velC2 << std::endl;
	product(velA2,velB2,velC2);
	cout << velC2 << std::endl;
	float aRef = 1.5;
	float bRef = 3;
	cout << aRef << std::endl;
	cout << bRef << std::endl;
	swap(aRef, bRef);
	cout << aRef << std::endl;
	cout << bRef << std::endl;
	Aussiegochi wolf{ 50,60,70,80 };
	cout << "happeynisss" << wolf.happiness << std::endl;
	while (true){}
}