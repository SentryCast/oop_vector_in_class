#include <iostream>
#include "PhoneBook.h"


int main()
{
    PhoneBook pb;

    pb.addName("Vadim");
    pb.addNumber(123);

    pb.addName("Tom");
    pb.addNumber(5432423);

    std::cout << pb.getName(0) << " " << pb.getNumber(0) << '\n';
    std::cout << pb.getName(1) << " " << pb.getNumber(1) << '\n';

    std::cout << "============\n";

    pb.printAllNames();
    pb.printAllNumbers();

    std::cout << "============\n";

    pb.removeNumberByIndex(1); // remove 5432423
    pb.removeNumber(123);

    pb.removeName("Vadim");

    pb.printAllNames();
    pb.printAllNumbers();

    // Остался только Tom
}
