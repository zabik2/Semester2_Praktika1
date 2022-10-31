#ifndef TRAVELAGENCY_H
#define TRAVELAGENCY_H

#include "booking.h"
#include "flightbooking.h"
#include "hotelbooking.h"
#include "rentalcarreservation.h"
#include <vector>
#include <fstream>
#include <cstdlib>
#include <string>

class TravelAgency
{
public:
    TravelAgency();
    void readFile();
    void readBinaryFile();
    ~TravelAgency();

private:
    std::vector<Booking*> BookingList;
    std::vector<FlightBooking*> FlightsList;
    std::vector<HotelBooking*> HotelList;
    std::vector<RentalCarReservation*> RentalCarList;
};

#endif // TRAVELAGENCY_H
