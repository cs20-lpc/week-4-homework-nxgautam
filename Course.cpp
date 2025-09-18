// TODO:  Course class methods implementation here.
#include "Course.hpp"
#include <iostream>

        Course::~Course(){}

        void Course::setCourseName(std::string& n){
            courseName = n;
        };
        void Course::setLocation(std::string& l){
            location = l;
        };

        std::string Course::getCourseName() const{
            return courseName;
        }
        std::string Course::getLocation() const{
            return location;
        };


        void Course::display() const{
            std::cout << courseName << " (" << location << ")"; 
        }
