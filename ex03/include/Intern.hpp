#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(Intern const &src);
        ~Intern();
        Intern& operator=(Intern const &src);
        AForm* makeForm(std::string formName, std::string target);
};


#endif
