#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"
# include <fstream>

class PresidentialPardonForm : public AForm
{
    private:
        std::string _target;
    
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string& _target);
        PresidentialPardonForm(PresidentialPardonForm const &src);
        ~PresidentialPardonForm();
        void execute(const Bureaucrat& executor) const;

        PresidentialPardonForm& operator=(PresidentialPardonForm const &src);
};

#endif
