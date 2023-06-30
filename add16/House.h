#pragma once
#include<vector>
#include"Human.h"
class House {
	class Flat;
	std::vector<Flat*>flat;
public:
	House();
	House(std::vector<Flat*>flat);
	House(House & const obj);
	~House();
	class Flat {
		static size_t flat_Number;
		std::vector<Human*>human;
		int flatNumber;
	public:
		Flat();
		Flat(std::vector<Human*>human,int flatNumber);
		Flat(Flat & const obj);
		~Flat();
		void pushBack(Human* const human);
	};
};


