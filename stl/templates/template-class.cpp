#include "stack.h"
#include <iostream>
#include <string>
using namespace std;

constexpr int nums[] = { 1, 2, 3, 4, 5 };
constexpr const char * strs[] = { "one", "two", "three", "four", "five" };

int main() {
    try {
        Stack<int> li(5);
        
        cout << "li size: " << li.size() << endl;
        cout << "li top: " << li.top() << endl;
        
        for ( int i : nums ) {
            li.push(i);
        }
        
        cout << "li top after pushes: " << li.top() << endl;
        cout << "li is " << ( li.isFull() ? "" : "not " ) << "full" << endl;
        
        while(!li.isEmpty()) {
            cout << "popped " << li.pop() << endl;
        }
    } catch (StackExeption & e) {
        cout << "Stack error: " << e.what() << endl;
    }
    
    try {
        Stack<string> ss(5);
        
        cout << "ss size: " << ss.size() << endl;
        cout << "ss top: " << ss.top() << endl;
        
        for ( const char * s : strs ) {
            ss.push(s);
        }
        
        cout << "ss top after pushes: " << ss.top() << endl;
        cout << "ss is " << ( ss.isFull() ? "" : "not " ) << "full" << endl;
        
        while(!ss.isEmpty()) {
            cout << "popped " << ss.pop() << endl;
        }
    } catch (StackExeption & e) {
        cout << "Stack error: " << e.what() << endl;
    }
    
    return 0;
}
