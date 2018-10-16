#include "dragon.h"
#include <fstream>
#include <iostream>
#include <vector>

using std::vector;
using std::ofstream;
using std::cout;

int main(){
    vector<bool> dragon;

    // Sequence (3 folds) sent to the console
    generate_dragon_sequence( dragon, 3, cout );

    // reset the vector
    dragon.resize(0);

    // open file
    ofstream fout;
    fout.open("dragon.txt");

    // Sequence (5 folds) sent to a file
    generate_dragon_sequence( dragon, 5, fout );

    // close file
    fout.close();

    return 0;
}
