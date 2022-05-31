#pragma once
#include <cmath>	// ��� ���������� � ������� � ���������� ����������� �����
#include <iostream>

class FirstTask
{
public:
	FirstTask();

	void showData();	//showData() - ���������� ���������� ����� ������������� � ������� ����� 
	void showCalculations();	//showCalculations() - ���������� �������, ������� ��������� ��������� �� 
								//������� ����� � ������� ������������ �������� ������������, � ����� ������� ������� �����������  

	float calculateDistanceToPointO1();		//���������� ���������� �� ����� �1, �� ������� �����
	float calculateDistanceToPointO2();		//���������� ���������� �� ����� �2, �� ������� �����

	bool isO1InOfRange();	//���������� ������� ��������, ������� ���������� ��������� �� ������� ����� � ������� ������������ �������� ������������ �1
	bool isO2InOfRange();	//���������� ������� ��������, ������� ���������� ��������� �� ������� ����� � ������� ������������ �������� ������������ �2

	~FirstTask() = default;
private:
	//������
	int O1[2];
	int O2[2];
	int	P1[2];

	int R1;
	int R2;

	bool O1InRange;
	bool O2InRange;


};
