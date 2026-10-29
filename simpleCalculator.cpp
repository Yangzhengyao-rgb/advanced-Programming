#include <iostream>
#include <stdexcept>


double Multiply(double a, double b)
{
    return a * b;
}
double Divide(double a, double b)
{ 
        return a / b;
}
   
}
int main() {
    char operation = '*';
    double first{}, second{};
    std::cout << "enter your operation:\n";
    std::cin >> operation;
    std::cout << "enter the two numbers\n";
    std::cin >> first >> second;

    if (operation == '*')
    {
        std::cout << Multiply(first, second) << '\n';
    }
    else if(operation == '/')
    {
        if (second != 0)
            std::cout << Divide(first, second) << '\n';
        else
            std::cout << "cannot divide by zero\n";
    }
    return 0;
}
