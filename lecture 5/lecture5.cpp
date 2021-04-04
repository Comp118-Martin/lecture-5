//

/** \file bugExampleSimple.cpp
 *  \brief     A little program with a logical bugs in it
 *  \details   This program is littered with logical bugs. Your task is the
 *              following:
 *                1) Compile and run the program.
 *                2) For each bug you find you must fix the bug then Check In
 *                   the code with a comment on the fix you did
 *  \author    Harald Gjermundrod
 *  \version   0.1
 *  \date      2017-2017
 *  \bug       Many logical bugs
 *  \copyright University of Nicosia.
 */
#include <iostream>
using namespace std;

/**
 * <code>main</code> is the main function of this program.
 * <BR>
 * @return Returns 0 if success, any other value otherwise.
 */
int main() {
    int targetNum;
   int product = 1;
    
    cout << "Enter a number: ";
    cin >> targetNum;
    
    for (int i = 1; i <= targetNum; ++i)
        product *= i;
    
    cout << "\nProduct of numbers from 1 to " << targetNum << " is: " << product << endl;
    
    getchar();
    getchar();
    
    return 0;
}
