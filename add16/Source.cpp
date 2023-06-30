#include<iostream>
#include<vector>
#include"House.h"

size_t House::Flat::flat_Number = 0;



int main() {
	
	House h1();
	std::vector<Human*> men;
	men.push_back(new Human("Tom", 19));
	men.push_back(new Human("Bill"));
	men.push_back(new Human("Sam", 19));
	House::Flat flat1;
	House::Flat flat1(men, 11);
	House home(std::vector<House::Flat*>(&flat1));
	return {};
}
