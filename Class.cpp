#include<iostream> 
using namespace std;
class student {
    public:
    string name ;
    int age;

};
int main(){
    student a;                                                          
    a.name="Abhishek ";
    a.age =18;
    

     student b;
    b.name="pari";
    b.age =20;

    

    cout<<a.name<<" "<<a.age<<" "<<"\n";
    
    cout<<b.name<<" "<<b.age<<" ""\n";

return 0;
}