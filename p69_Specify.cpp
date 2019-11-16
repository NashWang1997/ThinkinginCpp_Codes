// Demonstrates the use of specifiers
#include <iostream>
using namespace std;

int main()
{
    char c;
    unsigned char cu;
    int i;
    unsigned int iu;
    short int is;
    short iis;
    unsigned short int isu;
    unsigned short iisu;
    long int il;
    long iil;
    unsigned long int ilu;
    unsigned long iilu;
    float f;
    double d;
    long double ld;
    cout << "char = " << sizeof(c)
    << "\nunsigned char = " << sizeof(cu)
    << "\nint = " << sizeof(i)
    << "\nunsigned int = " << sizeof(iu)
    << "\nshort = " << sizeof(is) << " " << sizeof(iis)
    << "\nunsigned short = " << sizeof(isu) << " " << sizeof(iisu)
    << "\nlong = " << sizeof(il) << " " << sizeof(iil)
    << "\nunsigned long = " << sizeof(ilu) << " " << sizeof(iilu)
    << "\nfloat = " << sizeof(f)
    << "\ndouble = " << sizeof(d)
    << "\nlong double = " << sizeof(ld) << endl;
    return 0;
}
