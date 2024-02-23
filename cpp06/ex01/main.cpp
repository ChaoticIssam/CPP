#include "Serialization.hpp"
int main(){
    Data           B(14383);
    uintptr_t x = Serialization::serialize(&B);
    Data *z = Serialization::deserialize(x);
    std::cout << z->getData() << std::endl;  
      
}