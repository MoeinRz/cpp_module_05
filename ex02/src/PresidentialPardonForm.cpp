#include "../include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", false, 25, 5), _target("default") {}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm("PresidentialPardonForm", false, 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : AForm(src), _target(src._target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const {
    if (!getIndicate()) {
        throw FormNotSignedException();
    }
    if (executor.getGrade() > getExeGrade()) {
        throw GradeTooLowException();
    }
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &src) {
    if (this != &src) {
        AForm::operator=(src);
        _target = src._target;
    }
    return *this;
}
