#include <iostream>
using namespace std;

// TODO: deal with this:
//#include <aeslib.h>
#include <aeslib.c>

int main(int argc, char *argv[])
{
    /*std::string *state    = new string("Bulk copy");
    std::string *roundkey = new string();*/
    char psc [] = "This is Cyrpto";
    char * state = psc;
    char psc2[] = {1,1,1,1,1,1,1,1,0};
    char * roundkey = psc2;
    AddRoundKey(psc, 9, psc2);
    cout << psc;
    return 0;
    /*int x;
    int y;
    cout << "This is bit operation tutorial. Input numbers or chars: \n";
    cout << "variable x: ";
    cin >> x;
    cout << "variable y: ";
    cin >> y;
    int OR = x | y ;
    int AND = x & y;
    int XOR = x ^ y;
    int YBitsLeft = x << y;
    int YBitsRight = x >> y;
    cout << "x OR y: " << OR << endl;
    cout << "x XOR y: " << XOR << endl;
    cout << "x AND y: " << AND << endl;
    cout << "x with push Y bits left: " << YBitsLeft << endl;
    cout << "x with pull Y bits Right: " << YBitsRight << endl;
    cout << "flip x: " << ~x << endl;
    return 0;*/
}
