#include "../include/Aform.hpp"

Aform::Aform() : _name("Default"), _isSigned(false), _gradeToSign(150), _exeGrade(150)
{
    std::cout << "Form " << this->_name << " created." << std::endl;
    return;
}

Aform::Aform(const std::string name, bool indicate, int signGrade, int exeGrade) :
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

Aform::~Aform()
{
    std::cout << "Form " << this->_name << " destrucred." << std::endl;
    return; 
}

std::string Aform::getName() const
{
    return this->_name;
}

bool Aform::getIndicate() const
{
    return this->_isSigned;
}

int Aform::getSignGrade() const
{
    return this->_gradeToSign;
}

int Aform::getExeGrade() const
{
    return this->_exeGrade;
}

std::ostream& operator<<(std::ostream& out, const Aform& src)
{
    out << src.getName() << ", Form grade ";
    if (src.getIndicate() == false)
        out << "not ";
    out << "signed.\nsignGrade is: " << src.getSignGrade() << "\nexeGrade is: " << src.getExeGrade() << std::endl;
    return out;
}

const char* Aform::GradeTooHighException::what() const throw()
{
    return "Grade is too high.";
}

const char* Aform::GradeTooLowException::what() const throw()
{
    return "Grade is too low.";
}

void Aform::beSigned(int bureaucratGrade)
{
    if (bureaucratGrade <= _gradeToSign)
        _isSigned = true;
    else
        throw Aform::GradeTooLowException();
}
