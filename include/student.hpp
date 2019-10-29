#pragma once

#include "person.hpp"
#include "subject.hpp"

#include <vector>
#include <stdexcept>
#include <memory>

class student: public person {

public:
    student(unsigned long _id, std::string _name, std::string _email, std::string _password);
    ~student();

public:
    std::vector<subject> subjects;

public:
    grade getGrade(std::unique_ptr<subject>& _subject);
    double getStatistics(std::unique_ptr<subject>& _subject);
};