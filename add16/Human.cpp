#include "Human.h"

Human::Human() : FIO("No name"), age(22){}




Human::Human(std::string FIO, int age)
{
	this->FIO = FIO;
	this->age = age;
}

Human::Human(Human& const obj)
{
	this->FIO = obj.FIO;
	this->age = obj.age;
}

Human::~Human()
{
	std::cout << "distruct HUMAN";
}

std::string Human::getFIO(){return FIO;}

int Human::getAge(){return age;}
