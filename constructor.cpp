#include<iostream> 
using namespace std;
class car{
public:
    string brand ;
    string modle ;
    int year;

    car(string x, string y, int z){
    brand=x;
    modle=y;
    year=z;
    }

};

int main(){
    car obj1("bmw", "M5", 1998);
    car obj2("ford", "mustang", 2000);

    cout<<obj1.brand<<" "<<obj1.modle<<" "<<obj1.year<<"\n";
    cout<<obj2.brand<<" "<<obj2.modle<<" "<<obj2.year<<"\n"; 



return 0;
}