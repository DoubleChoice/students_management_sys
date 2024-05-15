#ifndef STUDENT_H
#define STUDENT_H

#include <QMainWindow>

class Student
{
public:
    Student();
    Student(const QString &id, const QString &name, uint age, qreal math, qreal gpa);

    QString getId() const;
    void setId(const QString &newId);
    QString getName() const;
    void setName(const QString &newName);

    uint getAge() const;
    void setAge(uint newAge);
    qreal getMath() const;
    void setMath(qreal newMath);

    qreal getGpa() const;
    void setGpa(qreal newGpa);

private:
    QString id,name;
    uint age;
    qreal math,gpa;
};

#endif // STUDENT_H
