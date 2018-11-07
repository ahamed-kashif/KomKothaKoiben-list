#pragma once
#include "Person.h"
#include "PhoneNumber.h"

const int maxPhoneNumbers = 15;

class Customer :
	public Person
{
private:
	int length;
	PhoneNumber phoneNumbers[maxPhoneNumbers];
	int customerIndex;
public:


	Customer();//constructor
	~Customer();//destructor

	void insert_phone_number(PhoneNumber);  //inserting phone number
	void delete_phone_number(int);         //deleting phone number
	PhoneNumber get_phone_numbers(int);   //retriving a phone number
	bool change_operator_name(string, string); //phone operator modifier
	void print_customer_deatails();     //printing customer details

	void set_customer_index(int);//modifier
	int get_customer_index();//accessor

	int phone_number_get_length();//accessor

};

