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

      shared_ptr<Student> get_student_reference(string s_name){
         for(auto student : db){
            if(student.get_name() == s_name){
               return make_shared<Student>(student);
               }
         }
         return nullptr;
      }
};

int main(){
   vector<Student> s = {Student("Malik"), Student("Omer"), Student("Jamil"), Student("Ali"), Student("Khan")};
   database studentdb(s);
   shared_ptr<Student> s1 = studentdb.get_student_reference("Malik");
   s1->display();
   return 0;
}