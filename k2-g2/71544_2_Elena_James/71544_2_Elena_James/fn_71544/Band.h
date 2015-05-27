/*
2) �� �� �������� ����  Band � ������ ���, ����� ��������� ��������� ����� 
�� ������ , ���� ��� �������� ��������������:
addStar- �������� �� ������
removeStar- ���������� �� ������ �� �������o ���
getStar- ����� ������  �� �������o ���
print - ������� �� ������ ���������� �� ������ ��� ������
�� �� ����������� ��������  += , ����� �� ��������� 2 ����� ���� ������ 
���-�������  5 ������ � �� ������ � ���������.
�� �� ��������� ��������� ����������� �� �����.
�����: pickAFrontman- ������ ���-����� ������ � ������� � � ����� ���� ��������.
�����:  ������� � ����  � ����� �� �������� ��� ������ �������� �� ������� ����� �� �������� ��.*/

#ifndef BAND_H
#define BAND_H
#include "Rockstar.h"

class Band
{
public:
	void setName(char*);
	char* getName()const;
	void setSize(int);
	int getSize()const;
	void setCap(int);
	int getCap()const;

	Band();
	Band(char*, Rockstar*,int ,int);
	Band(const Band&);
	Band& operator=(const Band&);
	~Band();

	void print();

	void addStar(const Rockstar&);
	bool removeStar(const Rockstar&);
	Rockstar& getStar(char*);

	Band operator+=(const Band&);
	Band bestFive();
	void sort();
	double avAw();

	Rockstar& pickAFrontman()const;

private:
	char*name;
	Rockstar* stars;
	int size;
	int capacity;
};

#endif