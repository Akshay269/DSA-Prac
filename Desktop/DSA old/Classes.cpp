#include <iostream>
#include <strings.h>
using namespace std;

class Animal
{
private:
    int number;

public:
    string name;
    string sound;

    void setdata(int num);
    void getdata()
    {
        cout << "Animal number:- " << number << endl;
        cout << "Animal name:- " << name << endl;
        cout << "Animal sound:- " << sound << endl;
    }
};
void Animal::setdata(int num)
{
    int number = num;
}

int main()
{
    Animal dog;

    dog.name = "Dog";
    dog.sound = "Bark";
    dog.setdata(5);
    dog.getdata();

    return 0;
}