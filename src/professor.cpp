#include "professor.hpp"

professor::professor(unsigned long _id, std::string _name, std::string _email, std::string _password): person(_id, _name, _email, _password) {}

professor::~professor() {}

void professor::updateGrade(std::unique_ptr<subject>& _subject, std::unique_ptr<student>& _student, double value)
{
    bool found = false;

    if(isConnected)
    {
        if(_subject->getProfessorId() == id)
        {
            for(grade& g : _subject->grades)
            {
                if(g.getStudentId() == _student->getId())
                {
                    g.setValue(value);
                    found = true;
                    break;
                }
            }
            if(!found)
                throw std::logic_error("Grade does not exist.");
        }
        else
            throw std::logic_error("The professor does not lecture this subject.");
    }
    else
        throw std::logic_error("Not connected");
}

void professor::deleteGrade(std::unique_ptr<subject>& _subject, std::unique_ptr<student>& _student)
{
    if(isConnected)
    {
        if(_subject->getProfessorId() == id)
        {
            for(grade& g : _subject->grades)
            {
                if(g.getStudentId() == _student->getId())
                {
                    g.setValue(0);
                    break;
                }
            }
        }
        else
            throw std::logic_error("The professor does not lecture this subject.");
    }
    else
        throw std::logic_error("Not connected");
}