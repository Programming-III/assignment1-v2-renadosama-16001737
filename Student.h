#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
//#write student class here

class Student{
private:
int yearLevel;
string major;

public:
student(int yearLevel, string major);
student();
~Student();
void display();
void SetYearLevel();
void Setmajor();
int getYearLevel();
string getMajor();

};


#endif
