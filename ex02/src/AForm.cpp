#include "../include/AForm.hpp"

AForm::AForm() : _name("Default"), _isSigned(false), _gradeToSign(150), _exeGrade(150)
{
    std::cout << "Form " << this->_name << " created." << std::endl;
    return;
}

AForm::AForm(const std::string name, bool indicate, int signGrade, int exeGrade) :
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

AForm::AForm(const AForm& src) : _name(src._name), _isSigned(src._isSigned),
  _gradeToSign(src._gradeToSign), _exeGrade(src._exeGrade)
{

}

AForm::~AForm()
{
    std::cout << "Form " << this->_name << " destrucred." << std::endl;
    return; 
}

std::string AForm::getName() const
{
    return this->_name;
}

bool AForm::getIndicate() const
{
    return this->_isSigned;
}

int AForm::getSignGrade() const
{
    return this->_gradeToSign;
}

int AForm::getExeGrade() const
{
    return this->_exeGrade;
}

std::ostream& operator<<(std::ostream& out, const AForm& src)
{
    out << src.getName() << ", Form grade ";
    if (src.getIndicate() == false)
        out << "not ";
    out << "signed.\nsignGrade is: " << src.getSignGrade() << "\nexeGrade is: " << src.getExeGrade() << std::endl;
    return out;
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return "Grade is too high.";
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "Grade is too low.";
}

void AForm::beSigned(int bureaucratGrade)
{
    if (bureaucratGrade <= _gradeToSign)
        _isSigned = true;
    else
        throw AForm::GradeTooLowException();
}
