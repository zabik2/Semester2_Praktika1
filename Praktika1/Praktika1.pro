TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        booking.cpp \
        flightbooking.cpp \
        hotelbooking.cpp \
        main.cpp \
        rentalcarreservation.cpp \
        travelagency.cpp

HEADERS += \
    booking.h \
    flightbooking.h \
    hotelbooking.h \
    rentalcarreservation.h \
    travelagency.h
