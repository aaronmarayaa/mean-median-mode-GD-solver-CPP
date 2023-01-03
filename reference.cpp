#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    double low_class_set_a;
    double high_class_set_a;
    double frequency_a;
    double x_a;
    double fx_a;
    cout << "\nEnter low class value: ";
    cin>> low_class_set_a;
    cout << "Enter high class value: ";
    cin>> high_class_set_a;
    cout << low_class_set_a << " - " << high_class_set_a << endl;
    cout << "Enter frequency: \n";
    frequency_a = 0;
    cin >> frequency_a;
    x_a = (low_class_set_a + high_class_set_a)/2;
    cout << "x = " << x_a << "\n";
    fx_a = x_a * frequency_a;
    cout << "fx = " << fx_a << endl;
    double cf_a = frequency_a;
    double cf_2_a = 0;
    cf_a += cf_2_a;
    cout << "cf = " << cf_a << endl;    

    double low_class_set_b;
    double high_class_set_b;
    double frequency_b;
    double x_b;
    double fx_b;
    cout << "\nEnter low class value: ";
    cin>> low_class_set_b;
    cout << "Enter high class value: ";
    cin>> high_class_set_b;
    cout << low_class_set_b << " - " << high_class_set_b << endl;
    cout << "Enter frequency: \n";
    cin >> frequency_b;
    x_b = (low_class_set_b + high_class_set_b)/2;
    cout << "x = " << x_b << "\n";
    fx_b = x_b * frequency_b;
    cout << "fx = " << fx_b << endl;
    double cf_b = frequency_b;
    cf_b += cf_a;
    cout << "cf = " << cf_b << endl;

    double low_class_set_c;
    double high_class_set_c;
    double frequency_c;
    double x_c;
    double fx_c;
    cout << "\nEnter low class value: ";
    cin>> low_class_set_c;
    cout << "Enter high class value: ";
    cin>> high_class_set_c;
    cout << low_class_set_c << " - " << high_class_set_c << endl;
    cout << "Enter frequency: \n";
    frequency_c = 0;
    cin >> frequency_c;
    x_c = (low_class_set_c + high_class_set_c)/2;
    cout << "x = " << x_c << "\n";
    fx_c = x_c * frequency_c;
    cout << "fx = " << fx_c << endl;
    double cf_c = frequency_c;
    cf_c += cf_b;
    cout << "cf = " << cf_c << endl;

    double low_class_set_d;
    double high_class_set_d;
    double frequency_d;
    double x_d;
    double fx_d;
    cout << "\nEnter low class value: ";
    cin>> low_class_set_d;
    cout << "Enter high class value: ";
    cin>> high_class_set_d;
    cout << low_class_set_d << " - " << high_class_set_d << endl;
    cout << "Enter frequency: \n";
    frequency_d = 0;
    cin >> frequency_d;
    x_d = (low_class_set_d + high_class_set_d)/2;
    cout << "x = " << x_d << "\n";
    fx_d = x_d * frequency_d;
    cout << "fx = " << fx_d << endl;
    double cf_d = frequency_d;
    cf_d += cf_c;
    cout << "cf = " << cf_d << endl;

    double low_class_set_e;
    double high_class_set_e;
    double frequency_e;
    double x_e;
    double fx_e;
    cout << "\nEnter low class value: ";
    cin>> low_class_set_e;
    cout << "Enter high class value: ";
    cin>> high_class_set_e;
    cout << low_class_set_e << " - " << high_class_set_e << endl;
    cout << "Enter frequency: \n";
    frequency_e = 0;
    cin >> frequency_e;
    x_e = (low_class_set_e + high_class_set_e)/2;
    cout << "x = " << x_e << "\n";
    fx_e = x_e * frequency_e;
    cout << "fx = " << fx_e << endl;
    double cf_e = frequency_e;
    cf_e += cf_d;
    cout << "cf = " << cf_e << endl;

    double low_class_set_f;
    double high_class_set_f;
    double frequency_f;
    double x_f;
    double fx_f;
    cout << "\nEnter low class value: ";
    cin>> low_class_set_f;
    cout << "Enter high class value: ";
    cin>> high_class_set_f;
    cout << low_class_set_f << " - " << high_class_set_f << endl;
    cout << "Enter frequency: \n";
    frequency_f = 0;
    cin >> frequency_f;
    x_f = (low_class_set_f + high_class_set_f)/2;
    cout << "x = " << x_f << "\n";
    fx_f = x_f * frequency_f;
    cout << "fx = " << fx_f << endl;
    double cf_f = frequency_f;
    cf_f += cf_e;
    cout << "cf = " << cf_f << endl;

    double low_class_set_g;
    double high_class_set_g;
    double frequency_g;
    double x_g;
    double fx_g;
    cout << "\nEnter low class value: ";
    cin>> low_class_set_g;
    cout << "Enter high class value: ";
    cin>> high_class_set_g;
    cout << low_class_set_g << " - " << high_class_set_g << endl;
    cout << "Enter frequency: \n";
    frequency_g = 0;
    cin >> frequency_g;
    x_g = (low_class_set_g + high_class_set_g)/2;
    cout << "x = " << x_g << "\n";
    fx_g = x_g * frequency_g;
    cout << "fx = " << fx_g << endl;
    double cf_g = frequency_g;
    cf_g += cf_f;
    cout << "cf = " << cf_g << endl;

    //For mean
    double sum_of_frequencies = frequency_a + frequency_b + frequency_c + frequency_d +frequency_e + frequency_f + frequency_g;
    cout << "\n\nn = " << sum_of_frequencies << endl;
    double sum_of_fx = fx_a + fx_b + fx_c + fx_d + fx_e + fx_f + fx_g;
    cout << "summation of fx = " << sum_of_fx << "\n\n";

    double mean = sum_of_fx / sum_of_frequencies;
    cout << "Mean = " << mean << endl;

    //for median
    double median_class = sum_of_frequencies / 2;

    if(median_class <= cf_a){
        double lmd = low_class_set_a - 0.5; // Lmd
        double n_divide_2 = median_class; // this is n/2
        double cf =cf_a; // this is the <cf
        double fmd = frequency_a;// frequency of our median class or fmd
        double i = high_class_set_a + 1 - low_class_set_a; // interval

        double median = lmd + (((n_divide_2 - cf) / fmd) * i);
        cout << "Median = " << median << endl;
    }  
    else if(median_class <= cf_b && median_class > cf_a){
        double lmd = low_class_set_b - 0.5; // Lmd
        double n_divide_2 = median_class; // this is n/2
        double cf =cf_a; // this is the <cf
        double fmd = frequency_b;// frequency of our median class or fmd
        double i = high_class_set_b + 1 - low_class_set_b; // interval

        double median = lmd + (((n_divide_2 - cf) / fmd) * i);
        cout << "Median = " << median << endl;
    }
    else if(median_class <= cf_c && median_class > cf_b){
        double lmd = low_class_set_c - 0.5; // Lmd
        double n_divide_2 = median_class; // this is n/2
        double cf =cf_b; // this is the <cf
        double fmd = frequency_c;// frequency of our median class or fmd
        double i = high_class_set_c + 1 - low_class_set_c; // interval

        double median = lmd + (((n_divide_2 - cf) / fmd) * i);
        cout << "Median = " << median << endl;
    }
    else if(median_class <= cf_d && median_class > cf_c){
        double lmd = low_class_set_d - 0.5; // Lmd
        double n_divide_2 = median_class; // this is n/2
        double cf =cf_c; // this is the <cf
        double fmd = frequency_d;// frequency of our median class or fmd
        double i = high_class_set_d + 1 - low_class_set_d; // interval

        double median = lmd + (((n_divide_2 - cf) / fmd) * i);
        cout << "Median = " << median << endl;
    }
    else if(median_class <= cf_e && median_class > cf_d){
        double lmd = low_class_set_e - 0.5; // Lmd
        double n_divide_2 = median_class; // this is n/2
        double cf =cf_d; // this is the <cf
        double fmd = frequency_e;// frequency of our median class or fmd
        double i = high_class_set_e + 1 - low_class_set_e; // interval

        double median = lmd + (((n_divide_2 - cf) / fmd) * i);
        cout << "Median = " << median << endl;
    }
    else if(median_class <= cf_f && median_class > cf_e){
        double lmd = low_class_set_f - 0.5; // Lmd
        double n_divide_2 = median_class; // this is n/2
        double cf =cf_e; // this is the <cf
        double fmd = frequency_f;// frequency of our median class or fmd
        double i = high_class_set_f + 1 - low_class_set_f; // interval

        double median = lmd + (((n_divide_2 - cf) / fmd) * i);
        cout << "Median = " << median << endl;
    }
    else if(median_class <= cf_g && median_class > cf_f){
        double lmd = low_class_set_g - 0.5; // Lmd
        double n_divide_2 = median_class; // this is n/2
        double cf =cf_f; // this is the <cf
        double fmd = frequency_g;// frequency of our median class or fmd
        double i = high_class_set_g + 1 - low_class_set_g; // interval

        double median = lmd + (((n_divide_2 - cf) / fmd) * i);
        cout << "Median = " << median << endl;
    }

    // for mode
    if(frequency_a > frequency_b && frequency_a > frequency_c && frequency_a > frequency_d && frequency_a > frequency_e && frequency_a > frequency_f && frequency_a > frequency_g){
        double lmo = low_class_set_a - 0.5; // this is Lmo
        double delta_one = frequency_a - 0;
        double delta_two = frequency_a - frequency_b;
        double i = high_class_set_a + 1 - low_class_set_a; // interval

        double delta = delta_one + delta_two;
        double mode = lmo + ((delta_one / delta) * i);
        cout << "Mode = " << mode;
    }
    else if(frequency_b > frequency_a && frequency_b > frequency_c && frequency_b > frequency_d && frequency_b > frequency_e && frequency_b > frequency_f && frequency_b > frequency_g){
        double lmo = low_class_set_b - 0.5; // this is Lmo
        double delta_one = frequency_b - frequency_a;
        double delta_two = frequency_b - frequency_c;
        double i = high_class_set_a + 1 - low_class_set_a; // interval

        double delta = delta_one + delta_two;
        double mode = lmo + ((delta_one / delta) * i);
        cout << "Mode = " << mode;
    }
    else if(frequency_c > frequency_a && frequency_c > frequency_b && frequency_c > frequency_d && frequency_c > frequency_e && frequency_c > frequency_f && frequency_c > frequency_g){
        double lmo = low_class_set_c - 0.5; // this is Lmo
        double delta_one = frequency_c - frequency_b;
        double delta_two = frequency_c - frequency_d;
        double i = high_class_set_a + 1 - low_class_set_a; // interval

        double delta = delta_one + delta_two;
        double mode = lmo + ((delta_one / delta) * i);
        cout << "Mode = " << mode;
    }
    else if(frequency_d > frequency_a && frequency_d > frequency_b && frequency_d > frequency_c && frequency_d > frequency_e && frequency_d > frequency_f && frequency_d > frequency_g){
        double lmo = low_class_set_d - 0.5; // this is Lmo
        double delta_one = frequency_d - frequency_c;
        double delta_two = frequency_d - frequency_e;
        double i = high_class_set_a + 1 - low_class_set_a; // interval

        double delta = delta_one + delta_two;
        double mode = lmo + ((delta_one / delta) * i);
        cout << "Mode = " << mode;
    }
    else if(frequency_e > frequency_a && frequency_e > frequency_b && frequency_e > frequency_c && frequency_e > frequency_d && frequency_e > frequency_f && frequency_e > frequency_g){
        double lmo = low_class_set_e - 0.5; // this is Lmo
        double delta_one = frequency_e - frequency_d;
        double delta_two = frequency_e - frequency_f;
        double i = high_class_set_a + 1 - low_class_set_a; // interval

        double delta = delta_one + delta_two;
        double mode = lmo + ((delta_one / delta) * i);
        cout << "Mode = " << mode;
    }
    else if(frequency_f > frequency_a && frequency_f > frequency_b && frequency_f > frequency_c && frequency_f > frequency_d && frequency_f > frequency_e && frequency_f > frequency_g){
        double lmo = low_class_set_f - 0.5; // this is Lmo
        double delta_one = frequency_f - frequency_e;
        double delta_two = frequency_f - frequency_g;
        double i = high_class_set_a + 1 - low_class_set_a; // interval

        double delta = delta_one + delta_two;
        double mode = lmo + ((delta_one / delta) * i);
        cout << "Mode = " << mode;
    }
    else if(frequency_g > frequency_a && frequency_g > frequency_b && frequency_g > frequency_c && frequency_g > frequency_d && frequency_g > frequency_e && frequency_g > frequency_f){
        double lmo = low_class_set_g - 0.5; // this is Lmo
        double delta_one = frequency_g - frequency_f;
        double delta_two = frequency_g - 0;
        double i = high_class_set_a + 1 - low_class_set_a; // interval

        double delta = delta_one + delta_two;
        double mode = lmo + ((delta_one / delta) * i);
        cout << "Mode = " << mode;
    }



return 0;
}