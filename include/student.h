#pragma once

#include<string>
using namespace std;

namespace rakurai{
	class Student{
	private:
		string name; 
	public:
		Student(string);
		string get_name();
		void display();
	};
}// namespace rakurai