
#include <iostream>
#include "NQueens.h"

using namespace std;

int main(int argc, char* argv[]) 
{
	int n = 5; 
	int print_all_solution = 1; 
	if (argc <= 1)
	{
       //use the defualt value 
	}else
	{	
       n= atoi(argv[1]) ;
	   if (n <4)
	   {
		cerr << "ERROR: Invalid N; first argument must be integer >= 4" << endl;
		return -2;
	   }
	   print_all_solution = atoi(argv[2]); 
	}
    cout <<"N="<<n<<endl; 
	cout <<"print_all_solution"<<print_all_solution<<endl; 
	NQueens nq = NQueens(n);
	nq.computeSolns(print_all_solution);
	cout<< "done "<<endl; 

	return 0;
}