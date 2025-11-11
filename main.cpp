#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================
public Person {
   
string name;
int Id;

person(){}

person (string name, int Id){
this->name=name;
this->Id=Id;}

~Person(){
   delete Person;}

void display(){
   cout<<"name: "<<name<<"id: " Id<<endl; }

string getName(){
return name; }
int getId(){
   return Id; }
void setName(){
   Name=name;}
void setId(){
   Id=Id; }

}


   
// ==================== Student Class Implementation ====================
class Student{

int yearLevel;
string major;

student(int yearLevel, string major){
this->yearLevel=yearLevel;
this->major=major; }

student(){};

~Student(){
delete Student(); }

void display(){
cout<<"year level: " << yearLevel << "major: " << major<<endl; }

void SetYearLevel(){
YearLevel=yearLevel;}

void Setmajor(){
major=major}

int getYearLevel(){
return yearLevel;}

string getMajor(){
return major;}

}


// ==================== Instructor Class Implementation ====================

class Instructor{
string department;
int experienceYears;


Instructor(){}
Instructor(string department, int experienceYears){
this->department=department;
this->experienceYears=experienceYears; }

~Instructor(){
   delete Instructor();}

void display(){
   cout<<"department: "<<department << "experience years: " << experienceYears<<endl;

}

string getDepartment(){
   return department;}

int getExperienceYears(){
   returm experienceYears; }

void setDepartment(){
   Department=department;}

void setExperienceYears(){
   ExperienceYears=experienceYears;}



}
// ==================== Course Class Implementation ====================

class Course{

string courseCode;
string courseName;
int maxStudents;
Student* students;
int currentStudents;

Course(){}
Course(string courseCode, string courseName, int maxStudents, Student* students, int currentStudents){
this->courseCode=courseCode;
this->courseName=courseName;
this->maxStudents=maxStudents;
this->currentStudents=currentStudents;
}

~Course(){
   delete Student[];}

void addStudent(const Student& s){
   Student++;

}
displayCourseInfo(){
   cout<<"courseCode: "<<courseCode<< "courseName: " << courseName << "maxStudents: " << maxStudents<< "currentStudents: " << currentStudents << endl;

}
string getCourseCode(){
   return courseCode;}
string getCourseName(){
   return courseName;}

int getMaxStudents(){
   return maxStudent; }

int getCurrentStudents(){
   return currentStudents;}

void setCourseCode(){
   CourseCode=courseCode;}

void setCourseName(){
   CourseName=courseName; }

void setMaxStudents(){
   MaxStudents=maxStudents;}

void setCurrentStudent(){
   CurrentStudent=currentStudents;}






}
// ==================== Main Function ====================
int main() {
   
   
    Student * s = new Student();
    return 0;
}
