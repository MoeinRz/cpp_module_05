#include "../include/Form.hpp"

Form::Form() : _name("Default"), _indicate(false), _signGrade(150), _exeGrade(150)
{
    std::cout << "Form " << this->_name << " created." << std::endl;
    return;
}

Form::Form(const std::string name, bool indicate, int signGrade, int exeGrade) :
_name(name), _indicate(indicate), _signGrade(signGrade), _exeGrade(exeGrade)
{
    std::cout << "From " << this->_name << "created." << std::endl;
    return;
}

