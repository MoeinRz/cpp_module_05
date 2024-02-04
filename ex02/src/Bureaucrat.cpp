#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"

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
    if (_grade < 1)
		throw GradeTooHighException();
	else if (_grade > 150)
		throw GradeTooLowException();
    std::cout << "Bureaucrat " << this->_name << " created with " << this->_grade << " grade." << std::endl;
    return;
}

void Bureaucrat::decrementGrade()
{
    if (this->_grade > 149)
        throw GradeTooLowException();
    this->_grade++;
    std::cout << "Bureaucrat " << this->_name << " decrement to " << this->_grade << " grade." << std::endl;
}

void Bureaucrat::incrementGrade()
{
    if (this->_grade < 2)
        throw GradeTooHighException();
    this->_grade--;
    std::cout << "Bureaucrat " << this->_name << " increment to " << this->_grade << " grade." << std::endl;
}

std::string Bureaucrat::getName() const
{
    return this->_name;
}

int Bureaucrat::getGrade() const
{
    return _grade;
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

void Bureaucrat::signForm(AForm& form)
{
    try
    {
        form.beSigned(_grade);
        std::cout << getName() << " signed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << getName() << " couldn't sign " << form.getName()
		<< " because bureaucrat's grade is too low" << std::endl;
    }
    
}

void Bureaucrat::executeForm(AForm const & form)
{
    try
    {
        form.execute(*this);
        std::cout << getName() << " executed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        std::cout << getName() << " couldn't execute " << form.getName() << std::endl;
    }
    
}
