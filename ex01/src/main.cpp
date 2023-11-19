#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"

void leake()
{
    system("leaks a.out");
}

int main()
{
    std::cout << "[1]=====================================" << std::endl;
    Bureaucrat moein("moein", 100);
    try
    {
        Form form("driving licence", false, 0, 1);
    }
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
    std::cout << "[2]=====================================" << std::endl;
    try
    {
        Form form("fafa", false, 20, 150);
        // fafa.decrementGrade();
        // fafa.incrementGrade();
    }
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
    std::cout << "[3]=====================================" << std::endl;
    Form form("Driving licence", false, 10, 150);
    moein.signForm(form);
    
    std::cout << "[END]=====================================" << std::endl;

// leake();
return 0;
}