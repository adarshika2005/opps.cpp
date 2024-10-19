#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    string name;
    double cgpa;
    student(string name,double cgpa){
        this->name = name;
        this->cgpa = cgpa;
    }
    student( const student &obj){
        this-> name = obj.name;
        this->cgpa  = obj.cgpa;
    }
    void getinfo(){
        cout<<"name:"<<name<<endl;
        cout<<"cgpa:"<<cgpa<<endl;
    }
};
int main(){
    student s1("mayank",8.4);
    student s2(s1);
    s2.getinfo( );
    return 0;
}