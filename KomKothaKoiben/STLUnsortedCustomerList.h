#pragma once
#include <iostream>
#include<exception>
#include <forward_list>
#include "Customer.h"
#include <string>

using namespace std;


class STLUnsortedCustomerList
{
private:
	forward_list<Customer> customerList;
	int length;
public:
	STLUnsortedCustomerList();
	~STLUnsortedCustomerList();
	//bool is_full();
	int get_length();
	void make_empty();
	bool is_empty();
	Customer get_customer_details(int);
	void put_customer_details(Customer);
	//bool delete_customer_details(Customer);
	
	//bool has_next_customer();
	Customer get_next_customer();
	//Printing List Contents
	void print_customer_list();

};

