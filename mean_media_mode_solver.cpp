#include <iostream>
using namespace std;

int main(){
    int num_of_class;
    cout << "How many classes? ";
    cin >> num_of_class;
    float arr_low[num_of_class];
    float arr_high[num_of_class];
    float arr_frequency[num_of_class];
    float arr_for_x[num_of_class];
    float arr_for_fx[num_of_class];
    for(int i = 0; i < num_of_class; i++){
        cout << "\nEnter low class value: ";
            cin >> arr_low[i];
        cout << "Enter high class value: ";
            cin >> arr_high[i];
        cout << arr_low[i] << " - " << arr_high[i] << endl;  
        cout << "frequency: ";
            cin >> arr_frequency[i];
        arr_for_x[i] = (arr_low[i] + arr_high[i])/2;
        cout << "x = " << arr_for_x[i] << endl;
        arr_for_fx[i] = arr_for_x[i] * arr_frequency[i];
        cout << "fx = " << arr_for_fx[i] << endl;

    }

    return 0;
}