
#include "Course.h"
using namespace std;

Course::Course(int _unit , double _mark , string _name) {
    unit = _unit;
    mark = new double ;
    *mark = _mark;
    name = _name;
}

Course::Course() {
    unit = 0;
    mark = new double ;
    *mark = 0;
    name = "test";
}
Course::~Course(){
    delete mark;
}
Course::Course(const Course &obj) {
    unit = obj.unit;
    mark = new double ;
    *mark = *obj.mark;
    name = obj.name;
}

string Course::getName() {
    return name;
}

double Course::getMark() {
    return *mark;
}

int Course::getUnit() {
    return unit;
}

void Course::setName(string _name) {
    name = _name;
}

void Course::setMark(double _mark) {
    if (mark == NULL)
    {
        mark = new double ;
    }
    *mark = _mark;
}

void Course::setUnit(int _unit) {
    unit = _unit;
}
ostream& operator << (ostream &cout, const Course course) {
    cout <<"Name : "<< course.name << endl <<"Unit : "<< course.unit << endl <<"Mark : "<< *course.mark << endl;
    return cout;
}
istream& operator >> (istream &cin , Course & course) {
    std::cout<<"Name : ";
    cin>>course.name;
    std::cout<<"Unit : ";
    cin>>course.unit;
    cout<<"Mark : ";
    cin>>*course.mark;
    return cin;
}