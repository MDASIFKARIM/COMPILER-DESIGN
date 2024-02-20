#include <iostream>
#include <string>

using namespace std;

bool Identifier(string & variable) {

    if (variable.empty())
        return false;


    if (!isalpha(variable[0]) && variable[0] != '_')
        return false;


    for (char c : variable) {

        if (!isalnum(c) && c != '_')
            return false;
    }


    return true;
}

int main() {

    string variable;

    cout << "Enter the first variable name: ";
    cin >> variable;



    cout << variable <<(Identifier(variable) ? "   1: valid" : "0: invalid") << " identifier." << endl;



    return 0;
}
