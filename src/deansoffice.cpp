#include "deansoffice.hpp"

deansoffice::deansoffice(unsigned long _id, std::string _name, std::string _email, std::string _password): person(_id, _name, _email, _password) {}

deansoffice::~deansoffice() {}

void deansoffice::addStudent2Subject(subject _subject, student _student)
{
    if(isConnected)
    {
        if(!std::any_of(_subject.grades.begin(), _subject.grades.end(), [&](grade g) { return g.studentId == _student.getId(); }))
            _subject.grades.push_back(_student.getId());
    }
    else
        throw std::logic_error("Not connected");
}

void deansoffice::addSubject2Professor(subject _subject, professor _professor)
{
    if(isConnected)
    {
        _subject.setProfessorId(_professor.getId());
    }
    else
        throw std::logic_error("Not connected");
}

void deansoffice::validateGrade(subject _subject, student _student)
{
    if(isConnected)
    {
        for(grade g : _subject.grades)
            if(g.studentId == _student.getId())
                g.validated = true;
    }
    else
        throw std::logic_error("Not connected");
}