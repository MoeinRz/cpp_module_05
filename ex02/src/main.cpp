#include "../include/Bureaucrat.hpp"
#include "../include/Aform.hpp"

void leake()
{
    system("leaks a.out");
}

int main()
{
    std::cout << "\n[0]=====================================\n" << std::endl;
    try
    {
        Bureaucrat moein("Moein", 80);
        Aform form("CPP_Module_05", false, 80, 50);

        std::cout << "Original Form: " << form << std::endl;
        moein.signForm(form);
        std::cout << "Updated Form: " << form << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }


    std::cout << "\n[1]=====================================\n" << std::endl;
    try
    {
        Bureaucrat moein("Moein", 80);
        Aform form("CPP_Module_05", false, 10, 50);

        std::cout << "Original Form: " << form << std::endl;
        moein.signForm(form);
        std::cout << "Updated Form: " << form << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }


    std::cout << "\n[2]=====================================\n" << std::endl;
    try
    {
        Aform fafa("fafa", false, 0, 1);
    }
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
    
    std::cout << "\n[3]=====================================\n" << std::endl;
    try
    {
        Aform fafa("fafa", false, 2, 151);
    }
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

    std::cout << "\n[END]=====================================" << std::endl;

// leake();
return 0;
}