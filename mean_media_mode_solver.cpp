#include <iostream>
using namespace std;

void for_mean(float frequency[], float fx[], int number_of_class){
    float sum_of_frequency = 0;
    float sum_of_fx = 0;
    for(int i = 0; i < number_of_class; i++){
        sum_of_frequency += frequency[i];
        sum_of_fx += fx[i];
    }
    cout << "\nn = " << sum_of_frequency << endl;
    cout << "summation of fx = " << sum_of_fx << endl;

    float mean = sum_of_fx / sum_of_frequency;
    cout << "\nMean = " << mean << endl;

}    

void for_median(float low_class[], float high_class[], float frequency[], int number_of_class, float cf[]){
    float sum_of_frequency = 0;
    float n_divide_2;
        for(int j = 0; j < number_of_class; j++){ //This will add all the frequency value
            sum_of_frequency += frequency[j];
        }

    //This formula will determine which class is the median if it is under the scope of a certain cf
    n_divide_2 = sum_of_frequency / 2; 
    
    float median = 0;
        //if n_divide_2 is less than the cf of the first class; then execute the body
        if(n_divide_2 <= cf[0]){ 
            float lmd = low_class[0] - 0.5;
            cf[0];
            float fmd = frequency[0];
            float interval = high_class[0] + 1 - low_class[0];

            median = (((n_divide_2 - cf[0]) / fmd) * interval);
        }

    cf[-1] = cf[0];
    for(int i = 0; i < number_of_class; i++){
        //this if statements will determine which set of class we should get every value we put in our formula
        if(n_divide_2 > cf[i] && n_divide_2 <= cf[i + 1]){ 
            float lmd = low_class[i + 1] - 0.5; // this is lmd
            cf[i - 1]; // this is <cf
            float fmd = frequency[i + 1]; //this is fmd
            float interval = high_class[i] + 1 - low_class[i]; // this is the interval

            median = lmd + (((n_divide_2 - cf[i]) / fmd) * interval);
        }
    }
        cout << "Median = " << median << endl;
}

int modal_class(float frequency[], int number_of_class){
    int max = 0;
    for(int i = 0; i < number_of_class; i++){
            if(max < frequency[i]){
                max = frequency[i];
            }
    }
    return max;
}

void for_mode(float frequency[], int number_of_class, float low_class[], float high_class[]){
    float lmo;
    float delta_one;
    float delta_two;
    float interval;
    float delta;
    float mode;
    frequency[-1] = 0;
    for(int i = 0; i < number_of_class; i++){
    lmo = low_class[i] - 0.5;
    delta_one = frequency[i] - frequency[i - 1];
    delta_two = frequency[i] - frequency[i + 1];
    interval = high_class[i] + 1 - low_class[i];
        if(modal_class(frequency, number_of_class) == frequency[i]){
            delta = delta_one + delta_two;
            mode = lmo + ((delta_one / delta) * interval);
        }
    }
    cout << "Mode = " << mode << endl;
}

int main(){
    cout << "\nThis is a solver for mean, median, and mode value.\n";
    cout << "Placing the set of classes should be from LOWEST to HIGHEST.\n\n";
    int number_of_class;
    cout << "How many classes? ";
    cin >> number_of_class;
    float array_for_low_class[number_of_class];
    float array_for_high_class[number_of_class];
    float array_for_frequency[number_of_class];
    float array_for_x[number_of_class];
    float array_for_fx[number_of_class];
    float array_for_cf[number_of_class];
    array_for_cf[-1] = 0;
    for(int i = 0; i < number_of_class; i++){
        cout << "\nEnter low class value: ";
            cin >> array_for_low_class[i];

        cout << "Enter high class value: ";
            cin >> array_for_high_class[i];

        cout << array_for_low_class[i] << " - " << array_for_high_class[i] << endl;
        
        cout << "frequency: ";
            cin >> array_for_frequency[i];

        array_for_x[i] = (array_for_low_class[i] + array_for_high_class[i])/2;
        cout << "x = " << array_for_x[i] << endl;
        
        array_for_fx[i] = array_for_x[i] * array_for_frequency[i];
        cout << "fx = " << array_for_fx[i] << endl;

        array_for_cf[i] = array_for_cf[i-1] + array_for_frequency[i];
        cout << "cf = " << array_for_cf[i] << endl;
    }

    for_mean(array_for_frequency, array_for_fx, number_of_class);
    for_median(array_for_low_class, array_for_high_class, array_for_frequency, number_of_class, array_for_cf);
    for_mode(array_for_frequency, number_of_class, array_for_low_class, array_for_high_class);


    return 0;
}