#include "student.hpp"

student::student(unsigned long _id, std::string _name, std::string _email, std::string _password): person(_id, _name, _email, _password) {}

student::~student() {}

