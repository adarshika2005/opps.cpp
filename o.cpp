#include<iostream>
#include<string>
using namespace std;

    class teacher{
        public:
        string name;
        string dep;
        string sub;
        double sal;
        void changedep(string newdep){

        }
    };
    int main(){
        teacher t1;
        t1.name="komal";
        t1.dep="cs";
        t1.sub="c++";
        t1.sal=50000;
  cout<<t1.name<<endl;
  cout<<t1.sal<<endl;
    
    return 0;
}