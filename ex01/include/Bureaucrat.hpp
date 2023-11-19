# ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Form;
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
        void signForm(Form& form);

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
