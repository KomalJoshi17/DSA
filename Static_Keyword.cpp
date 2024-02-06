#include <iostream>
using namespace std;

class DemoClass {
    public:
    static int var1;
    char ch;
    DemoClass(){
        cout<<"I am the constructor of the clas"<<endl;
    }
    ~DemoClass () {
        cout<<"I am the desctructor of the clas"<<endl;
    }
};

int DemoClass::var1 = 0;

int main() {
    DemoClass ob1,ob2;
    ob1.var1++;
    ob1.var1++;
    ob2.var1++;
    cout<<ob1.var1<<" "<<ob2.var1<<endl;
    return 0;
}