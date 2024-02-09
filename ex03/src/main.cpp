#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/Intern.hpp"

void leake()
{
    system("leaks a.out");
}

int main()
{
    Intern someRandomIntern;

    AForm* scf = someRandomIntern.makeForm("shrubbery creation", "Garden");
    if (scf != NULL) {
        Bureaucrat bureaucrat("Tom", 100);
        bureaucrat.signForm(*scf);
        bureaucrat.executeForm(*scf);
        delete scf;
    }

    AForm* rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    if (rrf != NULL) {
        Bureaucrat bureaucrat("Jerry", 70);
        bureaucrat.signForm(*rrf);
        bureaucrat.executeForm(*rrf);
        delete rrf;
    }

    AForm* ppf = someRandomIntern.makeForm("presidential pardon", "Alice");
    if (ppf != NULL) {
        Bureaucrat bureaucrat("Mike", 20);
        bureaucrat.signForm(*ppf);
        bureaucrat.executeForm(*ppf);
        delete ppf;
    }

// leake();
return 0;
}
