#include "../include/AForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
AForm("ShrubberyCreationForm", false, 145, 137), _target("target")
{
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) :
AForm(src), _target(src._target)
{
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
AForm("ShrubberyCreationForm", false, 145, 137), _target(target)
{
    return;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    return;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
    if (this != &src)
    {
        AForm::operator=(src);
        this->_target = src._target;
    }
    return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
    if (!getIndicate() || executor.getGrade() > getExeGrade()) {
        throw GradeTooLowException();
    }

    std::string filename = _target + "_shrubbery";

    std::ofstream file(filename.c_str());
    if (file.is_open()) {
        file << "      *\n"
                "     ***\n"
                "    *****\n"
                "   *******\n"
                "  *********\n"
                " ***********\n"
                "*************\n"
                "     ***\n"
                "     ***\n"
                "     ***" << std::endl;
        file.close();
        std::cout << "ShrubberyCreationForm executed successfully by " << executor.getName() << std::endl;
    } else {
        std::cerr << "Failed to create shrubbery for " << _target << std::endl;
    }
}

std::ostream& operator<<(std::ostream& out, const ShrubberyCreationForm& src)
{
    out << src.getName() << ", Form grade ";
    if (src.getIndicate() == false)
        out << "not ";
    out << "signed.\nsignGrade is: " << src.getSignGrade() << "\nexeGrade is: " << src.getExeGrade() << std::endl;
    return out;
}
