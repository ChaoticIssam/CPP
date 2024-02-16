#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", false, 145, 137), _target("DEFAULT"){
    std::cout << "ShrubberyCreationForm's Default constructor has been called." << std::endl;
} 
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", false, 145, 137), _target(target){
    std::cout << "ShrubberyCreationForm's Parametrized constructor has been called." << std::endl;
} 
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& obj) : AForm("ShrubberyCreationForm", false, 145, 137), _target(obj._target){
    std::cout << "ShrubberyCreationForm's copy constructor has been called." << std::endl;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm&obj){
    std::cout << "ShrubberyCreationForm's copy " << std::endl;
    (void)obj;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
   std::cout << "ShrubberyCreationForm's destructor has been called." << std::endl;
}

void    ShrubberyCreationForm::execute(Bureaucrat const& executor){
    if (executor.getGrade() > 145 || !getSign())
        throw Bureaucrat::GradeTooLowException();
    std::string tar = _target + "_target";
    std::ofstream   TargetFile(tar.c_str());
         TargetFile << "                                                .    " << std::endl;
         TargetFile << "                                     .         ;     " << std::endl;
         TargetFile << "        .              .              ;%     ;;      " << std::endl;   
         TargetFile << "          ,           ,                :;%  %;       " << std::endl;   
         TargetFile << "           :         ;                   :;%;'     .," << std::endl;   
         TargetFile << "  ,.        %;     %;            ;        %;'    ,;  " << std::endl;                                                                                                                                   
         TargetFile << "    ;       ;%;  %%;        ,     %;    ;%;    ,%'   " << std::endl;                                                                                                                                  
         TargetFile << "     %;       %;%;      ,  ;       %;  ;%;   ,%;'    " << std::endl;                                                                                                                                  
         TargetFile << "      ;%;      %;        ;%;        % ;%;  ,%;'      " << std::endl;                                                                                                                               
         TargetFile << "       `%;.     ;%;     %;'         `;%%;.%;'        " << std::endl;                                                                                                                             
         TargetFile << "        `:;%.    ;%%. %@;        %; ;@%;%'           " << std::endl;                                                                                                                          
         TargetFile << "           `:%;.  :;bd%;          %;@%;'             " << std::endl;                                                                                                                        
         TargetFile << "             `@%:.  :;%.         ;@@%;'              " << std::endl;                                                                                                                          
         TargetFile << "               `@%.  `;@%.      ;@@%;                " << std::endl;                                                                                                                              
         TargetFile << "                 `@%%. `@%%    ;@@%;                 " << std::endl;                                                                                                                            
         TargetFile << "                   ;@%. :@%%  %@@%;                  " << std::endl;                                                                                                                          
         TargetFile << "                     %@bd%%%bd%%:;                   " << std::endl;                                                                                                                       
         TargetFile << "                       #@%%%%%:;;                    " << std::endl;                                                                                                                 
         TargetFile << "                       %@@%%%::;                     " << std::endl;                                                                                                                
         TargetFile << "                       %@@@%(o);  . '                " << std::endl;                                                                                                                              
         TargetFile << "                       %@@@o%;:(.,'                  " << std::endl;                                                                                                                            
         TargetFile << "                   `.. %@@@o%::;                     " << std::endl;                                                                                                                         
         TargetFile << "                      `)@@@o%::;                     " << std::endl;                                                                                                                         
         TargetFile << "                       %@@(o)::;                     " << std::endl;                                                                                                                        
         TargetFile << "                      .%@@@@%::;                     " << std::endl;                                                                                                                         
         TargetFile << "                      ;%@@@@%::;.                    " << std::endl;                                                                                                                           
         TargetFile << "                     ;%@@@@%%:;;;.                   " << std::endl;                                                                                                                   
         TargetFile << "                 ...;%@@@@@%%:;;;;,..                " << std::endl;                                                                                                                      
    TargetFile.close();
}
