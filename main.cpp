#include <iostream>
#include <string>

std::string calculate(const std::string& command, int first, int second);

int add(int first, int second) {

    return first + second;
}

int subtract(int first, int second) {

    return first - second;
}

int multiply(int first, int second) {

    return first * second;
}

int divide(int first, int second) {

    return (first / second);
}

std::string calculate() {

    int first;
    int second;
    int result;

    std::cout << " Enter the first number " << '\n';
    std::cin >> first;

    std::cout << " Enter the second number ( it can't be 0 ) " << '\n';
    std::cin >> second;

    std::cout << " Write a command \n" << " All commands \n";
    std::cout << " add \n multiply \n subtract \n divide \n";
    std::string command;
    std::cin >> command;

    if ("add" == command)
    {
        result = add(first, second);
    }
    else if ("multiply" == command)
    {
        result = multiply(first, second);
    }
    else if ("subtract" == command)
    {
        result = subtract(first, second);
    }
    else if ("divide" == command)
    {
        if (0 != second)
        {
            result = divide(first, second);
        }
        else
        {
            std::cout << " Error \n";
            return " ";
        }

    }
    return std::to_string(result);
        
}



int main() {

    std::cout << calculate();

    return 0;
}
