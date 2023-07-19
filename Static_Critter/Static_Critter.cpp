// Static_Critter

#include <iostream>
using namespace std;

class Critter
{
public:
	static int s_Total; // статическая переменная Total
	// Общее кол-во существующих обектов
	Critter(int hunger = 0);
	static int GetTotal(); // прототип сатической функции-члена
private:
	int m_Hunger;
};

int Critter::s_Total = 0; // инициализируем переменную, которая отвечает за кол-во объектов

Critter::Critter(int hunger)
{
	cout << "A critter has been born! " << endl;
	++s_Total;
}

int Critter::GetTotal() // определение статической функции-члена
{
	return s_Total;
}


int main()
{
	cout << "The total number of critters is: ";
	cout << Critter::s_Total << "\n\n";
	Critter crit1, crit2, crit3;
	cout << "\nThe total number of critters is: ";
	cout << Critter::GetTotal() << "\n";
	return 0;
}

