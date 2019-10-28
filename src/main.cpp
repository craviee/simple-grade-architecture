#include <iostream>
#include <student.hpp>

int main() {
    student me(1, "daniel", "craviee@pm.me", "123456");
    std::cout << me.getName() << std::endl;
}