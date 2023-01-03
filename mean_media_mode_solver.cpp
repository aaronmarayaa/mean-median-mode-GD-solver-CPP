#include <iostream>
using namespace std;

void for_mean(float frequency[], float fx[], int num_of_class){
    float sum_of_frequency;
    float sum_of_fx;
    for(int i = 0; i < num_of_class; i++){
        sum_of_frequency += frequency[i];
        sum_of_fx += fx[i];
    }
    cout << "\nn = " << sum_of_frequency << endl;
    cout << "summation of fx = " << sum_of_fx << endl;

    float mean = sum_of_fx / sum_of_frequency;
    cout << "\nMean = " << mean << endl;

}    


int main(){
    int num_of_class;
    cout << "How many classes? ";
    cin >> num_of_class;
    float arr_low[num_of_class];
    float arr_high[num_of_class];
    float arr_frequency[num_of_class];
    float arr_for_x[num_of_class];
    float arr_for_fx[num_of_class];
    float arr_for_cf_a[num_of_class];
    float arr_for_cf_b[num_of_class];
    arr_for_cf_a[-1] = 0;
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

        arr_for_cf_a[i] = arr_for_cf_a[i-1] + arr_frequency[i];
        cout << "cf = " << arr_for_cf_a[i] << endl;
    }

    for_mean(arr_frequency, arr_for_fx, num_of_class);

    return 0;
}