#include<iostream>
#include<memory>

using namespace std;

class Fish
{
    public:
        Fish() 
        {
            cout << "Fish: Constructued!" <<endl;
        }
        ~Fish()
        {
            cout << "Fish: Destructed!" << endl;
        }

        void Swim() const 
        {
            cout << "Fish swims in water" << endl;
        }

       
};

 void FishSwim(const unique_ptr<Fish>& inFish)
{
    inFish->Swim();
}

int main()
{
    unique_ptr<Fish> smartFish(new Fish());
    FishSwim(smartFish);
    return 0;
}



