#pragma once
#include <iostream>
#include <string>
using namespace std;
template <class Type>
class Couple
{
private:
	string Name;
public:
	Type Value;
	Couple<Type>(string _Name,Type _Value)
	{
		Name=_Name;
		Value=_Value;
	}
	string GetName()
	{
		return Name;
	}
};

