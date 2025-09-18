// TODO:  Student class methods implementation here.
    #include "Student.hpp"


    Student::~Student(){}
    
    void Student::setId(int i){
        id = i;
    }
    void Student::setName(std::string& n){
        name = n;
    }
    void Student::setGpa(double g)
    {
        gpa = g;
    }
   

    int Student::getId()const{
        return id;
    }
    std::string Student::getName()const {
        return name;
    }
    double Student::getGpa() const{
        return gpa;
    }
   

    void Student::addCourse(const Course& c)
    {
        courses.append(c);
    }

    void Student::display() const{
        std::cout << getId() << " " << getName() << getGpa() << std::endl;
        if(courses.isEmpty())
        {
            std::cout << " No courses!\n";
        }else
        {
            std::cout << "Courses: \n";
            for(int i = 0; i < courses.getLength(); i++)
            {
                courses.getElement(i).display();
                if( i != courses.getLength() - 1) std::cout << ", ";
            }
            std::cout << std::endl;
        }
    }
    

    




