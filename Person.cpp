
#include "Person.h"
#include "iostream"
using namespace std;

Person::Person() {
    firstName = "test";
    lastName = "test";
    id = "0";
    workHours = new double ;
    *workHours = 0;
}
Person::Person(string _fName, string _lName, string _id, double _workHours) {
    firstName = _fName;
    lastName = _lName;
    id = _id;
    workHours = new double ;
    *workHours = _workHours;
}
Person::~Person() {
    delete workHours;
}
Person::Person(const Person &obj) {
    firstName = obj.firstName;
    lastName = obj.lastName;
    id = obj.id;
    workHours = new double ;
    workHours = obj.workHours;
}