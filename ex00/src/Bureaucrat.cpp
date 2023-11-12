#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{
    std::cout << "Bureaucrat " << this->_name << " created with " << this->_grade << " grade." << std::endl;
    return;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat " << this->_name << " destructed." << std::endl;
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

std::string Bureaucrat::getName() const
{
    return this->_name;
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& src)
{
    out << src.getName() << ", bureaucrat grade " << src.getGrade();
    return out;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high.";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low.";
}
