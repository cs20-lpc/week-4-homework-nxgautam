// TO DO:  Student class definition  here.
#ifndef STUDENT_HPP 
#define STUDENT_HPP
#include <iostream>
#include "LinkedList.hpp"
#include "Course.hpp"

class Student
{

    private:
    std::string name;
    int id;
    double gpa;
    LinkedList<Course> courses;
   
           
    public:

    Student() : name(""),id(0), gpa(0.0){}
    Student(int i, std::string& n, double g)
    {
        name = n;
        id = i;
        gpa = g;
    }
    ~Student();

    void setId(int i);
    void setName(std::string& n);
    void setGpa(double g);
    

    int getId()const;
    std::string getName()const;
    double getGpa() const;

    void addCourse(const Course& c);

    void display() const;
};


#endif