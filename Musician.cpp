#include "Musician.h"
#include <iostream>
#include <string>

using namespace std;

    Musician::Musician()
    {
        experience = 0;
        instrument = "";
    }              

    Musician::Musician(std::string instrument, int experience)
    {
        this->instrument = instrument;
        this->experience = experience;
    }    
    string Musician:: get_instrument()
    {
        return instrument;
    }   
    int Musician::get_experience()
    {
        return experience;
    }