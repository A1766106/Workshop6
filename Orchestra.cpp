#include "Orchestra.h"
#include "Musician.h"
#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std; 

Orchestra::Orchestra()
{
    size = 0;
    array_Index = 0;

} 

Orchestra::Orchestra(int size)
{
    array_Index = 0;
    this->size = size;
    People = new Musician[size];
} 

int Orchestra::get_current_number_of_members()
{
    return size;
}

bool Orchestra::has_instrument(std::string instrument)
{
    for(int i=0;i<size;i++)
    {
        if(People[i].get_instrument() == instrument)
        {
            return true;
        }
    }
    return false;
}

 Musician *Orchestra::get_members()
 {
    return People;
 }

bool Orchestra::add_musician(Musician new_musician)
{
    if(array_Index >= size)
    {
        return false;
    }
    People[array_Index] = new_musician;
    array_Index++;
    return true;
}

Orchestra::~Orchestra(){}