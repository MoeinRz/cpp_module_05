#include "../include/Form.hpp"

Form::Form() : _name("Default"), _indicate(false), _signGrade(150), _exeGrade(150)
{
    std::cout << "Form " << this->_name << " created." << std::endl;
    return;
}

Form::Form(const std::string name, bool indicate, int signGrade, int exeGrade) :
_name(name), _indicate(indicate), _signGrade(signGrade), _exeGrade(exeGrade)
{
    if (_signGrade < 1 || _exeGrade < 1)
		throw GradeTooHighException();
	else if (_signGrade > 150 || _exeGrade > 150)
		throw GradeTooLowException();
    std::cout << "Form " << this->_name << "created." << std::endl;
    return;
}

Form::~Form()
{
    std::cout << "Form " << this->_name << " destrucred." << std::endl;
    return; 
}

std::string Form::getName() const
{
    return this->_name;
}

bool Form::getIndicate() const
{
    return this->_indicate;
}

int Form::getSignGrade() const
{
    return this->_signGrade;
}

int Form::getExeGrade() const
{
    return this->_exeGrade;
}

std::ostream& operator<<(std::ostream& out, const Form& src)
{
    out << src.getName() << ", Form grade ";
    if (src.getSignGrade() == false)
        out << "not ";
    out << "signed.\nsignGrade is: " << src.getSignGrade() << "\n exeGrade is: " << src.getExeGrade() << std::endl;
    return out;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Grade is too high.";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade is too low.";
}

void Form::beSigned(const Bureaucrat& src)
{
    if (src.getGrade() <= this->_signGrade)
        _indicate = true;
    else
        throw Form::GradeTooLowException();
}