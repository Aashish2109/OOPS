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
    Hero h1;
    Hero *b=new Hero;
    //cout<<"By Default health is :"<<h1.gethealth()<<endl;
    //cout<<"By Default str is :"<<h1.getstr()<<endl;
    // h1.health = 20; //When public
    h1.sethealth(50); //When private
    h1.level = 'A';
    // h1.str = "20";//When public
    h1.setstr("30");//When private
    //cout << "size of hero class is :" << sizeof(h1)<<endl;
    cout << "Health is :" << h1.gethealth()<<endl; // Garbage Value when not set to any value
    cout << "Level is :" << h1.level<<endl;   
    cout << "String is :" << h1.getstr()<<endl;     
    return 0;
}