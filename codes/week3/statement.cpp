#include<stdio.h>

int main() {
    printf("Inside Main\n");

    // if passenger has booked package booking & credit card & 5 star hotel or Taj Hotel & porsche car or BMW & Ethiad airlines 
    // or American & UK trip & 
    // LHR lounge & 2024 march trip & platinum or travel CC   ---> then booked it for customer. otherwise mark it as cancelled

    char customer_hotel = 'T';
    char customer_package = 'P';
    char customer_car = 'B';
    char customer_airlines = 'A';
    char customer_lounge = 'L';
    char customer_card = 'C';
    char customer_credit_card = 'P';
    char customer_booking = 'B';
    char customer_booking_month = 'M';

    if(customer_booking == 'B') {
        if(customer_package == 'P') {
            if(customer_booking_month == 'M') {
                if((customer_hotel == 'T' or customer_hotel == 'S') and
                    (customer_airlines == 'E' or customer_airlines == 'A') and
                     (customer_car == 'P' or customer_car == 'B')) {
                        if(customer_card == 'C' and (customer_credit_card == 'P' or customer_credit_card == 'T')) {
                        printf("Congrats! Your booking is made with us with details provided by you\n");
                        }
                    }
            }
        }
    }
    else {
        printf("Sorry!, it must be valid booking. Try Again!\n");
    }

}