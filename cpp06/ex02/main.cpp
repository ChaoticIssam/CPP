#include "Base.hpp"
#include <unistd.h>

int main()
{
	Base *obj = generate();
    identify(obj);
    identify(*obj);
}