#include<iostream>

using namespace std;

int main() {
    // Variable Declaration
    int a;

    // Get Input Value
    cout << "Enter the Number :";
    cin>>a;

    int counter = 1;
    //Do while Loop Block
    do {
        cout << "Execute Do While " << counter << " time" << endl;
        counter++;
    } while (counter <= a);

    
    return 0;
}
