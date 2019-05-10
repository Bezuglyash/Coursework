#pragma once
#include "Account.h"

// ����� ��� ������ ����������
class Logic
{
private:
	// ���������� ��� �������� �������� �����
	unsigned long int new_cash;
	unsigned long int result;

	// ���������� ��� ������
	unsigned long int S; // ����� �������� �������, ������������� � �������� ��������� �� ��������� ����� ��������. ��� ������� �� �������������� ����� ����������� �������� �������, ���� ����������� ��������
	float I; // ������� ���������� ������
	int t; // ���������� ���� ���������� ��������� �� ������������� ������
	int K; // ���������� ���� � ����������� ����
	unsigned long int P; // �������������� ����� ������������ � ������� �������� �������
	unsigned long int Sp; // ����� ��������� (�������)
public:
	Logic();
	~Logic();

	friend istream& operator>>(istream& in, Logic& logic);
	unsigned long int operations(int number_of_operation, unsigned long int now_cash, bool confirm, string name_of_file);
	vector <string> normal_search(vector <string>& search_history, string word);
	vector <string> advanced_search(vector <string>& advanced_search_history, string name_operation, string cash, string date);
	string number_operation_to_name_operation(int number_operation);

	friend ostream& operator<<(ostream& out, Logic& logic);
};

