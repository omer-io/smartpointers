#include <iostream>
#include "student.h"
using namespace std;

rakurai::Student::Student(string name){
    this->name = name;
}

void rakurai::Student::display(){
	cout << "A student with name " << this->name << endl;
}

string rakurai::Student::get_name(){
	return name;
}