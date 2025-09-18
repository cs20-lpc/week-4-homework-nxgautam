#include <iostream>
#include <string>
#include "Student.hpp"
#include "Course.hpp"
// TO DO:
// If you want to use the LinkedList code you wrote in Week 4 Mon Lab for creating list
// include LinkedList.hpp here and also add it both LinkedList.hpp and LinkedList.tpp to this repository.

using namespace std;

int main()
{
  // TO DO: Insert your code to display a menu for user to select to add/delete/view Student and course information.
  LinkedList<Student> studentList;
  int choice;


  do{

    std::cout << "\n1. Insert Student \n2. Delete Student \n3. Search Student";
    std::cout << "\n4. Display Students \n5. Count Students \n6. Add Course \n7. Exit\n";
    std::cin >>  choice;

    switch(choice)
    {
      case 1:
       {
        int id;
        std::string name;
        double gpa;
        
        
        std::cout << "Enter your ID: "; 
        std::cin >> id;
        std::cout << "Enter name: ";
        std::getline(std::cin >> ws, name);
        std::cout << "Enter gpa: ";
        std::cin >> gpa;

        studentList.append(Student(id, name, gpa));
      }
      break;

      case 2: 
        {
          int id;
          std::cout << "Enter id to be deleted: "; 
          std::cin >> id;
          if(studentList.removeById(id))
          {
            std::cout << "Student Deleted with ID: " << id << std::endl;
          }else{
            std::cout << "Student not found\n";
          }
          break;
        }
      

      case 3:
        {std::cout << "Enter ID: ";
        int id;
        std::cin >> id;
        Student * s = studentList.searchById(id);
        if(s)
        {
          std::cout << "Found\n";
          s->display();
        }else{
          std::cout << "Student not found\n"; }
        }
      break;

      case 4:
       {if(studentList.isEmpty()) std::cout << ("No students in list.\n");
       else{
        std::cout << "Students: \n";
        for(int i = 0; i < studentList.getLength(); i++)
        {
          studentList.getElement(i).display();
        }
       }
      }
       break;

      case 5:
        {std::cout << "Total Students: " << studentList.getLength() << std::endl;}
      break;

      case 6:
        {
        int id;
        std::cout << "Enter ID: ";
        std::cin >> id;
        Student * s = studentList.searchById(id);

        if(s)
        {
          std::string name, location;
          std::cout << "Enter course name: ";
          std::getline(std::cin >> ws, name);
          std::cout << "Enter location: ";
          std::getline(std::cin >> ws, location);
          s->addCourse(Course(name, location));
        }else{
          std::cout << "Student not found!\n";
        }
      }
        break;
      
      case 7:
      std::cout << "Exiting..." << std::endl;
      break;

      default:
        std::cout << "Invalid Input!" << std::endl;
    }

  }while(choice!=7);

  return 0;
}



