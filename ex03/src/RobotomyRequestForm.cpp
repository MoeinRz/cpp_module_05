#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
AForm("RobotomyRequestForm", false, 72, 45), _target("default")
{
    return;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) :
AForm("RobotomyRequestForm", false, 72, 45), _target(target)
{
    return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) :
AForm(src), _target(src._target)
{
    return;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    return;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
    if (this != &src) {
        AForm::operator=(src);
        _target = src._target;
    }
    return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
    if (!getIndicate()) {
        throw FormNotSignedException();
    }
    if (executor.getGrade() > getExeGrade()) {
        throw GradeTooLowException();
    }
    std::cout << "Robot Noise...................." << std::endl;
    if (rand() % 2 == 0) {
        std::cout << _target << " has been robotomized successfully" << std::endl;
    } else {
        std::cout << "Robotomization of " << _target << " has failed" << std::endl;
    }
}

std::string RobotomyRequestForm::getTarget() const
{
    return _target;
}
