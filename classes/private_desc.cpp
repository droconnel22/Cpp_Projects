#include <iostream>
#include<string>
using namespace std;

// prevent class from being instainated on stack only on heap
// private destructor

class MonsterDb 
{
    private:
      
        string yell;
    public:
      ~MonsterDb(){} // heap only no stack
        MonsterDb(const string& yell="Rarr")
            :yell(yell)
            {
                cout << this->yell << endl;
            }
};

int main()
{
    //MonsterDb MonsterDb; NOOP
    MonsterDb* mDb = new MonsterDb();

    unique_ptr<MonsterDb> Mdb2(new MonsterDb("BOO"));
    return 0;
}

