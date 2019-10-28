#pragma once

#include <iostream>

class person {

public:
    person(unsigned long _id, std::string _name, std::string _email, std::string _password) : id(_id), name(_name), email(_email), password(_password) { std::cout << "Person constructor" << std::endl;};
    ~person(){};

public:
    void Login() { isConnected = true; };
    void Logout() { isConnected = false; };
    std::string getName() {return name; };

protected:
    unsigned long id;
    std::string name;
    std::string email;
    std::string password;
    bool isConnected = false;
};