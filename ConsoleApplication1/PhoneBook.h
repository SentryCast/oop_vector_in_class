#pragma once
#include <string>
#include <vector>
#include <iostream>
// ��� ����������� ������� ������ PhoneBook
// ����� ����� ����������� ������ ������� � �������
// ��� �����, ����� �� ������, ��� �������� � ���������
// ������ ������
class PhoneBook
{
public:
	PhoneBook();
	PhoneBook(const std::vector<int>& numbers, const std::vector<std::string>& names);

	int getNumber(size_t index);
	// ������ setNumber ���� addNumber, �� ������� ���� ���� ���������
	// ����� � ����� �������, � �� ��������� ������ ������
	void addNumber(int number);
	// ��� bool ����� ���������� true � ������ ��������� ��������
	// � false � ������ �������
	bool removeNumber(int number);
	void removeNumberByIndex(size_t index);

	const std::string& getName(size_t index);
	void addName(const std::string& name);
	bool removeName(const std::string& name);
	// removeNameByIndex(size_t index) - ��� �� ������� ����������� ��������������

	void printAllNumbers();
	void printAllNames();
private:

	std::vector<int> _numbers;
	std::vector<std::string> _names;
};

