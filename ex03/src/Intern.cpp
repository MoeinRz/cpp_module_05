#include "../include/Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const &src) {
    *this = src;
}

Intern::~Intern() {}

Intern& Intern::operator=(Intern const &src) {
    (void)src;
    return *this;
}

AForm* Intern::makeForm(std::string formName, std::string target) {
    if (formName == "shrubbery creation") {
        return new ShrubberyCreationForm(target);
    } else if (formName == "robotomy request") {
        return new RobotomyRequestForm(target);
    } else if (formName == "presidential pardon") {
        return new PresidentialPardonForm(target);
    } else {
        std::cout << "Form " << formName << " not found" << std::endl;
        return NULL;
    }
}

