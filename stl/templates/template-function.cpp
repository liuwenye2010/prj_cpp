#include <iostream>
#include <string>
using namespace std;

template <typename T>
T maxof ( const T & a, const T & b ) {
    return ( a > b ? a : b );
}

int main() {
    int a = 17;
    int b = 19;
    
    cout << "max is " << maxof<int>( a, b ) << endl;
	
	string c = "sdd"; 
	string d = "ddd"
	
	cout << "max is " << maxof<string>( c, d ) << endl;
    
    return 0;
}
