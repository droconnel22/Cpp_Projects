#include <iostream>
#include <string>
using namespace std;

class Human
{
    private:
        string Name;
        int Age;
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

int main()
{
    Human firstMan;
    firstMan.setAge(76);
    firstMan.setName("Adam");
    firstMan.IntroduceSelf();

    Human firstWomen("Eve",23);
    firstWomen.IntroduceSelf();

    return 0;
}