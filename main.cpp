#include "Booking.h"
#include<iostream>
using namespace std;

int main(){
    
    Booking *bkn1 = new Booking('bk001', '5', 'Dakshika', 'type1', 10000, 2021.10,14);
    bkn1->addBooking();
    bkn1->updateBooking();
    bkn1->viewBooking();
    bkn1->cancelBooking();
    
    
    

}