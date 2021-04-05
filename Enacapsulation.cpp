#include<iostream> 
using namespace std;
class myclas{
    private:
    int salary;

    public:
    void setsalary(int s){
        salary=s;

    }
    int getsalary(){
        return salary;

    }


};
int main(){
    myclas emp;
    emp.setsalary(3500000);
    cout<<emp.getsalary();

return 0;
}