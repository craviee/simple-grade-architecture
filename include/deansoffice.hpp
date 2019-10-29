#pragma once

#include "professor.hpp"

#include <algorithm>

class deansoffice : public person {

public:
    deansoffice(unsigned long _id, std::string _name, std::string _email, std::string _password);
    ~deansoffice();

public:
    void addStudent2Subject(std::unique_ptr<subject>& _subject, std::unique_ptr<student>& _student);
    void addSubject2Professor(std::unique_ptr<subject>& _subject, std::unique_ptr<professor>& _professor);
    void validateGrade(std::unique_ptr<subject>& _subject, std::unique_ptr<student>& _student);
};