#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"

void leake()
{
    system("leaks Bureaucrat");
}

int main()
{
    try {
        // Create bureaucrats
        Bureaucrat moein("Moein", 100);
        Bureaucrat john("John", 5);

        // Create forms
        ShrubberyCreationForm shrubberyForm("home");
        RobotomyRequestForm robotomyForm("John Doe");
        PresidentialPardonForm pardonForm("Alice");

        // Display original forms
        std::cout << BLUE << "Original Shrubbery Form: " << shrubberyForm << RESET << std::endl;
        std::cout << BLUE << "Original Robotomy Form: " << robotomyForm << RESET << std::endl;
        std::cout << BLUE << "Original Pardon Form: " << pardonForm << RESET << std::endl;

        // Sign forms
        moein.signForm(shrubberyForm);
        moein.signForm(robotomyForm);
        john.signForm(pardonForm);

        // Display signed forms
        std::cout << GREEN << "Signed Shrubbery Form: " << shrubberyForm << RESET << std::endl;
        std::cout << GREEN << "Signed Robotomy Form: " << robotomyForm << RESET << std::endl;
        std::cout << GREEN << "Signed Pardon Form: " << pardonForm << RESET << std::endl;

        // Execute forms
        std::cout << YELLOW << "\nExecuting Shrubbery Form...\n" << RESET;
        moein.executeForm(shrubberyForm);

        std::cout << YELLOW << "\nExecuting Robotomy Form...\n" << RESET;
        moein.executeForm(robotomyForm);

        std::cout << YELLOW << "\nExecuting Pardon Form...\n" << RESET;
        john.executeForm(pardonForm);
    }
    catch (const std::exception& e)
    {
        std::cerr << RED << "Exception: " << e.what() << RESET << std::endl;
    }
// leake();
    return 0;
}
