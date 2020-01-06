#pragma once
#include <iostream>
class Bureaucrat
{
private:
    std::string const _name;
    int _grade;
public:
    Bureaucrat();
    Bureaucrat(std::string name,int grade);
    virtual ~Bureaucrat();
    int getGrade();
    std::string getName();
    void    signForm(bool s);
    class GradeTooHighException : public std::exception
    {
        public:
        GradeTooHighException();
        GradeTooHighException(GradeTooHighException const &g);
        virtual ~GradeTooHighException() throw();
        GradeTooHighException &operator=(GradeTooHighException const &g);
        virtual const char * what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
        GradeTooLowException();
        GradeTooLowException(GradeTooLowException const &g);
        virtual ~GradeTooLowException() throw();
        GradeTooLowException &operator=(GradeTooLowException const &g);
        virtual const char * what() const throw();
    };
    Bureaucrat &operator+=(int);
    Bureaucrat &operator-=(int);
};
std::ostream & operator<<(std::ostream &out,Bureaucrat &b);