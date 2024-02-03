#ifndef ROTOMOMYREQUESTFORM_HPP
# define ROTOMOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <fstream>

class RobotomyRequestForm : public AForm
{
    private:
        std::string _target;

    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string& _target);
        RobotomyRequestForm(RobotomyRequestForm const &src);
        // RobotomyRequestForm(const std::string name);
        ~RobotomyRequestForm();

        RobotomyRequestForm& operator=(RobotomyRequestForm const &src);
        void execute(const Bureaucrat& executor) const;
        std::string getTarget() const;
};

#endif