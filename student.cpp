#include "student.h"

Student::Student() {}

Student::Student(const QString &id, const QString &name, uint age, qreal math, qreal gpa) : id(id),
    name(name),
    age(std::move(age)),
    math(std::move(math)),
    gpa(std::move(gpa))
{}

QString Student::getId() const
{
    return id;
}

void Student::setId(const QString &newId)
{
    id = newId;
}

QString Student::getName() const
{
    return name;
}

void Student::setName(const QString &newName)
{
    name = newName;
}

uint Student::getAge() const
{
    return age;
}

void Student::setAge(uint newAge)
{
    age = newAge;
}

qreal Student::getMath() const
{
    return math;
}

void Student::setMath(qreal newMath)
{
    math = newMath;
}

qreal Student::getGpa() const
{
    return gpa;
}

void Student::setGpa(qreal newGpa)
{
    gpa = newGpa;
}
