#include <iostream>
#include "student.h"
using namespace std;

Student::Student(string name){
    this->name = name;
}

void Student::display(){
	cout << "A student with name " << this->name << endl;
}