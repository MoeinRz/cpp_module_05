# ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
    private:
        const std::string   _name;
        bool                _indicate;
        const int           _signGrade;
        const int           _exeGrade;

    public:
        Form();
        ~Form();
        Form(const std::string name, bool indicate, int signGrade, int exeGrade);
        
        std::string getName() const;
        bool getIndicate() const;
        int getSignGrade() const;
        int getExeGrade() const;
        void beSigned(const Bureaucrat& src);

        class GradeTooLowException : public std::exception
        {
        public:
            virtual const char *what() const throw();
        };

        class GradeTooHighException : public std::exception
        {
        public:
            virtual const char *what() const throw();
        };



};

std::ostream& operator<<(std::ostream& out, const Form& src);

# endif