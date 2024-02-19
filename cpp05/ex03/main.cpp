#include "Intern.hpp"

int main(){
    try{
        Intern SomeThing;
        AForm *as;
        Bureaucrat a("Chef", 143);
        as = SomeThing.makeForm("Shrubbery Creation", "Bender");
        if (as != NULL){
            as->beSigned(a);
            as->execute(a);
            delete as;
        }
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
}