#include "../include/Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat human("Moein", -500);
		std::cout << human << std::endl;
    }
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

}