/*������ 1. �� �� �������� ���� Hex �� ������ � ���� ��������������� ����� ��� ����.
�� ����������� �� ������� �� �� �������� ����� �� ���-����� 100 �������� �� ���
unsigned char, ����� �� ����� ��������� ��������������� �����. �������� �����
��� ���-����� ������ (������� �� ��������� � � ������� ������� �� ������).
�������� ������ �� ������ �� ������ ���� �������� �� ������������. 
�� �� ���������� ����������� �����������, ������������� �������� � ���������� �� ���������.*/
#ifndef HEX_H
#define HEX_H

const int maxSize = 100;
class Hex
{
public:
	Hex();
	Hex(const Hex&);
	Hex(char*);
	Hex& operator=(const Hex&);
	~Hex();
	void print()const;

	Hex& operator+(const Hex&);
	Hex& operator-(const Hex&);
	Hex& operator*(const Hex&);
	Hex& operator/(const Hex&);

	bool operator>(const Hex&);
	bool operator==(const Hex&);
	bool operator<(const Hex&);
	bool operator>=(const Hex&);
	bool operator<=(const Hex&);
	bool operator!=(const Hex&);

	
private:
	char* hex;
	int size;
	int fromHextoDec(const Hex&);
};

#endif