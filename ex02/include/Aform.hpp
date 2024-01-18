# ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;
class Aform
{
    private:
        const std::string   _name;
        bool                _isSigned;
        const int           _gradeToSign;
        const int           _exeGrade;

    public:
        Aform();
        ~Aform();
        Aform(const std::string name, bool indicate, int signGrade, int exeGrade);
        
        std::string getName() const;
        bool getIndicate() const;
        int getSignGrade() const;
        int getExeGrade() const;
        void beSigned(int bureaucratGrade);

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

std::ostream& operator<<(std::ostream& out, const Aform& src);

# endif