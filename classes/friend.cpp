#include <iostream>
#include <string>
using namespace std;

class Human
{
    private:
        string Name;
        int Age;
        friend void DisplayAge(const Human& person);
    public:

        Human(const string& name = "Adam", const int& age = 30)
            :Name(name), Age(age)
        {
            cout <<"Constructed" <<endl;
        }

        ~Human() 
        {
            this->Name = "";
            this->Age = -1;
        }
        void setName(const string& name) 
        {
            this->Name = name;
        }

        void setAge(const int& age)
        {
            this->Age = age;
        }

        void IntroduceSelf()
        {
            cout<< "I am " << this->Name << " and am ";
            cout <<" Age " << this->Age << " years old" << endl;
        }

};

void DisplayAge(const Human& Person)
{
    cout <<"I am a friend method, person age is: " << Person.Age << endl;
}

int main()
{
    Human firstMan;
    firstMan.setAge(76);
    firstMan.setName("Adam");
    firstMan.IntroduceSelf();

    Human firstWomen("Eve",23);
    firstWomen.IntroduceSelf();
    
    DisplayAge(firstMan);

    return 0;
}