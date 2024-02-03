# ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;
class AForm
{
    private:
        const std::string   _name;
        bool                _isSigned;
        const int           _gradeToSign;
        const int           _exeGrade;

    public:
        AForm();
        ~AForm();
        AForm(const AForm &src);
        AForm(const std::string name, bool indicate, int signGrade, int exeGrade);
        
        std::string getName() const;
        bool getIndicate() const;
        int getSignGrade() const;
        int getExeGrade() const;
        void beSigned(int bureaucratGrade);

        AForm& operator=(const AForm &src);

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

        class FormNotSignedException : public std::exception
        {
        public:
            virtual const char *what() const throw();
        };
};

std::ostream& operator<<(std::ostream& out, const AForm& src);

# endif