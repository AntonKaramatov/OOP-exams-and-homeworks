/*������ 2. ������� �� ����� ������� ��������� � ������ �� ��������� ��.
����������� � ���� ���������. �� �� �������� ���� ListPerson �� ������ �
��������� �� �������. ������ �� ������� ����� �� ������� �� ����. �� ��
���������� ������ �� �������� � ��������� �� �������, � ���� �� ������ ��
������� �� ������� �������. ��������� � ������ ������ �� �� ��������.
�� �� ���������� �������� �� ����������� �� ��� ���������, �� ��������
�� ��������� � �� ��������� �� ��� ���������. �� �� �������� �����, �����
�� �������� ������� ������ ������� �� ������. �� ����� � ����� �� �� ��������
� ����� �� ��������� Zodiac � ������: �������� �� ����� �� �������, ���� ��
�������� � ���� �� ���� ��. �� �� ���������� ��� �������� �� �����:
� ��������� ����� � ��� �������� �����.
*/
#ifndef LIST_H
#define LIST_H
#include "Card.h"

class ListPerson
{
public:
	~ListPerson();
	ListPerson();
	ListPerson(int);
	ListPerson(int,int,Card*);
	ListPerson& operator=(const ListPerson&);
	ListPerson(const ListPerson&);
	bool addCard(const Card&);
	bool removeCard(char*);
	Card& getCard(char*)const;
	ListPerson unionList(const ListPerson&);
	ListPerson sameCards(const ListPerson&);
	ListPerson& removeSame(const ListPerson&);
	void print()const;
	bool Unique(char*);
private:
	Card* cards;
	int size;
	int capacity;

};
#endif