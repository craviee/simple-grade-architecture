#pragma once

#include "professor.hpp"

#include <algorithm>

class deansoffice : public person {

public:
    deansoffice(unsigned long _id, std::string _name, std::string _email, std::string _password);
    ~deansoffice();

public:
    void addStudent2Subject(subject _subject, student _student);
    void addSubject2Professor(subject _subject, professor _professor);
    void validateGrade(subject _subject, student _student);
};