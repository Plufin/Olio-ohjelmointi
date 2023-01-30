#include <iostream>

using namespace std;

class Chef
{
public:
    Chef();
    Chef(string);
    ~Chef();
    void makeSalad();
    void makeSoup();

protected:
    string name;
};

class ItalianChef : public Chef
{
public:
    ItalianChef(string, int, int);
    ~ItalianChef();
    string getName();
    void makePasta();

private:
    int vesi;
    int jauhot;
};

Chef::Chef()
{
}

Chef::Chef(string chefName)
{
    name = chefName;
    cout << "Chef " << name << " konstruktori" << endl;
}

Chef::~Chef()
{
    cout << "Chef " << name << " destruktori" << endl;
}

void Chef::makeSalad()
{
    cout << "Chef " << name << " makes salad" << endl;
}

void Chef::makeSoup()
{
    cout << "Chef " << name << " makes soup" << endl;
}

ItalianChef::ItalianChef(string chefName, int vesi, int jauhot)
{
    name = chefName;
    this->vesi = vesi;
    this->jauhot = jauhot;
    cout << "Chef " << name << " konstruktori" << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "Chef " << name << " destruktori" << endl;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout << "Chef " << name << " makes pasta with special recipe" << endl;
    cout << "Chef " << name << "uses jauhot = " << jauhot << endl;
    cout << "Chef " << name << "uses vesi = " << vesi << endl;
}

int main()
{
    ItalianChef m("Mario", 100, 250);
    m.makePasta();
}
