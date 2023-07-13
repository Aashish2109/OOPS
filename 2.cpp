#include <bits/stdc++.h>
using namespace std;

class Hero
{
private:
    int health;
    string str; 
public:
    char level;
    // string str; 

     int gethealth()
     {
        return health;
     }
     void sethealth(int h)
     {
        health=h;
     }

     string getstr()
     {
        return str;
     }
     void setstr(string h)
     {
        str=h;
     }
};

int main()
{
   //  Hero h1;//Static Allocation
    Hero *b=new Hero; //Dynamic Allocation
    //cout<<"By Default health is :"<<h1.gethealth()<<endl;
    //cout<<"By Default str is :"<<h1.getstr()<<endl;
    // h1.health = 20; //When public
    b->sethealth(50); //When private 
    b->level = 'A';
    // h1.str = "20";//When public
    b->setstr("30");//When private
    //cout << "size of hero class is :" << sizeof(h1)<<endl;
    cout << "Health is :" << b->gethealth()<<endl; // Garbage Value when not set to any value
    cout << "Level is :" << b->level<<endl;   
    cout << "String is :" << b->getstr()<<endl;     
    return 0;
}