#include <bits/stdc++.h>
using namespace std;

class Main
{
private:
    int health;

public:
    char level;
    char *name;
    static int timetoComplete;

    Main()
    {
        name=new char;
        cout<<"Simple Constructor is called"<<endl<<endl;
    }
    // Destructor
    ~Main()
    {
        cout<<"Destructor is called"<<endl<<endl;
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

    static int random()
    {
        return timetoComplete;
    }
    void print()
    {
        cout << endl;
        cout << "Health-->" << this->health << " ,";
        cout << "Level-->" << this->level << " ,";
        cout << "Name-->" << this->name;
        cout << endl;
    }
};

int Main::timetoComplete=10;
int main()
{
    // // Static
    // Main Aashish;

    // // Dynamic
    // Main *p = new Main();
    // delete p;

    // Main::timetoComplete=11;
    // cout<<Main::timetoComplete;
    cout<<Main::random();
    return 0;
}
