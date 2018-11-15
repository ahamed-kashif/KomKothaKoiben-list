#pragma once
#include <iostream>
#include<exception>
#include <forward_list>
#include "Customer.h"
#include <string>

using namespace std;


class STLForwardList
{
private:
	std::forward_list<Customer> customerList;
	std::forward_list<Customer>::iterator it= customerList.begin();
	
	int length;
public:
	STLForwardList();//constructor
	~STLForwardList();//destructor
	int get_length();//accessor
	void make_empty();
	bool is_empty();
	Customer get_customer_details(int);//accessor
	void put_customer_details(Customer);//modifier
	void delete_customer_details(int);//modifier

	
	
	//Printing List Contents
	void print_customer_list();

	//phone number updating
	bool insert_new_number(int, PhoneNumber);//modifier
	bool delete_phone_number(int, int);//modifier
	bool change_operator_name(int, string, string);//modifier
};

