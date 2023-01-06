#pragma once
#include <string>
#include <vector>
#include <iostream>
// Это укороченный вариант класса PhoneBook
// Здесь будут реализованы только геттеры и сеттеры
// для полей, чтобы вы поняли, как работать с массивами
// внутри класса
class PhoneBook
{
public:
	PhoneBook();
	PhoneBook(const std::vector<int>& numbers, const std::vector<std::string>& names);

	int getNumber(size_t index);
	// вместо setNumber пишу addNumber, по скольку буду лишь добавлять
	// номер в конец массива, а не полностью менять массив
	void addNumber(int number);
	// тип bool будет возвращать true в случае успешного удаления
	// и false в случае неудачи
	bool removeNumber(int number);
	void removeNumberByIndex(size_t index);

	const std::string& getName(size_t index);
	void addName(const std::string& name);
	bool removeName(const std::string& name);
	// removeNameByIndex(size_t index) - это вы сможете реализовать самостоятельно

	void printAllNumbers();
	void printAllNames();
private:

	std::vector<int> _numbers;
	std::vector<std::string> _names;
};

