#include <iostream>
using namespace std;

enum ordering_status
{
	placed,
	preparing,
	out_for_delivery,
	delivered



};

struct order
{
	int order_id;
	string customer_name;
	float total_amount;
	ordering_status status;


};





int main()
{
	order order_1;
	int status_choice;

	cout << "Enter order ID: ";
	cin >> order_1.order_id;

	cout << "Enter customer's name: ";
	cin >> order_1.customer_name;

	cout << "Enter Total amount: ";
	cin >> order_1.total_amount;

	cout << "\nChoose Order Status\n";
	cout << "0 - Placed";
	cout << "1 - Preparing";
	cout << "2 - Out For Delivery";
	cout << "3 - Delivered";
	cout << "Enter Choice: ";
	cin >> status_choice;

	if (status_choice == 0)
	{
		order_1.status = placed;

	}
	else if (status_choice == 1)
	{
		order_1.status = preparing;

	}
	else if (status_choice == 2)

	{
		order_1.status = out_for_delivery;
	}
	else
	{
		order_1.status = delivered;
	}

	cout << "\nOrder Summary\n";
	cout << "Order ID: " << order_1.order_id << endl;
	cout << "Customer NAme" << order_1.customer_name << endl;
	cout << "Total Amount: " << order_1.total_amount << endl;

	if (order_1.status == placed)
	{
		cout << "\nStatus Placed\n" << endl;
		cout << "We have recieved your order" << endl;
	}
	else if (order_1.status == preparing)
	{
		cout << "\nStatus Preparing\n" << endl;
		cout << "Your food is preparing" << endl;
	}
	else if (order_1.status == out_for_delivery)
	{
		cout << "\nStatus Delivering\n" << endl;
		cout << "Your food is out for delivery" << endl;
	}
	else
	{
		cout << "\nStatus Delivered\n" << endl;
		cout << "Your Food has been delivered" << endl;
	}
	return 0;


}
