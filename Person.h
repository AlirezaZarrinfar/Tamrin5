
#ifndef TAMRIN5_PERSON_H
#define TAMRIN5_PERSON_H
#include "iostream"
using  namespace  std;

class Person {
private:
    string firstName;
    string lastName;
    string id ;
    double* workHours;
public:
    Person();
    Person(string _fName = "test" , string _lName = "test" , string _id = "0" , double _workHours = 0);
    ~Person();
    Person(const Person & obj);
    Person& operator=(const Person obj);
    friend ostream& operator<<(ostream& cout, const Person person);
    friend istream& operator>>(istream& cin,  Person & person);
    string getfirstName();
    string getlastName();
    double getworkHours();
    string getId();
    void setfirstName(string _fName);
    void setlastName(string _lname);
    void setworkHours(double _workHours);
    void setId(string _Id);

};


#endif //TAMRIN5_PERSON_H
