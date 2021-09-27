#include <iostream>

using namespace std;

int binome(){
    std::cout << "Binom in Form (3x - 5y)^7";
    string toParse = "";
    std::cin >> toParse;
    std::cout << toParse;
    string parsed,input=toParse;
    stringstream input_stringstream(input);

    if (getline(input_stringstream,parsed,' ')){
        std::cout << "Hello";
    }
}
