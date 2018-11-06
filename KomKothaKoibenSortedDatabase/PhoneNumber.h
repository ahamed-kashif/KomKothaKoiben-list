#pragma once
#include<string>
#include<iostream>

using namespace std;

class PhoneNumber
{
private:
	string phoneNumber;
	string operatorName;
public:
	PhoneNumber();//constructor
	PhoneNumber(string, string);//parameterized constructor
	~PhoneNumber();	//destructor

	void set_phone_number(string);//modifier
	void set_operator_name(string);//modifier



	string get_phone_number();//accessor
	string get_operator_name();//accessor

	void print_phone_number();//printing function
};

