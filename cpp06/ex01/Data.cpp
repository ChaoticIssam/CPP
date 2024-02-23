#include "Data.hpp"

Data::Data() : data(1){

}
Data::Data(int n) : data(n){
    
}
Data::Data(Data& obj) : data(obj.data){
    *this = obj;
}
Data& Data::operator=(Data& obj){
    (void) obj;
    return (*this);
}
Data::~Data(){

}

int Data::getData(){
    return (data);
}
