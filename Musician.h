#ifndef MUSICIAN_H
#define MUSICIAN_H
#include <string>
#include <iostream>

class Musician
{
    public:
        int experience;
        std::string instrument;
        Musician();                  // a default constructor 
        // a constructor that takes the instrument played and the years of experience
        Musician(std::string instrument, int experience);      
        std::string get_instrument();    // returns the instrument played
        int get_experience();       // returns the number of years experience
};

#endif