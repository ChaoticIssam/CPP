#include "Serialization.hpp"

uintptr_t   Serialization::serialize(Data* ptr){
    uintptr_t   p = reinterpret_cast<uintptr_t>(ptr);
    return p;
}

Data*       Serialization::deserialize(uintptr_t raw){
    Data*   data = reinterpret_cast<Data *>(raw);
    return data;
}