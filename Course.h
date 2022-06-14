#ifndef TAMRIN5_COURSE_H
#define TAMRIN5_COURSE_H
#include "iostream"
using namespace std;

class Course {
private:
    int unit ;
    double * mark;
    string name;
public:
    Course();
    Course(int _unit =0 , double _mark = 0 , string _name = "test");
    Course(const Course & obj);
    ~Course();
    friend  ostream& operator << (ostream& cout, const Course course);
    friend  istream& operator >> (istream& cin,  Course& course);
};


#endif //TAMRIN5_COURSE_H
