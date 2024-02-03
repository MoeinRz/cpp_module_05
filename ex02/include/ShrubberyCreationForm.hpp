# ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm : public AForm
{
    private:
        const std::string _target;
    
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string& _target);
        ShrubberyCreationForm(ShrubberyCreationForm const &src);
        ~ShrubberyCreationForm();
        // ShrubberyCreationForm(const std::string name);
        void execute(const Bureaucrat& executor) const;
};

std::ostream& operator<<(std::ostream& out, const ShrubberyCreationForm& src);

# endif
