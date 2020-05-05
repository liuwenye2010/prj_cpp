#include <iostream>
using namespace std;

template<typename T>
T pi = T(3.1415926535897932385L);

template<typename T>
T area_of_circle(const T &r) {
	return r*r*pi<T> 
}

int main()
{
    cout.precision(30);
    cout << pi<double> << area_of_circle<double>(3)<< endl;
    return 0;
}
