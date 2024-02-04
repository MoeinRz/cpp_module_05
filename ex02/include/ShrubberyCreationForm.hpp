# ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm : public AForm
{
    private:
        std::string _target;
    
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm const &src);
        ~ShrubberyCreationForm();
        void execute(const Bureaucrat& executor) const;
        ShrubberyCreationForm& operator=(ShrubberyCreationForm const &src);
};

std::ostream& operator<<(std::ostream& out, const ShrubberyCreationForm& src);

# endif
