#pragma once
#include "Person.h"
#include "PhoneNumber.h"

const int maxPhoneNumbers = 15;

class Customer :
	public Person
{
public:

	struct NodeType {
		PhoneNumber info = PhoneNumber();
		NodeType* next = nullptr;
		int phoneNumberIndex=0;
	};

private:
	NodeType* phoneNumberList = nullptr;
	int length = 0;
	NodeType* currentPosition = nullptr;
	int customerIndex;

public:


	Customer();//constructor
	~Customer();//destructor

	bool insert_phone_number(PhoneNumber);  //inserting phone number
	bool delete_phone_number(string);         //deleting phone number
	PhoneNumber get_phone_numbers(string);   //retriving a phone number
	bool change_operator_name(string, string); //phone operator modifier
	void print_customer_deatails();     //printing customer details
	void make_empty();
	bool is_full();

	void set_customer_index(int);//modifier
	int get_customer_index();//accessor
	int phone_number_get_length();//accessor
};

