#include <iostream>
using namespace std;

// TODO: deal with this:
//#include <aeslib.h>
#include <aeslib.c>

int const matrix_size = 15; //total of 16 elements





int main(int argc, char *argv[])
{
    /*std::string *state    = new string("Bulk copy");
    std::string *roundkey = new string();*/

	///Vajag paddot ctypto tekstu ja garums nav pietiekams, tad jaizpilda ar 0!. Ka ari ko darit, ja ir parak gars?
    char crypto_text [] = "This is Cyrpto";
	char * state = crypto_text;
    char key[] = "111111111111110";
    char * roundkey = key;
	

   AddRoundKey(crypto_text, key);
	cout << crypto_text << endl;;
    
    //int x;
    //int y;
    //cout << "This is bit operation tutorial. Input numbers or chars: \n";
    //cout << "variable x: ";
    //cin >> x;
    //cout << "variable y: ";
    //cin >> y;
    //int OR = x | y ;
    //int AND = x & y;
    //int XOR = x ^ y;
    //int YBitsLeft = x << y;
    //int YBitsRight = x >> y;
    //cout << "x OR y: " << OR << endl;
    //cout << "x XOR y: " << XOR << endl;
    //cout << "x AND y: " << AND << endl;
    //cout << "x with push Y bits left: " << YBitsLeft << endl;
    //cout << "x with pull Y bits Right: " << YBitsRight << endl;
    //cout << "flip x: " << ~x << endl;
    
	system("pause");
	return 0;
};
