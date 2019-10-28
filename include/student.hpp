#pragma once

#include "person.hpp"
#include "subject.hpp"

#include <vector>
#include <stdexcept>

class student: public person {

public:
    student(unsigned long _id, std::string _name, std::string _email, std::string _password);
    ~student();

public:
    std::vector<subject> subjects;

public:
    grade getGrade(subject _subject);
    double getStatistics(subject _subject);
};