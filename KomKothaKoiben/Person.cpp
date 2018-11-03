#include "Person.h"


Person::Person()
{
	NID = new char[11];
}


Person::~Person()
{
}

Person::Person(string Name, string permanentADD, char nationalID[11])
{
	NID = new char[11];
	for (int index = 0; index < 11; index++)
	{
		NID[index] = nationalID[index];
	}
	name = Name;
	permanentAddress = permanentADD;
}
