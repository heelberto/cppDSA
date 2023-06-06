#include <iostream>
using namespace std;

//int * will return a pointer to an int, with arrays you should pass the size
int * func(int size){
    int *p;
    p = new int [size]; //create an array on the heap

    for(int i = 0; i < size; i++){
        p[i] = i + 1;
    }//fill the array will 1,2,3,4,5

    return p; //return the array
}

int main(){

    int *ptr;
    int sz = 5;

    ptr = func(sz);
    for(int i =0;i<sz;i++){
        cout << ptr[i] << endl;
    }
    
    return 0;
}