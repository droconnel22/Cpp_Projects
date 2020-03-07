#include<iostream>
#include<string>

struct Dog 
{
    // public.
    std::string name;
    Dog(const std::string& name="Spot")
        :name(name)
        {
            std::cout << this->name << std::endl;
        }
};