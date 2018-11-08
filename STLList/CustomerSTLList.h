#pragma once
#include <iostream>
#include<exception>
#include <list> 
#include <iterator> 
#include "Customer.h"
#include <string>

using namespace std;


class CustomerSTLList
{
private:
	std::list<Customer> customerList;
	std::list<Customer>::iterator it;
	

	
public:
	CustomerSTLList();
	~CustomerSTLList();

	//bool is_full();

	int get_length();
	void make_empty();
	bool is_empty();
	Customer get_customer_details(int);
	bool put_customer_details(Customer);
	void delete_customer_details(int);



	//Printing List Contents
	void print_customer_list();

	//phone number updating
	bool insert_new_number(int, PhoneNumber);
	//bool delete_phone_number(int, int);

};

