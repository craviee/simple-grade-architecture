#include <iostream>
#include <memory>

#include <deansoffice.hpp>

int main()
{
    auto katarzyna = std::make_unique<deansoffice>(1, "Katarzyna", "katarzyna@put.pl", "719347829");
    auto sds = std::make_unique<subject>("SDS", 201901);
    auto sylwia = std::make_unique<professor>(1, "Sylwia", "sylwia@put.pl", "1323123");
    auto daniel = std::make_unique<student>(1, "Daniel", "craviee@pm.me", "7897359827");
    auto marcelo = std::make_unique<student>(2, "Marcelo", "marcelo@pm.me", "23425322");

    katarzyna->login();
    katarzyna->addSubject2Professor(sds, sylwia);
    katarzyna->addStudent2Subject(sds, daniel);
    katarzyna->addStudent2Subject(sds, marcelo);
    katarzyna->logout();

    sylwia->login();
    sylwia->updateGrade(sds, daniel, 4.7);
    sylwia->updateGrade(sds, marcelo, 5.0);
    sylwia->logout();

    katarzyna->login();
    katarzyna->validateGrade(sds, daniel);
    katarzyna->validateGrade(sds, marcelo);
    katarzyna->logout();

    daniel->login();
    marcelo->login();

    std::cout << "daniel's grade on sds: " << daniel->getGrade(sds).value << std::endl;
    std::cout << "marcelo's grade on sds: " << marcelo->getGrade(sds).value << std::endl;
    std::cout << "mean grade of sds: " << daniel->getStatistics(sds) << std::endl;

    daniel->logout();
    marcelo->logout();

    return 0;
}