#include "../include/Form.hpp"

Form::Form() : _name("Default"), _isSigned(false), _gradeToSign(150), _exeGrade(150)
{
    std::cout << "Form " << this->_name << " created." << std::endl;
    return;
}

Form::Form(const std::string name, bool indicate, int signGrade, int exeGrade) :
_name(name), _isSigned(indicate), _gradeToSign(signGrade), _exeGrade(exeGrade)
{
    if (_gradeToSign < 1 || _exeGrade < 1)
    {
		throw GradeTooHighException();
    }
    else if (_gradeToSign > 150 || _exeGrade > 150)
    {
        throw GradeTooLowException();
    }
    std::cout << "Form " << this->_name << " created." << std::endl;
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
    return this->_isSigned;
}

int Form::getSignGrade() const
{
    return this->_gradeToSign;
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
    out << "signed.\nsignGrade is: " << src.getSignGrade() << "\nexeGrade is: " << src.getExeGrade() << std::endl;
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

void Form::beSigned(int bureaucratGrade)
{
    // std::cout << "Debuge----> " << bureaucratGrade << this->_gradeToSign << std::endl;
        
    // if (src.getGrade() <= this->_gradeToSign)
    //     _isSigned = true;
    if (bureaucratGrade <= this->_gradeToSign)
        _isSigned = true;
    else
        throw Form::GradeTooLowException();
}
