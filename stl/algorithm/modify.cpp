
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

template <typename T>
void disp_v(const T & v) {
    if(!v.size()) return;
    for(auto e :  v) { cout << e << " "; }
    cout << endl;
}

int main() {
    // prime numbers < 100
    vector<int> v1 = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };
    vector<int> v2(v1.size(), 0);
    disp_v(v1);
    disp_v(v2);

    copy(v1.begin(), v1.end(), v2.begin());
	//copy_n 
	//copy_backward
	//reverse_copy
	//fill 
	//generate 
	//random_shuffle
	//
	
    disp_v(v2);

    return 0;
}
