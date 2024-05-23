#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    

    if (n <= 0) {
        cout << "Number of elements should be greater than zero." << endl;
        return 1; 
    }
    
    int numbers[n];
    

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    

    cout << "Even numbers: ";
    bool foundEven = false; 
    for (int i = 0; i < n; i++) {
        if (numbers[i] % 2 == 0) {
            cout << numbers[i] << " ";
            foundEven = true;
        }
    }
    
    if (!foundEven) {
        cout << "None";
    }
    cout << endl;
    
    return 0; 
}
