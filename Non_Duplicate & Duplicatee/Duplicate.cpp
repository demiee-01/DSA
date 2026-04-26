#include <iostream>
using namespace std;

int main() {
    int Array[20];
    int i;
    int keysearch = 6666;
    bool found = false;

    Array[0] = 20;// this keysearch
    Array[1] = 44;
    Array[2] = 78;
    Array[3] = 12;
    Array[4] = 96;
    Array[5] = 37;
    Array[6] = 06;
    Array[7] = 18;
    Array[8] = 35;
    Array[9] = 10;
    Array[10] = 44;
    Array[11] = 69;
    Array[12] = 99;
    Array[13] = 30;
    Array[14] = 71;
    Array[15] = 73;
    Array[16] = 20; // this keysearch
    Array[17] = 03;
    Array[18] = 20;
    Array[19] = 88;
  
    cout<<"Found the keysearch of index: ";
    for( i = 0; i< 20; i++){
        if( Array[i] == keysearch){
            cout<< i <<" ";
            found = true;
        }
    }
    if(!found){
        cout<<"No found of keysearch";
    }

    return 0;
}



