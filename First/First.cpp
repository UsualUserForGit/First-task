#include "FirstTask.h"

#include <ctime>

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(int(time(0)));

	FirstTask firstTaskObject;

	//������� ������
	std::cout << "������:" << std::endl;
	firstTaskObject.showData();

	//������� ������� ��������� ������� ����� � ������� ������������ �������� �������������
	std::cout << std::endl << std::endl << std::endl << "�������:" << std::endl;
	firstTaskObject.showCalculations();


	if (firstTaskObject.isO1InOfRange() && firstTaskObject.isO2InOfRange()) //���� ������ � ������ ����������� ������� �� ������� �����
	{
		firstTaskObject.calculateDistanceToPointO1() < firstTaskObject.calculateDistanceToPointO2() ?
			std::cout << "����������� ����� �� ����� �1 ������ ������������� (O1)" << std::endl :
			std::cout << "����������� ����� �� ����� �1 ������ ������������� (O2)" << std::endl;

	}
	else
	{
		if (!firstTaskObject.isO1InOfRange() && !firstTaskObject.isO2InOfRange())	//���� �� ���� ����������� �� ������� �� ������� �����
		{
			std::cout << "OUT OF RANGE" << std::endl;
		}
		else	//���� ���� ����������� ������� �� ������� �����
		{
			firstTaskObject.isO2InOfRange() == false ?
				std::cout << "����������� ����� �� ����� �1 ������ ������������� (O1), ��� ��� ������ ����������� �� ������� �� ��." << std::endl :
				std::cout << "����������� ����� �� ����� �1 ������ ������������� (O2), ��� ��� ������ ����������� �� ������� �� ��." << std::endl;
		}
	}

	system("pause");
	return 0;
}