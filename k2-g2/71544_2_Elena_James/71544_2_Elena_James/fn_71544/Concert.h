/*3) �� �� �������� ����  Concert, ����� ��������� ����� �� �����(Band), ���� ��� �������� ��������������:
averageAwesomeness - ������ ������� ���������� �� ����� �� ��������( �������� ����� �� ������ �����)
headliners - ������ �������� ����� � ��������( ���� � ��� ������ �����)
�� �� ��������� ��������� ����������� �� �����.*/

#ifndef CONCERT_H
#define CONCERT_H
#include "Band.h"
class Concert
{
public:
	Concert();
	~Concert();
	Concert(const Concert&);
	Concert(Band*, int, int);
	Concert& operator=(const Concert&);

	double averageAwesomeness();
	Band& headliners();
private:
	Band* bands;
	int size;
	int capacity;
};

#endif