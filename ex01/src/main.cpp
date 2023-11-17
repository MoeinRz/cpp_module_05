#include "../include/Bureaucrat.hpp"

void leake()
{
    system("leaks a.out");
}

int main()
{
    std::cout << "[1]=====================================" << std::endl;
    try
    {
        Bureaucrat moein("Moein", 100);
        moein.decrementGrade();
        moein.incrementGrade();
    }
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
    std::cout << "[2]=====================================" << std::endl;
    try
    {
        Bureaucrat fafa("fafa");
        fafa.decrementGrade();
        fafa.incrementGrade();
    }
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
    std::cout << "[3]=====================================" << std::endl;
    try
    {
        Bureaucrat fault("fault", 0);
    }
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
    std::cout << "[END]=====================================" << std::endl;

// leake();
return 0;
}