#include <iostream>
using namespace std;

int main() {
    
    int Array[20];
    int i;
    int keysearch = 222;

    // for Arrays
    Array[0] = 20;
    Array[1] = 13;
    Array[2] = 55;
    Array[3] = 66;
    Array[4] = 23;
    Array[5] = 44;
    Array[6] = 78;
    Array[7] = 12;
    Array[8] = 67;
    Array[9] = 19;
    Array[10] = 77;
    Array[11] = 34;
    Array[12] = 78;
    Array[13] = 23;
    Array[14] = 98;
    Array[15] = 37;
    Array[16] = 61;
    Array[17] = 222;   // this is keysearch
    Array[18] = 62;
    Array[19] = 59;
   
    

    
    for( i = 0; i < 20; i++){
        if( Array[i] == keysearch){
            break;
        } 
    }
    
    if( i < 20 ){
        cout<<"The keysearch is in the index: "<< i <<endl;
    }else{
        cout<<"No keysearch";
    }

   
    return 0;
}

