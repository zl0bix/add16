#pragma once
#include<string>
#include<iostream>
class Human{
std::string FIO;
	int age;
public:
	Human();
	Human(std::string FIO, int age = 18);
	Human(Human & const obj);
	~Human();
	std::string getFIO();
	int getAge();

};

