#include "student.hpp"

student::student(unsigned long _id, std::string _name, std::string _email, std::string _password): person(_id, _name, _email, _password) {}

student::~student() {}

grade student::getGrade(std::unique_ptr<subject>& _subject)
{
    if(isConnected)
    {
        for(auto _grade : _subject->grades)
        {
            if(_grade.studentId == id && _grade.validated)
                return _grade;
        }
        throw std::logic_error("No grade");
    }
    else
        throw std::logic_error("Not connected");
}

double student::getStatistics(std::unique_ptr<subject>& _subject)
{
    double mean=0;

    if(isConnected)
    {
        for(auto _grade : _subject->grades)
            if(_grade.validated)
                mean += _grade.value;
        return mean/_subject->grades.size();
    }
    else
        throw std::logic_error("Not connected");
}