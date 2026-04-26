#include <iostream>

using namespace std;
int main() {

    int i;
    int count_arr = 0;
    int array[10];


    for ( i = 0; i<10 ; i++){
        array[i] = -1;
        cout<<array[i]<<" ";
    }
    cout<<"\n";
    

    array[0] = 10;
    count_arr++;
    array[1] = 20;
    count_arr++;
    array[2] = 30;
    count_arr++;
    array[3] = 40;
    count_arr++;

    for ( i = 2 ; i < count_arr ; i++){
        array[i] = array[ i + 1];
    }
    for ( i = 0; i<10 ; i++){
        
        cout<<array[i]<<" ";
    }


    return 0;

}