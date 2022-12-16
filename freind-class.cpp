
#include <iostream>
using namespace std;

class Vikash;
class TG;

class Nilesh
{
    private:
   
        int phone = 65655;
    
    public:
    int age ;
             
    Nilesh(int __age)//parameterized contructor
    {
        this->age=__age;
    }
    friend class Vikash ;//friend class
    // friend class TG;    
};
 
class Vikash
{
    public:
        void display(Nilesh &t)
        {
            cout << "here vikash can see " <<endl;
            cout<<"The value of Nilesh age ="<<t.age<<endl;;
             cout<<"The value of Nilesh phone ="<<t.phone<<endl<<endl;
        }   
};
 
 
class TG
{
    public:
        void display(Nilesh &t)
        {
            cout << "TG can see " <<endl;
            cout<<"The value of Nilesh age ="<<t.age<<endl;
            
             cout<<"The value of Nilesh phone ="<<t.phone<<endl<<endl;
            
        }   
};
 
 
  
main()
{
    Nilesh a1(28);
    
    Vikash b;
    TG t;
    
    //cout << "age = " << a.age << endl;
    //cout << "phone = " << a.phone << endl;


    b.display(a1);
    t.display(a1);
    
    
    return 0;
}
