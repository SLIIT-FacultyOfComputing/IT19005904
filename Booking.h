class Booking 
{
 private :
 string bookingID;
 int noOfGuests;
 String userName;
 string type;
 int price;
 date date;
 
 
 public:

 Booking();
 Booking(string pBookingID, int pNoOfGuests, String puserName, string pType, int pPrice, date pDate);
 
 void addBooking();
 void updateBooking();
 void viewBooking();
 void cancelBooking();
 ~Booking();
};
