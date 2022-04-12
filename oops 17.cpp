#include <iostream>
using namespace std;
class complex 
{
    int a, b;
    public:

    void get_data(){
        cout << "Enter the value of Complex Numbers a, b: "; 
        cin >> a >> b;
    }
  
    complex operator+(complex ob)// overaloded operator function +
    {
        complex t;
        t.a = a + ob.a;
        t.b = b + ob.b;
        return (t);
    }
   
    complex operator-(complex ob)// overaloded operator function -
    {
        complex t;
        t.a = a - ob.a;
        t.b = b - ob.b;
        return (t);
    }
   
    void display(){
        cout << a << "+" << b << "i" << "\n";
    }
};

int main() 
{
    complex obj1, obj2, result, result1;
    obj1.get_data();
    obj2.get_data();
    
    result = obj1 + obj2;
    result1 = obj1 - obj2;
  
    cout << "\n\nInput Values:\n";
  
    obj1.display();
    obj2.display();

    cout << "\nResult:";
  
    result.display();
    result1.display();
    
    return 0;
}