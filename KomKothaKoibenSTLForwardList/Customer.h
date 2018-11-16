#pragma once
#include<forward_list>
#include "Person.h"
#include "PhoneNumber.h"


const int maxPhoneNumbers = 15;

class Customer :
	public Person
{
private:
	std::forward_list<PhoneNumber> phoneNumberList;
	std::forward_list<PhoneNumber>::iterator it = phoneNumberList.begin();

	int length;
	int customerIndex;

public:


	Customer();//constructor
	~Customer();//destructor

	void insert_phone_number(PhoneNumber);  //inserting phone number
	void delete_phone_number(string);         //deleting phone number
	PhoneNumber get_phone_numbers(string);   //retriving a phone number
	bool change_operator_name(string, string); //phone operator modifier
	
	void make_empty();
	bool is_full();

	void print_customer_deatails();     //printing customer details

	void set_customer_index(int);//modifier
	int get_customer_index();//accessor

	int phone_number_get_length();//accessor

};

