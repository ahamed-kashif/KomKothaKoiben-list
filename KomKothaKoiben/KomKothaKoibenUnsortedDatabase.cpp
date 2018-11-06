#include <iostream>
#include "PhoneNumber.h"
#include "Customer.h"
#include "UnsortedCustomerList.h"


using namespace std;
int main()
{

	/*Setting Phone Numbers*/

	PhoneNumber numOne, numTwo, numThree, numFour, numFive, numSix, numSeven, numEight, numNine, numTen;

	numOne.set_phone_number("01783511730");
	numOne.set_operator_name("GrameenPhone");

	numTwo.set_phone_number("01715583543");
	numTwo.set_operator_name("GrameenPhone");

	numThree.set_phone_number("01998021382");
	numThree.set_operator_name("BanglaLink");

	numFour.set_phone_number("01675743091");
	numFour.set_operator_name("KomKothaKoiben");

	numFive.set_phone_number("01815565307");
	numFive.set_operator_name("Robi");

	numSix.set_phone_number("01883511730");
	numSix.set_operator_name("Robi");

	numSeven.set_phone_number("01615583543");
	numSeven.set_operator_name("KomKothaKoiben");

	numEight.set_phone_number("01598021382");
	numEight.set_operator_name("Teletalk");

	numNine.set_phone_number("01675743091");
	numNine.set_operator_name("KomKothaKoiben");

	numTen.set_phone_number("01915565307");
	numTen.set_operator_name("BanglaLink");


	//Setting Customer Details 

	Customer customer;
	customer.set_name("Oyon");
	customer.set_father_name("Anudip");
	customer.set_mother_name("Promila");
	string nid = "19992222341";
	char customerNID[11];
	for (int index = 0; index < 11; index++)
	{
		customerNID[index] = nid[index];
	}
	customer.set_age(19);
	customer.set_gender('M');
	customer.set_national_ID(customerNID);
	customer.set_present_address("Dhaka");
	customer.set_permanent_address("Mymensingh");
	customer.set_marital_status(false);
	customer.set_customer_index(1);
	customer.set_eye_color("brown");
	customer.set_hair_color("black");
	customer.set_height(5.5);
	customer.set_weight(42);
	customer.insert_phone_number(numOne);
	customer.insert_phone_number(numTwo);


	Customer customer1;
	customer1.set_name("Noyon");
	customer1.set_father_name("Anudipa");
	customer1.set_mother_name("PromilaD");
	string nid1 = "19992222344";
	char customerNID1[11];
	for (int index1 = 0; index1 < 11; index1++)
	{
		customerNID1[index1] = nid1[index1];
	}
	customer1.set_age(20);
	customer1.set_gender('M');
	customer1.set_national_ID(customerNID1);
	customer1.set_present_address("Dhakaa");
	customer1.set_permanent_address("Mymensinghh");
	customer1.set_marital_status(false);
	customer1.set_customer_index(2);
	customer1.set_eye_color("browns");
	customer1.set_hair_color("blacks");
	customer1.set_height(6.5);
	customer1.set_weight(55);
	customer1.insert_phone_number(numThree);
	customer1.insert_phone_number(numFour);


	Customer customer2;
	customer2.set_name("Noyono");
	customer2.set_father_name("Anudipaw");
	customer2.set_mother_name("PromilaDs");
	string nid2 = "19992222313";
	char customerNID2[11];
	for (int index2 = 0; index2 < 11; index2++)
	{
		customerNID2[index2] = nid2[index2];
	}
	customer2.set_age(22);
	customer2.set_gender('F');
	customer2.set_national_ID(customerNID2);
	customer2.set_present_address("Dhakaay");
	customer2.set_permanent_address("Mymensinghhy");
	customer2.set_marital_status(true);
	customer2.set_customer_index(3);
	customer2.set_eye_color("brownsz");
	customer2.set_hair_color("blacksz");
	customer2.set_height(6.0);
	customer2.set_weight(58.0);
	customer2.insert_phone_number(numThree);
	customer2.insert_phone_number(numFour);

	//Creating unsorted link list of customers
	UnsortedCustomerList uncustomer;

	//Inserting 2 customer into unsorted link list

	uncustomer.put_customer_details(customer);
	uncustomer.put_customer_details(customer1);
	
	//Printing unsorted customer list
	//uncustomer.print_customer_list();
	//uncustomer.reset_list_customer_list();

	//Inserting a new phone number in existing customer
	uncustomer.insert_new_number(1, numFive);
	//uncustomer.print_customer_list();
	//uncustomer.reset_list_customer_list();

	//Inserting another Cuatomer
	uncustomer.put_customer_details(customer2);

	uncustomer.delete_phone_number(3,0);
	uncustomer.delete_phone_number(3,0);
	

	//uncustomer.get_customer_details(1).print_customer_deatails();
	//uncustomer.delete_customer_details(2);

	//uncustomer.delete_phone_number(1,0);

	uncustomer.print_customer_list();
}


