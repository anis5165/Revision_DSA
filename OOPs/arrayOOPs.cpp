#include <iostream>
#include <string>
using namespace std;

// Class declaration
class MyArray {
private:
    int arr[5]; // Array as class member
public:
    // Constructor to initialize the array
    MyArray() {
        for (int i = 0; i < 5; ++i) {
            arr[i] = 0; // Default initialization
        }
    }
    // Method to set values
    void setValues(const int values[]) {
        for (int i = 0; i < 5; ++i) {
            arr[i] = values[i];
        }
    }

    // Method to display values
    void displayValues() const {
        cout << "Array elements: ";
        for (int i = 0; i < 5; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    MyArray myArray;

    // Initialize array
    int values[] = {1, 2, 3, 4, 5};
    myArray.setValues(values);

    // Display array values
    myArray.displayValues();

    return 0;
}
