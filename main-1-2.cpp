#include "Musician.h"
#include "Orchestra.h"
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
    Musician m1;
    Musician m2("Bass", 15);
    // cout << m2.get_experience() << endl;
    // cout << m2.get_instrument() << endl;
    // cout << m1.get_experience() << endl;
    // cout << m1.get_instrument() << endl;

    Orchestra o1(3);
    cout << o1.add_musician(m1) << endl;
    cout << o1.add_musician(m2) << endl;
    Musician *PTR = o1.get_members();
    for(int i=0;i<3;i++)
    {
        cout << PTR[i].get_instrument() << " " << PTR[i].get_experience() << endl;
    }
    return 0;
}