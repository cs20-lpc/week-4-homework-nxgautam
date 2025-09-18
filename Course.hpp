// TODO:  Course class definitins go here.
#ifndef COURSE_HPP
#define COURSE_HPP
#include <string>

class Course{

    private:
        std::string courseName;
        std::string location;

    
    public:

        Course() = default;
        Course(std::string& n, std::string& l){courseName = n; location = l;}

        void setCourseName(std::string& n);
        void setLocation(std::string& l);

        std::string getCourseName() const;
        std::string getLocation() const;

        void display() const;

        ~Course();

};






#endif