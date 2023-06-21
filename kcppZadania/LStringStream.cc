#include <iostream>
#include <string>
#include <sstream>

struct University
{
    string name;
    int studentCount;
};

int main()
{
    University u;

    cout << "Input your university name and students count:\n";
    string buffer;
    std::getline(std::cin, buffer);

    std::stringstream ss(buffer);
    ss >> u.name >> u.studentCount;

    std::cout << "Name - " << u.name << std::endl;
    std::cout << "Here learns -  " << u.studentCount << " students!" << std::endl;

    return 0;
}