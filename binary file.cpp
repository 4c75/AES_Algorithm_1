#include <iostream>
using namespace std;

//Shit taken from here:
//https://en.wikipedia.org/wiki/Advanced_Encryption_Standard

void AddRoundKey(char *state, int state_size, char *round_key)
{
    for(int i=0; i < state_size; i++){
        state[i] ^= round_key[i];
    }
}

//TODO - How to create look_up table (Rijndael S-box)?

// pass just 4x4 arrays, pls
void SubBtyes(char **state, char **lookup)
{
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            state[i][j] = lookup[i][j]; // or make S function
        }
    }
}

// again - pass just 4x4 array, pls - [rows][columns]
void ShiftRows(char **state)
{
    for(int row = 1; row<4; row++){
        char remember = state[row][0];
        for(int col = 1; col<4; col++){
            state[row][col-1] = state[row][col];
        }
    state[row][3] = remember;
    }
}

void MixColumns()
{
    return;
}

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
