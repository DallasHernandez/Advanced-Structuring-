#include <iostream>
using namespace std;


struct booking
{
    int booking_ID;
    string customer_name;
    string movie_name;
    int number_of_tickets;
    float ticket_price;

};


void display_bookings(booking booking_list[], int size)
{
    float total_revenue = 0;

    cout << "\n---------Booking Details--------\n" << endl;

    for (int index = 0; index < size; index++)
    {
        float total_amount =0.0;
        

        cout << "Booking ID: " << booking_list[index].booking_ID << endl;
        cout << "Customer: " << booking_list[index].customer_name << endl;
        cout << "Movie: " << booking_list[index].movie_name << endl;
        cout << "Tickets: " << booking_list[index].number_of_tickets << endl;

        total_amount = booking_list[index].number_of_tickets * booking_list[index].ticket_price;

        cout << "Total amount: " << total_amount << endl;

        total_revenue += total_amount;

    }


    cout << "Total Theatre Revenue: " << total_revenue << endl;

}

int main()
{
    const int size = 3;

    booking booking_list[size];

    for (int index = 0; index < size; index++)
    {
        cout << "\nEnter details for booking" << index + 1 << endl;

        cout << "Booking ID: ";
        cin >> booking_list[index].booking_ID;

        cout << "Customer Name: ";
        cin >> booking_list[index].customer_name;

        cout << "Movie Name: ";
        cin >> booking_list[index].movie_name;

        cout << "Number of Tickets: ";
        cin >> booking_list[index].number_of_tickets;

        cout << "Ticket Price: ";
        cin >> booking_list[index].ticket_price;
    }

    display_bookings(booking_list, size);

    return 0;

}

