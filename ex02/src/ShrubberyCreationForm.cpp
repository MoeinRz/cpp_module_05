#include "../include/AForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", false, 145, 137), _target("target")
{
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm(src)
{
    return;
}

// ShrubberyCreationForm::ShrubberyCreationForm(const std::string name) : AForm(name, false, 145, 137), _target("target")
// {
//     return;
// }

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    return;
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
    if (!getIndicate() || executor.getGrade() > getExeGrade())
    {
        throw GradeTooLowException();
    }
    // Convert std::string to const char*
    const char* filename = (_target + "_shrubbery").c_str();
    std::ofstream file(filename); // Use const char* filename
    if (file.is_open())
    {
        file << "ASCII trees inside it." << std::endl;
        file.close();
        std::cout << "ShrubberyCreationForm executed successfully by " << executor.getName() << std::endl;
    }
    else
    {
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
