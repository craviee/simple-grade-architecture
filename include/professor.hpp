#pragma once

#include "student.hpp"

class professor: public person {

public:
    professor(unsigned long _id, std::string _name, std::string _email, std::string _password);
    ~professor();

public:
    void updateGrade(std::unique_ptr<subject>& _subject, std::unique_ptr<student>& _student, double value);
    void deleteGrade(std::unique_ptr<subject>& _subject, std::unique_ptr<student>& _student);
    grade getGrade(std::unique_ptr<subject>& _subject, std::unique_ptr<student>& _student);
};