#include <iostream>
#include <stdexcept>

double sum(double a, double b)
{
    return a + b;
}

double Multiply(double a, double b)
{
    return a * b;
}
double Divide(double a, double b)
{ 
        return a / b;
}
double subtract(double a, double b)
 {
        return a - b;
 }  


 int main ()
{
    char op;
    double a, b;

    std::cout << "Enter operation ( + - * /)：";
    std::cin >> op;
    std::cout << "Enter two numbers; ";
    std::cin >> a >> b;

    if (op == '+') 
    {
        std::cout << "Result: "<< sum(a, b) << std::endl;
    }
    else if (op == '-') 
    {
        std::cout << "Result: "<< subtract(a, b) << std::endl;

    }
    else if (op == '*')
    {
        std::cout << "Result: "<< Multiply(a, b) << std::endl;
    }
    else if (op == '/')
    {
        if (b != 0)
            std::cout << "Result: "<< Divide(a, b) << std::endl;
        else
            std::cout << "Error: Division by zero is not allowed!" << std::endl;
    }
    else 
    {
        std::cout << "404!" << std::endl;
    }
    return 0;
    
}

