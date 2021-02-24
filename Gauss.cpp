// Primer programa de ejemplo en C++

#include <iostream>
using namespace std;



int sum = 0; //global integer

/* We're expectating a int number
and if the number = 0, we print "sum", 
otherwise we introduce a number and the 
programm will sum it and it will decrease 
until we got zero
*/


/* there's no point to return anything since
we have a global integer, we make the return
parameter a void
*/

void fun(int num) {  
    if (num == 0) {
        cout << sum << endl; // if num = 0, it will print the sum, that is zero because of aritmetic progression
    }

    else {
        sum += num; //this will sum a number and the next one
        num--; // that'll substract one from num every single time we execute if statement 
        fun(num);
    }
    
}

int main(){
    int num ;
    cin >> num;
    fun(num);
    return 0;
}
