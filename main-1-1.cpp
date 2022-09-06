#include "Musician.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
    Musician m1;
    Musician m2("Bass", 15);
    cout << m2.get_experience() << endl;
    cout << m2.get_instrument() << endl;
    cout << m1.get_experience() << endl;
    cout << m1.get_instrument() << endl;
    
    
    return 0;
}


