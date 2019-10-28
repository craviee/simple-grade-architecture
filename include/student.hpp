#pragma once

#include "person.hpp"
#include "subject.hpp"

#include <vector>

class student: public person {

public:
    student(unsigned long _id, std::string _name, std::string _email, std::string _password);
    ~student();

public:
    std::vector<subject> subjects;

public:
    void getGrade(subject _subject);
    void getStatistics(subject _subject);
};