#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"

void leake()
{
    system("leaks a.out");
}

int main()
{
    PresidentialPardonForm presidentialForm("Marx");
    RobotomyRequestForm robotomyForm("Ehab");
    ShrubberyCreationForm shrubberyForm("Deyan");
    Bureaucrat kaya("Kaya", 1);
    // Try to execute the forms before they are signed

    kaya.executeForm(presidentialForm);

    Bureaucrat valentin("Valentin", 1);
    valentin.signForm(presidentialForm);
    valentin.executeForm(presidentialForm);
    
    kaya.signForm(robotomyForm);
    kaya.executeForm(robotomyForm);

    // Sign the forms
    Bureaucrat enes("Enes", 50);
    enes.signForm(presidentialForm);
    enes.signForm(robotomyForm);
    enes.signForm(shrubberyForm);
    enes.executeForm(presidentialForm);
    enes.executeForm(robotomyForm);
    enes.executeForm(shrubberyForm);

    return 0;
}
    

// int main()
// {
//     std::cout << "\n[0]=====================================\n" << std::endl;
//     try
//     {
//         Bureaucrat moein("Moein", 80);
//         AForm form("CPP_Module_05", false, 80, 50);

//         std::cout << "Original Form: " << form << std::endl;
//         moein.signForm(form);
//         std::cout << "Updated Form: " << form << std::endl;
//     }
//     catch (const std::exception& e)
//     {
//         std::cerr << "Exception: " << e.what() << std::endl;
//     }


//     std::cout << "\n[1]=====================================\n" << std::endl;
//     ShrubberyCreationForm shrubberyForm();
//     try
//     {
//         Bureaucrat moein("Moein", 80);
//         AForm form("CPP_Module_05", false, 10, 50);

//         std::cout << "Original Form: " << form << std::endl;
//         moein.signForm(form);
//         std::cout << "Updated Form: " << form << std::endl;

//     }
//     catch (const std::exception& e)
//     {
//         std::cerr << "Exception: " << e.what() << std::endl;
//     }


//     std::cout << "\n[2]=====================================\n" << std::endl;
//     try
//     {
//         AForm fafa("fafa", false, 0, 1);
//     }
// 	catch (std::exception & e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
    
//     std::cout << "\n[3]=====================================\n" << std::endl;
//     try
//     {
//         AForm fafa("fafa", false, 2, 151);
//     }
// 	catch (std::exception & e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}

//     std::cout << "\n[END]=====================================" << std::endl;

// // leake();
// return 0;
// }