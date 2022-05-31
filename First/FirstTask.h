#pragma once
#include <cmath>	// Для возведения в степень и вычисления квадратного корня
#include <iostream>

class FirstTask
{
public:
	FirstTask();

	void showData();	//showData() - показывает координаты точек манипуляторов и целевой точки 
	void showCalculations();	//showCalculations() - показывает расчёты, которые вычисляют находится ли 
								//целевая точка в радиусе эффективного действия манипулятора, а также формулы которые применяются  

	float calculateDistanceToPointO1();		//Возвращает расстояние от точки О1, до целевой точки
	float calculateDistanceToPointO2();		//Возвращает расстояние от точки О2, до целевой точки

	bool isO1InOfRange();	//возвращает булевое значение, которое показывает находится ли целевая точка в радиусе эффективного действия манипулятора О1
	bool isO2InOfRange();	//возвращает булевое значение, которое показывает находится ли целевая точка в радиусе эффективного действия манипулятора О2

	~FirstTask() = default;
private:
	//Данные
	int O1[2];
	int O2[2];
	int	P1[2];

	int R1;
	int R2;

	bool O1InRange;
	bool O2InRange;


};
