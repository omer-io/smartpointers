#include"student.h"
#include <vector>
#include<memory>
#include <iostream>
using namespace std;
using namespace rakurai;

class database{
   vector<Student> db;
   public:
      database(vector<Student> s) : db(s){}

      shared_ptr<Student> get_student_reference(const string& s_name){
         for(auto& student : db){
            if(student.get_name() == s_name){
               return make_shared<Student>(student);
               }
         }
         return nullptr;
      }
};

void print_student_record(shared_ptr<Student> student_ptr) {
   student_ptr->display();
}

int main(){
   vector<Student> s = {Student("Malik"), Student("Omer"), Student("Jamil"), Student("Ali"), Student("Khan")};
   database studentdb(s);
   shared_ptr<Student> s1 = studentdb.get_student_reference("Malik");
   s1->display();

   print_student_record(s1);
   return 0;
}