#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int roll;
    Student(int roll){
        this->roll = roll;
    }

    void print(){
        cout<<"Roll: "<<roll;
    }

};

void fun(Student *obj){
    obj->roll=100;
}

int main(){
    Student *obj = new Student(10);
    fun(obj);
    obj->print();
    return 0;
}