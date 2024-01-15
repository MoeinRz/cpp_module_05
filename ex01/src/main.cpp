#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"

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
        Form form("CPP_Module_05", false, 80, 50);

        std::cout << "Original Form: " << form << std::endl;
        moein.signForm(form); // Should print that Moein signed the form

        std::cout << "Updated Form: " << form << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }


    std::cout << "[1]=====================================" << std::endl;
    Bureaucrat moein("moein", 100);
    try
    {
        Form form("CPP_Module_05", false, 15, 1);
    }
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
    // std::cout << "1: " << form << std::endl;
    // std::cout << "[2]=====================================" << std::endl;
    // try
    // {
    //     Form fafa("fafa", false, 1, 1);
    // }
	// catch (std::exception & e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
    // std::cout << "\n[3]=====================================\n" << std::endl;
    
    // // Form form("CPP_Module_05", false, 0, 100);
    
    // moein.signForm(form);
    // std::cout << "2: " << form << std::endl;
    
    // std::cout << "[4]=====================================" << std::endl;
    // Form formf("CPP_Module_05", false, 101, 100);
    // std::cout << "1: " << formf << std::endl;
    // moein.signForm(formf);
    // std::cout << "2: " << formf << std::endl;
    
    // std::cout << "[END]=====================================" << std::endl;

// leake();
return 0;
}