# ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat:
{
    private:
        const std::string    _name;
        int                  _grade;
    
    public:
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(const std::string name);
        Bureaucrat(const std::string name, int grade);

        std::string getName();
        int getGrade();
};


# endif