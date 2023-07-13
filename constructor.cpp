#include <bits/stdc++.h>
using namespace std;

class Hero
{

    int health;

public:
    char level;
    // Constructor with no arguments/Defalut constructor
    Hero()
    {
        cout << "Constructor called" << endl;
    }
    // Parameterized Constructor
    Hero(int health, char level)
    {
        // cout<<"this -->"<<this<<endl;
        this->level = level;
        this->health = health;
    }
    // Copy Constructor
    Hero(Hero &Aashish)
    {
        cout << "Copy Constructor is called:" << endl;
        this->level = Aashish.level;
        this->health = Aashish.health;
    }
    int gethealth()
    {
        return health;
    }
    void sethealth(int h)
    {
        health = h;
    }
    char getlevel()
    {
        return level;
    }
    void setlevel(char h)
    {
        level = h;
    }
    void print()
    {
        cout << "Health: " << this->health << ", Level: " << this->level << endl;
    }
};

int main()
{
    Hero Aashish(70, 'F');
    Aashish.print();
   
    Hero Hsihsaa(Aashish);
    Hsihsaa.print();
    // // cout << "Before constructor is called" << endl;
    // // Hero h(10,'A'); // Static
    // // Hero *h1=new Hero; //Dynamically
    // Hero *h=new Hero(11,'B'); //Dynamically
    // // cout << "After constructor is called" << endl;
    // // cout<<" Address of Ramesh "<<&h<<endl;
    // cout<<h->gethealth();
    // cout<<h->getlevel();
    return 0;
}