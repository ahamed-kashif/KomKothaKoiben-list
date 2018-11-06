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
	std::forward_list<Customer>::iterator it;
	int length;
public:
	STLForwardList();
	~STLForwardList();
	//bool is_full();
	int get_length();
	void make_empty();
	bool is_empty();
	Customer get_customer_details(int);
	void put_customer_details(Customer);
	bool delete_customer_details(int);

	//bool has_next_customer();
	Customer get_next_customer();
	//Printing List Contents
	void print_customer_list();

	//bool compare_customer_details(Customer);

};

