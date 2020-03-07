#include <iostream>
#include <functional>

#include "BSTNode.h";

int main()
{
  [out = std::ref(std::cout << "Hello " )](){ out.get() << "World \n"; }();
  

}
