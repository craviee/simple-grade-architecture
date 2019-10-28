#pragma once

#include "student.hpp"

class professor: public person {

public:
    professor(unsigned long _id, std::string _name, std::string _email, std::string _password);
    ~professor();

public:
    void updateGrade(subject _subject, student _student, double value);
    void deleteGrade(subject _subject, student _student);
    grade getGrade(subject _subject, student _student);
};