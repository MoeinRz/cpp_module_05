#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"

void leake()
{
    system("leaks a.out");
}

int main()
{
    std::cout << "\n[0]=====================================\n" << std::endl;
    // try
    // {
    //     Bureaucrat moein("Moein", 80);
    //     AForm form("CPP_Module_05", false, 80, 50);

    //     std::cout << "Original Form: " << form << std::endl;
    //     moein.signForm(form);
    //     std::cout << "Updated Form: " << form << std::endl;
    // }
    // catch (const std::exception& e)
    // {
    //     std::cerr << "Exception: " << e.what() << std::endl;
    // }


    // std::cout << "\n[1]=====================================\n" << std::endl;
    // try
    // {
    //     Bureaucrat moein("Moein", 80);
    //     AForm form("CPP_Module_05", false, 10, 50);

    //     std::cout << "Original Form: " << form << std::endl;
    //     moein.signForm(form);
    //     std::cout << "Updated Form: " << form << std::endl;
    // }
    // catch (const std::exception& e)
    // {
    //     std::cerr << "Exception: " << e.what() << std::endl;
    // }


    // std::cout << "\n[2]=====================================\n" << std::endl;
    // try
    // {
    //     AForm fafa("fafa", false, 0, 1);
    // }
	// catch (std::exception & e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
    
    // std::cout << "\n[3]=====================================\n" << std::endl;
    // try
    // {
    //     AForm fafa("fafa", false, 2, 151);
    // }
	// catch (std::exception & e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }

    // std::cout << "\n[END]=====================================" << std::endl;

    try {
        Bureaucrat moein("Moein", 100);

        ShrubberyCreationForm shrubberyForm("home");
        // RobotomyRequestForm robotomyForm("John Doe");
        // PresidentialPardonForm pardonForm("Alice");

        std::cout << "Original Shrubbery Form: " << shrubberyForm << std::endl;
        moein.signForm(shrubberyForm);

        // std::cout << "Original Robotomy Form: " << robotomyForm << std::endl;
        // moein.signForm(robotomyForm);

        // std::cout << "Original Pardon Form: " << pardonForm << std::endl;
        // moein.signForm(pardonForm);

        std::cout << "\nExecuting Shrubbery Form...\n";
        moein.executeForm(shrubberyForm);

        // std::cout << "\nExecuting Robotomy Form...\n";
        // moein.executeForm(robotomyForm);

        // std::cout << "\nExecuting Pardon Form...\n";
        // moein.executeForm(pardonForm);

    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
// leake();
return 0;
}