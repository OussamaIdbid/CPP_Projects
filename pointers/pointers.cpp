#include <iostream>

using namespace std;

inline int addToNumber(int val, int addition) {

    return val + addition;
};

int main() {

   double* pvalue = new double{22.44}; // Pointer initialized with null 

   cout << "Value of pvalue : " << *pvalue << endl;

   delete pvalue;         // free up the memory.


//    cout << *pvalue << endl;

   return 0;
}