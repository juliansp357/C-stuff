// Primer programa de ejemplo en C++

#include <iostream>
using namespace std;



int sum = 0;

void fun(int num) {
    if (num == 0) {
        cout << sum << endl; 
    }

    else {
        sum += num;
        num--;
        fun(num);
    }
    
}

int main(){
    int num ;
    cin >> num;
    fun(num);
    return 0;
}