#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    return;
}

Bureaucrat::~Bureaucrat()
{
    return;
}

Bureaucrat::Bureaucrat(const std::string name):_name(name), _grade(150)
{
    std::cout << "Bureaucrat " << this->_name << " created with " << this->_grade << " grade." << std::endl;
    return;
}

Bureaucrat::Bureaucrat(const std::string name, int grade):_name(name), _grade(grade)
{
    std::cout << "Bureaucrat " << this->_name << " created with " << this->_grade << " grade." << std::endl;
    return;
}