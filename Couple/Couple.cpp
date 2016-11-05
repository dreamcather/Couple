// Couple.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Couple.h"
#include <string>
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale( LC_ALL,"Russian" );
	string name="Значение";
	int k=10;
	Couple<int> A(name,k);
	A.Value=150;
	cout<<A.Value<<endl;
	cout<<A.GetName()<<endl;
	system("pause");
	return 0;
}

