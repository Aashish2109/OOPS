#include <bits/stdc++.h>
using namespace std;

class Main
{
private:
    int health;

public:
    char level;
    char *name;

    Main()
    {
        name = new char[100];
    } 
    //Copy Constructor
    Main (Main &Ashish)
    {
        char *ch=new char[strlen(Ashish.name)+1];
        strcpy(ch,Ashish.name);
        cout<<"Copy constructor called"<<endl;
        this->name=ch;
        this->health=Ashish.health;
        this->level=Ashish.level;
    }
    int gethealth()
    {
        return health;
    }
    void sethealth(int Aashish)
    {
        health = Aashish;
    }
    char getlevel()
    {
        return level;
    }
    void setlevel(char Aashish)
    {
        level = Aashish;
    }
    
    void setname(char name[])
    {
        strcpy(this->name, name);
    }
    void print()
    {
        cout<<endl;
        cout << "Health-->" << this->health<<" ," ;
        cout<< "Level-->" << this->level<<" ," ;
        cout<< "Name-->" << this->name;
        cout<<endl;
    }
};
int main()
{
    Main Aashish;
    Aashish.sethealth(12);
    Aashish.setlevel('A');
    char name[8] = "Aashish";
    Aashish.setname(name);
    Aashish.print();
    Main Ashish(Aashish);
    // Ashish.print();
    // cout<<"Constructor called";
    // Aashish.name[0]='K';
    // Aashish.print();
    // cout<<"Copy Constructor Called:";
    // Ashish.print();

    //Assignment
    
    Aashish=Ashish;
    Ashish.print();
    Aashish.name[0]='K';
    Aashish.print();
    Ashish.print();
}
// Shallow Copy
// Health-->12 ,Level-->A ,Name-->Aashish

// Copy constructor called
// Health-->12 ,Level-->A ,Name-->Aashish

// Constructor called
// Health-->12 ,Level-->A ,Name-->Kashish

// Copy Constructor Called:
// Health-->12 ,Level-->A ,Name-->Kashish



//Deep Copy
// Health-->12 ,Level-->A ,Name-->Aashish

// Copy constructor called
// Health-->12 ,Level-->A ,Name-->Aashish

// Constructor called
// Health-->12 ,Level-->A ,Name-->Kashish

// Copy Constructor Called:
// Health-->12 ,Level-->A ,Name-->Aashish