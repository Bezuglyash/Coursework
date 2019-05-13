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
	const int K = 365; // ���������� ���� � ����������� ����
	unsigned long int Sp; // ����� ��������� (�������)
public:
	Logic() {}
	Logic(float percent, int count_days);
	~Logic() {}

	friend istream& operator>>(istream& in, Logic& logic);
	unsigned long int operations(int number_of_operation, unsigned long int now_cash, bool confirm, string name_of_file);
	unsigned long int amount_of_income();
	unsigned long int amount_all_return();
	vector <string> normal_search(vector <string>& search_history, string word);
	vector <string> advanced_search(vector <string>& advanced_search_history, string name_operation, string cash, string day);
	string number_operation_to_name_operation(int number_operation);
	string number_day_to_name_day(string number_day);
	Logic& operator=(const Logic log);
	friend ostream& operator<<(ostream& out, Logic& logic);
};