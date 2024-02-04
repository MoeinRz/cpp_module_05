# ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <cstdlib>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

class AForm;
class Bureaucrat
{
    private:
        const std::string    _name;
        int                  _grade;
    
    public:
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(const std::string name);
        Bureaucrat(const std::string name, int grade);
        void    incrementGrade();
        void    decrementGrade();

        std::string getName() const;
        int getGrade() const;
        void signForm(AForm& form);
        void executeForm(AForm const & form);

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

std::ostream& operator<<(std::ostream& out, const Bureaucrat& src);

# endif
