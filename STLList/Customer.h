#pragma once
 
#include "Person.h"
#include "PhoneNumber.h"
#include <list> 
#include <iterator>

using namespace std;

class Customer :
	public Person
{
private:

	int length;
	list<PhoneNumber> phoneNumberList;
	list<PhoneNumber>::iterator it;
	int customerIndex;

public:


	Customer();//constructor
	~Customer();//destructor

	bool insert_phone_number(PhoneNumber);  //inserting phone number
	bool delete_phone_number(string);         //deleting phone number
	PhoneNumber get_phone_numbers(string);   //retriving a phone number
	bool change_operator_name(string, string); //phone operator modifier
	void make_empty();
	bool is_full();
	bool is_empty();
	void print_customer_deatails();     //printing customer details

	void set_customer_index(int);//modifier
	int get_customer_index();//accessor
	int phone_number_get_length();//accessor
};

