#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"

void leake()
{
    system("leaks a.out");
}

int main()
{
    std::cout << "[1]=====================================" << std::endl;
    try
    {
        Form moein("Moein", false, 100, 150);
        moein.be
        // moein.decrementGrade();
        // moein.incrementGrade();
    }
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
    std::cout << "[2]=====================================" << std::endl;
    try
    {
        Bureaucrat fafa("fafa");
        // fafa.decrementGrade();
        // fafa.incrementGrade();
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