#pragma once
#include <iostream>
#include <forward_list>
#include "Customer.h"
#include <string>

using namespace std;


class STLUnsortedCustomerList
{
private:
	forward_list<Customer> customerList;
public:
	STLUnsortedCustomerList();
	~STLUnsortedCustomerList();
	bool is_full();
	int get_length();
	void make_empty();
	bool is_empty();
	Customer get_customer_details(int);
	bool put_customer_details(Customer);
	bool delete_customer_details(int);
	//Iterator Operations
	void reset_list_customer_list();
	bool has_next_customer();
	Customer get_next_customer();
	//Printing List Contents
	void print_customer_list();

};

