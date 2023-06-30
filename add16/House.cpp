#include "House.h"

House::House(){}

House::House(std::vector<Flat*> flat){
	this->flat = flat;
}

House::House(House& const obj){
	this->flat = obj.flat;
}

House::~House(){
	for (auto it = flat.begin(); it != flat.end(); ++it)
		delete *it;
}

House::Flat::Flat() {
	flat_Number++;
	flatNumber = flat_Number;
}

House::Flat::Flat(std::vector<Human*> human, int flatNumber){
	flat_Number++;
	this->human = human;
	this->flatNumber = flatNumber;
}

House::Flat::Flat(Flat& const obj){
	flat_Number++;
	this->flatNumber = obj.flatNumber;
	this->human = obj.human;
}

House::Flat::~Flat(){
	std::cout << "Flat is burn\n";
}

void House::Flat::pushBack(Human * const human){
	this->human.push_back(human);
}
