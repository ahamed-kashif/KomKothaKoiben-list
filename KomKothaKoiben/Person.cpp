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

//defining modifiers
void Person::set_name(string Name)
{
	name = Name;
}
void Person::set_father_name(string FatherName)
{
	fatherName = FatherName;
}
void Person::set_mother_name(string MotherName)
{
	motherName = MotherName;
}
void Person::set_age(int Age)
{
	age = Age;
}
void Person::set_gender(char Gender)
{
	gender = Gender;
}
void Person::set_marital_status(bool MaritalStatus)
{
	maritalStatus = MaritalStatus;
}
void Person::set_national_ID(char nationalID[11])
{
	for (int index = 0; index < 11; index++)
	{
		NID[index] = nationalID[index];
	}
}
void Person::set_present_address(string PresentAddress)
{
	presentAddress = PresentAddress;
}
void Person::set_permanent_address(string PermanentAddress)
{
	permanentAddress = PermanentAddress;
}
void Person::set_height(float Height)
{
	height = Height;
}
void Person::set_weight(float Weight)
{
	weight = Weight;
}
void Person::set_eye_color(string EyeColor)
{
	eyeColor = EyeColor;
}
void Person::set_hair_color(string HairColor)
{
	hairColor = HairColor;
}

//defining accessors
string Person::get_name()
{
	return name;
}
string Person::get_father_name()
{
	return fatherName;
}
string Person::get_mother_name()
{
	return motherName;
}
int Person::get_age()
{
	return age;
}
char Person::get_gender()
{
	return gender;
}
char* Person::get_national_ID()
{
	return NID;
}
bool Person::get_marital_status()
{
	return maritalStatus;
}
string Person::get_present_address()
{
	return presentAddress;
}
string Person::get_permanent_address()
{
	return permanentAddress;
}
float Person::get_height()
{
	return height;
}
float Person::get_weight()
{
	return weight;
}
string Person::get_eye_color()
{
	return eyeColor;
}
string Person::get_hair_color()
{
	return hairColor;
}
