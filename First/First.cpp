#include "FirstTask.h"

#include <ctime>

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(int(time(0)));

	FirstTask firstTaskObject;

	//Выводим данные
	std::cout << "Данные:" << std::endl;
	firstTaskObject.showData();

	//Выводим расчёты вхождения целевой точки в радиусы эффективного действия манипуляторов
	std::cout << std::endl << std::endl << std::endl << "Расчёты:" << std::endl;
	firstTaskObject.showCalculations();


	if (firstTaskObject.isO1InOfRange() && firstTaskObject.isO2InOfRange()) //Если первый и второй манипулятор достают до целевой точки
	{
		firstTaskObject.calculateDistanceToPointO1() < firstTaskObject.calculateDistanceToPointO2() ?
			std::cout << "Оптимальнее дойти до точки Р1 первым манипулятором (O1)" << std::endl :
			std::cout << "Оптимальнее дойти до точки Р1 вторым манипулятором (O2)" << std::endl;

	}
	else
	{
		if (!firstTaskObject.isO1InOfRange() && !firstTaskObject.isO2InOfRange())	//Если ни один манипулятор не достает до целевой точки
		{
			std::cout << "OUT OF RANGE" << std::endl;
		}
		else	//Если один манипулятор достает до целевой точки
		{
			firstTaskObject.isO2InOfRange() == false ?
				std::cout << "Оптимальнее дойти до точки Р1 первым манипулятором (O1), так как второй манипулятор не достает до неё." << std::endl :
				std::cout << "Оптимальнее дойти до точки Р1 вторым манипулятором (O2), так как первый манипулятор не достает до неё." << std::endl;
		}
	}

	system("pause");
	return 0;
}