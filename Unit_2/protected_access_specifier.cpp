#include <iostream>
using namespace std;

class Animal
{
protected:
    int age;
};

class Dog : public Animal
{
public:
    void setAge(int a)
    {
        age = a;
    }

    void displayAge()
    {
        cout << "Dog's Age = " << age << " years" << endl;
    }
};

int main()
{
    Dog d1;
    d1.setAge(5);
    d1.displayAge();

    return 0;
}