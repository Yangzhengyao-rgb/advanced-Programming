#include <iostream>

double sum(double a, double b)
{
    return a + b;

}


double subtract(double a, double b)
 {
        return a - b;
 }

 int main ()
{
    char op;
    double a, b;

    std::cout << "Enter operation ( + or -)：";
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
    else 
    {
        std::cout << "404!" << std::endl;
    }
    return 0;
    
}

