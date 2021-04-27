#include <iostream>
#include "dog.h"

Dog::Dog(std::string name_param) : name(name_param)
{
    std::cout << "Constructor for dog " << name << " called" << std::endl;
}

Dog::~Dog() 
{
    std::cout << "Destructor for dog" << name << " called" << std::endl;
}

std::string Dog::get_name() const
{
    return name;
}

void Dog::set_name(const std::string& name_param)
{
    name  = name_param;
}

void Dog::print_info() const 
{
    std::cout << "Dog’s name : " << name << std::endl;
}

