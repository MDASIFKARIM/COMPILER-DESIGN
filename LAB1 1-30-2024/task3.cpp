#include <iostream>
#include <stack>
#include <string>

int main() {
    std::stack<char> name;
    std::string firstName, lastName;

    std::cout << "Enter your first name: ";
    std::getline(std::cin, firstName);

    std::cout << "Enter your last name: ";
    std::getline(std::cin, lastName);

    for (char ch : lastName) {
        name.push(ch);
    }

    for (char ch : firstName) {
        name.push(ch);
    }

    std::string fullName;

    while (name.empty()) {
        fullName += name.top();
        name.pop();
    }

    std::cout << "Your full name is: " << fullName << std::endl;

    return 0;
}
