#include <iostream>
using namespace std;

void fun(int A[]){ //remember then by default arrays are passed by address, therefore
    for(int a:A){   //line 4 is just a POINTER to the beginning of the array
                    //therefore here the A that is passed in the for each loop will error
                    //because you can't iterate through a pointer
        cout << a << endl;
    }
}

int main(){

    int A[]={2,4,6,8,10};
    int n =5;

    for(int x: A){
        cout << x;
    }

    return 0;
}