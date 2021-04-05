#include<iostream> 
using namespace std;
class car {
    public:
    string name;
    int year;

    void method(){

    }
};

void car ::method(){
    cout<<"hello world ";
}
int main(){
    car obj1;
    obj1.name="BMW";
    obj1.year=1998;

    car obj2;
    obj2.name="audi";
    obj2.year=1999;

return 0;
}