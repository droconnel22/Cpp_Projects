#include <iostream>
#include <string>
using namespace std;

class President 
{
    private:
        President(){}
        President(const President&);
        const President& operator=(const President&);
        
        string name;
    public:
        static President& GetInstance()
        {          
            static President instance;
            return instance;
        }

        string GetName() const
        {
            return this->name;
        }

        void setName(const string& name)
        {
            this-> name = name;
        }
};

int main()
{
    President& onlyPresident = President::GetInstance();
    onlyPresident.setName("Dennis");
    cout << onlyPresident.GetName() << endl;
    President& nextPres = President::GetInstance();
     cout << nextPres.GetName() << endl;
    return 0;
}