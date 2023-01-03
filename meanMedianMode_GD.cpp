/*
I use "if else" nested since the variables inside the "if" is dependent to another "if" variable declaration;
after the user enters 'y', the "if" blocks of code will be executed, which means it will ask for more class value.
Otherwise, if the user enter any key other than 'y', then the "else" blocks of code will be executed, and that is the
mean_median_mode.
*/
#include <iostream>
using namespace std;


int main() {
    cout << "This is a program that solves for the value of mean_median_mode of grouped data;\n";
    cout << "with the minimum of 2 class value up to 7 maximum class value.\n";

    float low_class_set_a;
    float high_class_set_a;
    float frequency_a;
    float x_a;
    float fx_a;
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
    float cf_a = frequency_a;
    float cf_2_a = 0;
    cf_a += cf_2_a;
    cout << "cf = " << cf_a << endl;    

    float low_class_set_b;
    float high_class_set_b;
    float frequency_b;
    float x_b;
    float fx_b;
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
    float cf_b = frequency_b;
    cf_b += cf_a;
    cout << "cf = " << cf_b << endl;
    cout << "\npress 'y' to add classes\n";
    char option;
    cin >> option;

    //if condition adds classe if the user presses the 'y' key.
    if(option == 'y'){  //BRACES FOR "IF" SET C 
        float low_class_set_c;
        float high_class_set_c;
        float frequency_c;
        float x_c;
        float fx_c;
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
        float cf_c = frequency_c;
        cf_c += cf_b;
        cout << "cf = " << cf_c << endl;
    cout << "\npress 'y' to add classes\n";
    char option;
    cin >> option;

        //this will add another classes if the user presses again the 'y'.
        if(option == 'y'){ //BRACES FOR "IF" SET D 
            float low_class_set_d;
            float high_class_set_d;
            float frequency_d;
            float x_d;
            float fx_d;
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
            float cf_d = frequency_d;
            cf_d += cf_c;
            cout << "cf = " << cf_d << endl;
        cout << "\npress 'y' to add classes\n";
        char option;
        cin >> option;

            //this will add another classes if the user presses again the 'y'.
            if(option == 'y'){ //BRACES FOR "IF" SET E
                float low_class_set_e;
                float high_class_set_e;
                float frequency_e;
                float x_e;
                float fx_e;
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
                float cf_e = frequency_e;
                cf_e += cf_d;
                cout << "cf = " << cf_e << endl;
            cout << "\npress 'y' to add classes\n";
            char option;
            cin >> option;

                if(option == 'y'){// BRACES OF "IF" SET F
                    float low_class_set_f;
                    float high_class_set_f;
                    float frequency_f;
                    float x_f;
                    float fx_f;
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
                    float cf_f = frequency_f;
                    cf_f += cf_e;
                    cout << "cf = " << cf_f << endl;
                cout << "\npress 'y' to add classes\n";
                char option;
                cin >> option;

                    if(option == 'y'){ // BRACES FOR "IF" SET G
                        float low_class_set_g;
                        float high_class_set_g;
                        float frequency_g;
                        float x_g;
                        float fx_g;
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
                        float cf_g = frequency_g;
                        cf_g += cf_f;
                        cout << "cf = " << cf_g << endl;

                        //For mean
                        float sum_of_frequencies = frequency_a + frequency_b + frequency_c + frequency_d + frequency_e + frequency_f + frequency_g;
                        cout << "\n\nn = " << sum_of_frequencies << endl;
                        float sum_of_fx = fx_a + fx_b + fx_c + fx_d + fx_e + fx_f + fx_g;
                        cout << "summation of fx = " << sum_of_fx << "\n\n";

                        float mean = sum_of_fx / sum_of_frequencies;
                        cout << "Mean = " << mean << endl;

                        //for median
                        float median_class = sum_of_frequencies / 2;

                        if(median_class <= cf_a){
                            float lmd = low_class_set_a - 0.5; // Lmd
                            float n_divide_2 = median_class; // this is n/2
                            float cf =cf_a; // this is the <cf
                            float fmd = frequency_a;// frequency of our median class or fmd
                            float i = high_class_set_a + 1 - low_class_set_a; // interval

                            float median = lmd + (((n_divide_2 - cf) / fmd) * i);
                            cout << "Median = " << median << endl;
                        }  
                        else if(median_class <= cf_b && median_class > cf_a){
                            float lmd = low_class_set_b - 0.5; // Lmd
                            float n_divide_2 = median_class; // this is n/2
                            float cf =cf_a; // this is the <cf
                            float fmd = frequency_b;// frequency of our median class or fmd
                            float i = high_class_set_b + 1 - low_class_set_b; // interval

                            float median = lmd + (((n_divide_2 - cf) / fmd) * i);
                            cout << "Median = " << median << endl;
                        }
                        else if(median_class <= cf_c && median_class > cf_b){
                            float lmd = low_class_set_c - 0.5; // Lmd
                            float n_divide_2 = median_class; // this is n/2
                            float cf =cf_b; // this is the <cf
                            float fmd = frequency_c;// frequency of our median class or fmd
                            float i = high_class_set_c + 1 - low_class_set_c; // interval

                            float median = lmd + (((n_divide_2 - cf) / fmd) * i);
                            cout << "Median = " << median << endl;
                        }
                        else if(median_class <= cf_d && median_class > cf_c){
                            float lmd = low_class_set_d - 0.5; // Lmd
                            float n_divide_2 = median_class; // this is n/2
                            float cf =cf_c; // this is the <cf
                            float fmd = frequency_d;// frequency of our median class or fmd
                            float i = high_class_set_d + 1 - low_class_set_d; // interval

                            float median = lmd + (((n_divide_2 - cf) / fmd) * i);
                            cout << "Median = " << median << endl;
                        }
                        else if(median_class <= cf_e && median_class > cf_d){
                            float lmd = low_class_set_e - 0.5; // Lmd
                            float n_divide_2 = median_class; // this is n/2
                            float cf =cf_d; // this is the <cf
                            float fmd = frequency_e;// frequency of our median class or fmd
                            float i = high_class_set_e + 1 - low_class_set_e; // interval

                            float median = lmd + (((n_divide_2 - cf) / fmd) * i);
                            cout << "Median = " << median << endl;
                        }
                        else if(median_class <= cf_f && median_class > cf_e){
                            float lmd = low_class_set_f - 0.5; // Lmd
                            float n_divide_2 = median_class; // this is n/2
                            float cf =cf_e; // this is the <cf
                            float fmd = frequency_f;// frequency of our median class or fmd
                            float i = high_class_set_f + 1 - low_class_set_f; // interval

                            float median = lmd + (((n_divide_2 - cf) / fmd) * i);
                            cout << "Median = " << median << endl;
                        }
                        else if(median_class <= cf_g && median_class > cf_f){
                            float lmd = low_class_set_g - 0.5; // Lmd
                            float n_divide_2 = median_class; // this is n/2
                            float cf =cf_f; // this is the <cf
                            float fmd = frequency_g;// frequency of our median class or fmd
                            float i = high_class_set_g + 1 - low_class_set_g; // interval

                            float median = lmd + (((n_divide_2 - cf) / fmd) * i);
                            cout << "Median = " << median << endl;
                        }

                        // for mode
                        if(frequency_a > frequency_b && frequency_a > frequency_c && frequency_a > frequency_d && frequency_a > frequency_e && frequency_a > frequency_f && frequency_a > frequency_g){
                            float lmo = low_class_set_a - 0.5; // this is Lmo
                            float delta_one = frequency_a - 0;
                            float delta_two = frequency_a - frequency_b;
                            float i = high_class_set_a + 1 - low_class_set_a; // interval

                            float delta = delta_one + delta_two;
                            float mode = lmo + ((delta_one / delta) * i);
                            cout << "Mode = " << mode;
                        }
                        else if(frequency_b > frequency_a && frequency_b > frequency_c && frequency_b > frequency_d && frequency_b > frequency_e && frequency_b > frequency_f && frequency_b > frequency_g){
                            float lmo = low_class_set_b - 0.5; // this is Lmo
                            float delta_one = frequency_b - frequency_a;
                            float delta_two = frequency_b - frequency_c;
                            float i = high_class_set_a + 1 - low_class_set_a; // interval

                            float delta = delta_one + delta_two;
                            float mode = lmo + ((delta_one / delta) * i);
                            cout << "Mode = " << mode;
                        }
                        else if(frequency_c > frequency_a && frequency_c > frequency_b && frequency_c > frequency_d && frequency_c > frequency_e && frequency_c > frequency_f && frequency_c > frequency_g){
                            float lmo = low_class_set_c - 0.5; // this is Lmo
                            float delta_one = frequency_c - frequency_b;
                            float delta_two = frequency_c - frequency_d;
                            float i = high_class_set_a + 1 - low_class_set_a; // interval

                            float delta = delta_one + delta_two;
                            float mode = lmo + ((delta_one / delta) * i);
                            cout << "Mode = " << mode;
                        }
                        else if(frequency_d > frequency_a && frequency_d > frequency_b && frequency_d > frequency_c && frequency_d > frequency_e && frequency_d > frequency_f && frequency_d > frequency_g){
                            float lmo = low_class_set_d - 0.5; // this is Lmo
                            float delta_one = frequency_d - frequency_c;
                            float delta_two = frequency_d - frequency_e;
                            float i = high_class_set_a + 1 - low_class_set_a; // interval

                            float delta = delta_one + delta_two;
                            float mode = lmo + ((delta_one / delta) * i);
                            cout << "Mode = " << mode;
                        }
                        else if(frequency_e > frequency_a && frequency_e > frequency_b && frequency_e > frequency_c && frequency_e > frequency_d && frequency_e > frequency_f && frequency_e > frequency_g){
                            float lmo = low_class_set_e - 0.5; // this is Lmo
                            float delta_one = frequency_e - frequency_d;
                            float delta_two = frequency_e - frequency_f;
                            float i = high_class_set_a + 1 - low_class_set_a; // interval

                            float delta = delta_one + delta_two;
                            float mode = lmo + ((delta_one / delta) * i);
                            cout << "Mode = " << mode;
                        }
                        else if(frequency_f > frequency_a && frequency_f > frequency_b && frequency_f > frequency_c && frequency_f > frequency_d && frequency_f > frequency_e && frequency_f > frequency_g){
                            float lmo = low_class_set_f - 0.5; // this is Lmo
                            float delta_one = frequency_f - frequency_e;
                            float delta_two = frequency_f - frequency_g;
                            float i = high_class_set_a + 1 - low_class_set_a; // interval

                            float delta = delta_one + delta_two;
                            float mode = lmo + ((delta_one / delta) * i);
                            cout << "Mode = " << mode;
                        }
                        else if(frequency_g > frequency_a && frequency_g > frequency_b && frequency_g > frequency_c && frequency_g > frequency_d && frequency_g > frequency_e && frequency_g > frequency_f){
                            float lmo = low_class_set_g - 0.5; // this is Lmo
                            float delta_one = frequency_g - frequency_f;
                            float delta_two = frequency_g - 0;
                            float i = high_class_set_a + 1 - low_class_set_a; // interval

                            float delta = delta_one + delta_two;
                            float mode = lmo + ((delta_one / delta) * i);
                            cout << "Mode = " << mode;
                        }
                    }// BRACES FOR "IF" SET G

                    else{ // BRACES OF "ELSE" SET G [THAT WILL EXECUTE THE MEAN_MEDIAN_MODE OF SET F IF YOU PRESS ANY KEY OTHER THAN 'y' ON "IF" SET G]
                        //For mean
                        float sum_of_frequencies = frequency_a + frequency_b + frequency_c + frequency_d + frequency_e + frequency_f;
                        cout << "\n\nn = " << sum_of_frequencies << endl;
                        float sum_of_fx = fx_a + fx_b + fx_c + fx_d + fx_e + fx_f;
                        cout << "summation of fx = " << sum_of_fx << "\n\n";

                        float mean = sum_of_fx / sum_of_frequencies;
                        cout << "Mean = " << mean << endl;

                        //for median
                        float median_class = sum_of_frequencies / 2;

                        if(median_class <= cf_a){
                            float lmd = low_class_set_a - 0.5; // Lmd
                            float n_divide_2 = median_class; // this is n/2
                            float cf =cf_a; // this is the <cf
                            float fmd = frequency_a;// frequency of our median class or fmd
                            float i = high_class_set_a + 1 - low_class_set_a; // interval

                            float median = lmd + (((n_divide_2 - cf) / fmd) * i);
                            cout << "Median = " << median << endl;
                        }  
                        else if(median_class <= cf_b && median_class > cf_a){
                            float lmd = low_class_set_b - 0.5; // Lmd
                            float n_divide_2 = median_class; // this is n/2
                            float cf =cf_a; // this is the <cf
                            float fmd = frequency_b;// frequency of our median class or fmd
                            float i = high_class_set_b + 1 - low_class_set_b; // interval

                            float median = lmd + (((n_divide_2 - cf) / fmd) * i);
                            cout << "Median = " << median << endl;
                        }
                        else if(median_class <= cf_c && median_class > cf_b){
                            float lmd = low_class_set_c - 0.5; // Lmd
                            float n_divide_2 = median_class; // this is n/2
                            float cf =cf_b; // this is the <cf
                            float fmd = frequency_c;// frequency of our median class or fmd
                            float i = high_class_set_c + 1 - low_class_set_c; // interval

                            float median = lmd + (((n_divide_2 - cf) / fmd) * i);
                            cout << "Median = " << median << endl;
                        }
                        else if(median_class <= cf_d && median_class > cf_c){
                            float lmd = low_class_set_d - 0.5; // Lmd
                            float n_divide_2 = median_class; // this is n/2
                            float cf =cf_c; // this is the <cf
                            float fmd = frequency_d;// frequency of our median class or fmd
                            float i = high_class_set_d + 1 - low_class_set_d; // interval

                            float median = lmd + (((n_divide_2 - cf) / fmd) * i);
                            cout << "Median = " << median << endl;
                        }
                        else if(median_class <= cf_e && median_class > cf_d){
                            float lmd = low_class_set_e - 0.5; // Lmd
                            float n_divide_2 = median_class; // this is n/2
                            float cf =cf_d; // this is the <cf
                            float fmd = frequency_e;// frequency of our median class or fmd
                            float i = high_class_set_e + 1 - low_class_set_e; // interval

                            float median = lmd + (((n_divide_2 - cf) / fmd) * i);
                            cout << "Median = " << median << endl;
                        }
                        else if(median_class <= cf_f && median_class > cf_e){
                            float lmd = low_class_set_f - 0.5; // Lmd
                            float n_divide_2 = median_class; // this is n/2
                            float cf =cf_e; // this is the <cf
                            float fmd = frequency_f;// frequency of our median class or fmd
                            float i = high_class_set_f + 1 - low_class_set_f; // interval

                            float median = lmd + (((n_divide_2 - cf) / fmd) * i);
                            cout << "Median = " << median << endl;
                        }

                        // for mode
                        if(frequency_a > frequency_b && frequency_a > frequency_c && frequency_a > frequency_d && frequency_a > frequency_e && frequency_a > frequency_f){
                            float lmo = low_class_set_a - 0.5; // this is Lmo
                            float delta_one = frequency_a - 0;
                            float delta_two = frequency_a - frequency_b;
                            float i = high_class_set_a + 1 - low_class_set_a; // interval

                            float delta = delta_one + delta_two;
                            float mode = lmo + ((delta_one / delta) * i);
                            cout << "Mode = " << mode;
                        }
                        else if(frequency_b > frequency_a && frequency_b > frequency_c && frequency_b > frequency_d && frequency_b > frequency_e && frequency_b > frequency_f){
                            float lmo = low_class_set_b - 0.5; // this is Lmo
                            float delta_one = frequency_b - frequency_a;
                            float delta_two = frequency_b - frequency_c;
                            float i = high_class_set_a + 1 - low_class_set_a; // interval

                            float delta = delta_one + delta_two;
                            float mode = lmo + ((delta_one / delta) * i);
                            cout << "Mode = " << mode;
                        }
                        else if(frequency_c > frequency_a && frequency_c > frequency_b && frequency_c > frequency_d && frequency_c > frequency_e && frequency_c > frequency_f){
                            float lmo = low_class_set_c - 0.5; // this is Lmo
                            float delta_one = frequency_c - frequency_b;
                            float delta_two = frequency_c - frequency_d;
                            float i = high_class_set_a + 1 - low_class_set_a; // interval

                            float delta = delta_one + delta_two;
                            float mode = lmo + ((delta_one / delta) * i);
                            cout << "Mode = " << mode;
                        }
                        else if(frequency_d > frequency_a && frequency_d > frequency_b && frequency_d > frequency_c && frequency_d > frequency_e && frequency_d > frequency_f){
                            float lmo = low_class_set_d - 0.5; // this is Lmo
                            float delta_one = frequency_d - frequency_c;
                            float delta_two = frequency_d - frequency_e;
                            float i = high_class_set_a + 1 - low_class_set_a; // interval

                            float delta = delta_one + delta_two;
                            float mode = lmo + ((delta_one / delta) * i);
                            cout << "Mode = " << mode;
                        }
                        else if(frequency_e > frequency_a && frequency_e > frequency_b && frequency_e > frequency_c && frequency_e > frequency_d && frequency_e > frequency_f){
                            float lmo = low_class_set_e - 0.5; // this is Lmo
                            float delta_one = frequency_e - frequency_d;
                            float delta_two = frequency_e - frequency_f;
                            float i = high_class_set_a + 1 - low_class_set_a; // interval

                            float delta = delta_one + delta_two;
                            float mode = lmo + ((delta_one / delta) * i);
                            cout << "Mode = " << mode;
                        }
                        else if(frequency_f > frequency_a && frequency_f > frequency_b && frequency_f > frequency_c && frequency_f > frequency_d && frequency_f > frequency_e){
                            float lmo = low_class_set_f - 0.5; // this is Lmo
                            float delta_one = frequency_f - frequency_e;
                            float delta_two = frequency_f - 0;
                            float i = high_class_set_a + 1 - low_class_set_a; // interval

                            float delta = delta_one + delta_two;
                            float mode = lmo + ((delta_one / delta) * i);
                            cout << "Mode = " << mode;
                        } 
                    } // BRACES OF "ELSE" SET G [THAT WILL EXECUTE THE MEAN_MEDIAN_MODE OF SET F IF YOU PRESS ANY KEY OTHER THAN 'y' ON "IF" SET G]
                } // BRACES FOR "IF" SET F

                else{ // BRACES OF "ELSE" SET F [THAT WILL EXECUTE THE MEAN_MEDIAN_MODE OF SET E IF YOU PRESS ANY KEY OTHER THAN 'y' ON "IF" SET F]
                    //for mean
                    float sum_of_frequencies = frequency_a + frequency_b + frequency_c + frequency_d + frequency_e;
                    cout << "\n\nn = " << sum_of_frequencies << endl;
                    float sum_of_fx = fx_a + fx_b + fx_c + fx_d + fx_e;
                    cout << "summation of fx = " << sum_of_fx << "\n\n";

                    float mean = sum_of_fx / sum_of_frequencies;
                    cout << "Mean = " << mean << endl;

                    //for median
                    float median_class = sum_of_frequencies / 2;

                    if(median_class <= cf_a){
                        float lmd = low_class_set_a - 0.5; // Lmd
                        float n_divide_2 = median_class; // this is n/2
                        float cf =cf_a; // this is the <cf
                        float fmd = frequency_a;// frequency of our median class or fmd
                        float i = high_class_set_a + 1 - low_class_set_a; // interval

                        float median = lmd + (((n_divide_2 - cf) / fmd) * i);
                        cout << "Median = " << median << endl;
                    }  
                    else if(median_class <= cf_b && median_class > cf_a){
                        float lmd = low_class_set_b - 0.5; // Lmd
                        float n_divide_2 = median_class; // this is n/2
                        float cf =cf_a; // this is the <cf
                        float fmd = frequency_b;// frequency of our median class or fmd
                        float i = high_class_set_b + 1 - low_class_set_b; // interval

                        float median = lmd + (((n_divide_2 - cf) / fmd) * i);
                        cout << "Median = " << median << endl;
                    }
                    else if(median_class <= cf_c && median_class > cf_b){
                        float lmd = low_class_set_c - 0.5; // Lmd
                        float n_divide_2 = median_class; // this is n/2
                        float cf =cf_b; // this is the <cf
                        float fmd = frequency_c;// frequency of our median class or fmd
                        float i = high_class_set_c + 1 - low_class_set_c; // interval

                        float median = lmd + (((n_divide_2 - cf) / fmd) * i);
                        cout << "Median = " << median << endl;
                    }
                    else if(median_class <= cf_d && median_class > cf_c){
                        float lmd = low_class_set_d - 0.5; // Lmd
                        float n_divide_2 = median_class; // this is n/2
                        float cf =cf_c; // this is the <cf
                        float fmd = frequency_d;// frequency of our median class or fmd
                        float i = high_class_set_d + 1 - low_class_set_d; // interval

                        float median = lmd + (((n_divide_2 - cf) / fmd) * i);
                        cout << "Median = " << median << endl;
                    }
                    else if(median_class <= cf_e && median_class > cf_d){
                        float lmd = low_class_set_e - 0.5; // Lmd
                        float n_divide_2 = median_class; // this is n/2
                        float cf =cf_d; // this is the <cf
                        float fmd = frequency_e;// frequency of our median class or fmd
                        float i = high_class_set_e + 1 - low_class_set_e; // interval

                        float median = lmd + (((n_divide_2 - cf) / fmd) * i);
                        cout << "Median = " << median << endl;
                    }

                    // for mode
                    if(frequency_a > frequency_b && frequency_a > frequency_c && frequency_a > frequency_d && frequency_a > frequency_e){
                        float lmo = low_class_set_a - 0.5; // this is Lmo
                        float delta_one = frequency_a - 0;
                        float delta_two = frequency_a - frequency_b;
                        float i = high_class_set_a + 1 - low_class_set_a; // interval

                        float delta = delta_one + delta_two;
                        float mode = lmo + ((delta_one / delta) * i);
                        cout << "Mode = " << mode;
                    }
                    else if(frequency_b > frequency_a && frequency_b > frequency_c && frequency_b > frequency_d && frequency_b > frequency_e){
                        float lmo = low_class_set_b - 0.5; // this is Lmo
                        float delta_one = frequency_b - frequency_a;
                        float delta_two = frequency_b - frequency_c;
                        float i = high_class_set_a + 1 - low_class_set_a; // interval

                        float delta = delta_one + delta_two;
                        float mode = lmo + ((delta_one / delta) * i);
                        cout << "Mode = " << mode;
                    }
                    else if(frequency_c > frequency_a && frequency_c > frequency_b && frequency_c > frequency_d && frequency_c > frequency_e){
                        float lmo = low_class_set_c - 0.5; // this is Lmo
                        float delta_one = frequency_c - frequency_b;
                        float delta_two = frequency_c - frequency_d;
                        float i = high_class_set_a + 1 - low_class_set_a; // interval

                        float delta = delta_one + delta_two;
                        float mode = lmo + ((delta_one / delta) * i);
                        cout << "Mode = " << mode;
                    }
                    else if(frequency_d > frequency_a && frequency_d > frequency_b && frequency_d > frequency_c && frequency_d > frequency_e){
                        float lmo = low_class_set_d - 0.5; // this is Lmo
                        float delta_one = frequency_d - frequency_c;
                        float delta_two = frequency_d - frequency_e;
                        float i = high_class_set_a + 1 - low_class_set_a; // interval

                        float delta = delta_one + delta_two;
                        float mode = lmo + ((delta_one / delta) * i);
                        cout << "Mode = " << mode;
                    }
                    else if(frequency_e > frequency_a && frequency_e > frequency_b && frequency_e > frequency_c && frequency_e > frequency_d){
                        float lmo = low_class_set_e - 0.5; // this is Lmo
                        float delta_one = frequency_e - frequency_d;
                        float delta_two = frequency_e - 0;
                        float i = high_class_set_a + 1 - low_class_set_a; // interval

                        float delta = delta_one + delta_two;
                        float mode = lmo + ((delta_one / delta) * i);
                        cout << "Mode = " << mode;
                    }
                }// BRACES OF "ELSE" SET F [THAT WILL EXECUTE THE MEAN_MEDIAN_MODE OF SET E IF YOU PRESS ANY KEY OTHER THAN 'y' ON "IF" SET F]
            } //BRACES FOR "IF" SET E

            else{ // BRACES OF "ELSE" SET E [THAT WILL EXECUTE THE MEAN_MEDIAN_MODE OF SET D IF YOU PRESS ANY KEY OTHER THAN 'y' ON "IF" SET E]
                //For mean
                float sum_of_frequencies = frequency_a + frequency_b + frequency_c + frequency_d;
                cout << "\n\nn = " << sum_of_frequencies << endl;
                float sum_of_fx = fx_a + fx_b + fx_c + fx_d;
                cout << "summation of fx = " << sum_of_fx << "\n\n";

                float mean = sum_of_fx / sum_of_frequencies;
                cout << "Mean = " << mean << endl;

                //for median
                float median_class = sum_of_frequencies / 2;

                if(median_class <= cf_a){
                    float lmd = low_class_set_a - 0.5; // Lmd
                    float n_divide_2 = median_class; // this is n/2
                    float cf =cf_a; // this is the <cf
                    float fmd = frequency_a;// frequency of our median class or fmd
                    float i = high_class_set_a + 1 - low_class_set_a; // interval

                    float median = lmd + (((n_divide_2 - cf) / fmd) * i);
                    cout << "Median = " << median << endl;
                }  
                else if(median_class <= cf_b && median_class > cf_a){
                    float lmd = low_class_set_b - 0.5; // Lmd
                    float n_divide_2 = median_class; // this is n/2
                    float cf =cf_a; // this is the <cf
                    float fmd = frequency_b;// frequency of our median class or fmd
                    float i = high_class_set_b + 1 - low_class_set_b; // interval

                    float median = lmd + (((n_divide_2 - cf) / fmd) * i);
                    cout << "Median = " << median << endl;
                }
                else if(median_class <= cf_c && median_class > cf_b){
                    float lmd = low_class_set_c - 0.5; // Lmd
                    float n_divide_2 = median_class; // this is n/2
                    float cf =cf_b; // this is the <cf
                    float fmd = frequency_c;// frequency of our median class or fmd
                    float i = high_class_set_c + 1 - low_class_set_c; // interval

                    float median = lmd + (((n_divide_2 - cf) / fmd) * i);
                    cout << "Median = " << median << endl;
                }
                else if(median_class <= cf_d && median_class > cf_c){
                    float lmd = low_class_set_d - 0.5; // Lmd
                    float n_divide_2 = median_class; // this is n/2
                    float cf =cf_c; // this is the <cf
                    float fmd = frequency_d;// frequency of our median class or fmd
                    float i = high_class_set_d + 1 - low_class_set_d; // interval

                    float median = lmd + (((n_divide_2 - cf) / fmd) * i);
                    cout << "Median = " << median << endl;
                }

                // for mode
                if(frequency_a > frequency_b && frequency_a > frequency_c && frequency_a > frequency_d){
                    float lmo = low_class_set_a - 0.5; // this is Lmo
                    float delta_one = frequency_a - 0;
                    float delta_two = frequency_a - frequency_b;
                    float i = high_class_set_a + 1 - low_class_set_a; // interval

                    float delta = delta_one + delta_two;
                    float mode = lmo + ((delta_one / delta) * i);
                    cout << "Mode = " << mode;
                }
                else if(frequency_b > frequency_a && frequency_b > frequency_c && frequency_b > frequency_d){
                    float lmo = low_class_set_b - 0.5; // this is Lmo
                    float delta_one = frequency_b - frequency_a;
                    float delta_two = frequency_b - frequency_c;
                    float i = high_class_set_a + 1 - low_class_set_a; // interval

                    float delta = delta_one + delta_two;
                    float mode = lmo + ((delta_one / delta) * i);
                    cout << "Mode = " << mode;
                }
                else if(frequency_c > frequency_a && frequency_c > frequency_b && frequency_c > frequency_d){
                    float lmo = low_class_set_c - 0.5; // this is Lmo
                    float delta_one = frequency_c - frequency_b;
                    float delta_two = frequency_c - frequency_d;
                    float i = high_class_set_a + 1 - low_class_set_a; // interval

                    float delta = delta_one + delta_two;
                    float mode = lmo + ((delta_one / delta) * i);
                    cout << "Mode = " << mode;
                }
                else if(frequency_d > frequency_a && frequency_d > frequency_b && frequency_d > frequency_c){
                    float lmo = low_class_set_d - 0.5; // this is Lmo
                    float delta_one = frequency_d - frequency_c;
                    float delta_two = frequency_d - 0;
                    float i = high_class_set_a + 1 - low_class_set_a; // interval

                    float delta = delta_one + delta_two;
                    float mode = lmo + ((delta_one / delta) * i);
                    cout << "Mode = " << mode;
                }
            } // BRACES OF "ELSE" SET E [THAT WILL EXECUTE THE MEAN_MEDIAN_MODE OF SET D IF YOU PRESS ANY KEY OTHER THAN 'y' ON "IF" SET E]
        } //BRACES FOR "IF" SET D 
       
        //if they press any key, then this condition will evaluate the mean, median, and mode of the current class.
        else{ //BRACES FOR "ELSE" SET D [THAT WILL EXECUTE THE MEAN_MEDIAN_MODE OF SET C IF YOU PRESS ANY KEY OTHER THAN 'y' ON "IF" SET D.] 
            //For mean
            float sum_of_frequencies = frequency_a + frequency_b + frequency_c;
            cout << "\n\nn = " << sum_of_frequencies << endl;
            float sum_of_fx = fx_a + fx_b + fx_c;
            cout << "summation of fx = " << sum_of_fx << "\n\n";

            float mean = sum_of_fx / sum_of_frequencies;
            cout << "Mean = " << mean << endl;

            //for median
            float median_class = sum_of_frequencies / 2;

            if(median_class <= cf_a){
                float lmd = low_class_set_a - 0.5; // Lmd
                float n_divide_2 = median_class; // this is n/2
                float cf =cf_a; // this is the <cf
                float fmd = frequency_a;// frequency of our median class or fmd
                float i = high_class_set_a + 1 - low_class_set_a; // interval

                float median = lmd + (((n_divide_2 - cf) / fmd) * i);
                cout << "Median = " << median << endl;
            }  
            else if(median_class <= cf_b && median_class > cf_a){
                float lmd = low_class_set_b - 0.5; // Lmd
                float n_divide_2 = median_class; // this is n/2
                float cf =cf_a; // this is the <cf
                float fmd = frequency_b;// frequency of our median class or fmd
                float i = high_class_set_b + 1 - low_class_set_b; // interval

                float median = lmd + (((n_divide_2 - cf) / fmd) * i);
                cout << "Median = " << median << endl;
            }
            else if(median_class <= cf_c && median_class > cf_b){
                float lmd = low_class_set_c - 0.5; // Lmd
                float n_divide_2 = median_class; // this is n/2
                float cf =cf_b; // this is the <cf
                float fmd = frequency_c;// frequency of our median class or fmd
                float i = high_class_set_c + 1 - low_class_set_c; // interval

                float median = lmd + (((n_divide_2 - cf) / fmd) * i);
                cout << "Median = " << median << endl;
            }


            //For mode
            if(frequency_a > frequency_b && frequency_a > frequency_c){
                float lmo = low_class_set_a - 0.5; // this is Lmo
                float delta_one = frequency_a - 0;
                float delta_two = frequency_a - frequency_b;
                float i = high_class_set_a + 1 - low_class_set_a; // interval

                float delta = delta_one + delta_two;
                float mode = lmo + ((delta_one / delta) * i);
                cout << "Mode = " << mode;
            }
            else if(frequency_b > frequency_a && frequency_b > frequency_c){
                float lmo = low_class_set_b - 0.5; // this is Lmo
                float delta_one = frequency_b - frequency_a;
                float delta_two = frequency_b - frequency_c;
                float i = high_class_set_a + 1 - low_class_set_a; // interval

                float delta = delta_one + delta_two;
                float mode = lmo + ((delta_one / delta) * i);
                cout << "Mode = " << mode;
            }
            else if(frequency_c > frequency_a && frequency_c > frequency_b){
                float lmo = low_class_set_c - 0.5; // this is Lmo
                float delta_one = frequency_c - frequency_b;
                float delta_two = frequency_c - 0;
                float i = high_class_set_a + 1 - low_class_set_a; // interval

                float delta = delta_one + delta_two;
                float mode = lmo + ((delta_one / delta) * i);
                cout << "Mode = " << mode;
            }
        } //BRACES FOR "ELSE" SET D [THAT WILL EXECUTE THE MEAN_MEDIAN_MODE OF SET C IF YOU PRESS ANY KEY OTHER THAN 'y' ON SET D.] 
    }//BRACES FOR "IF" SET C 

    else{ //BRACES FOR "ELSE" SET C [THAT WILL EXECUTE THE MEAN_MEDIAN_MODE OF SET B IF YOU PRESS ANY KEY OTHER THAN 'y' ON SET C.]
        //For mean
        float sum_of_frequencies = frequency_a + frequency_b;
        cout << "\n\nn = " << sum_of_frequencies << endl;
        float sum_of_fx = fx_a + fx_b;
        cout << "summation of fx = " << sum_of_fx << "\n\n";

        float mean = sum_of_fx / sum_of_frequencies;
        cout << "Mean = " << mean << endl;

        //for median
        float median_class = sum_of_frequencies / 2;

        if(median_class <= cf_a){
            float lmd = low_class_set_a - 0.5; // Lmd
            float n_divide_2 = median_class; // this is n/2
            float cf =cf_a; // this is the <cf
            float fmd = frequency_a;// frequency of our median class or fmd
            float i = high_class_set_a + 1 - low_class_set_a; // interval

            float median = lmd + (((n_divide_2 - cf) / fmd) * i);
            cout << "Median = " << median << endl;
        }  
        else if(median_class <= cf_b && median_class > cf_a){
            float lmd = low_class_set_b - 0.5; // Lmd
            float n_divide_2 = median_class; // this is n/2
            float cf =cf_a; // this is the <cf
            float fmd = frequency_b;// frequency of our median class or fmd
            float i = high_class_set_b + 1 - low_class_set_b; // interval

            float median = lmd + (((n_divide_2 - cf) / fmd) * i);
            cout << "Median = " << median << endl;
        }

        // for mode
        if(frequency_a > frequency_b){
            float lmo = low_class_set_a - 0.5; // this is Lmo
            float delta_one = frequency_a - 0;
            float delta_two = frequency_a - frequency_b;
            float i = high_class_set_a + 1 - low_class_set_a; // interval

            float delta = delta_one + delta_two;
            float mode = lmo + ((delta_one / delta) * i);
            cout << "Mode = " << mode;
        }
        else if(frequency_b > frequency_a){
            float lmo = low_class_set_b - 0.5; // this is Lmo
            float delta_one = frequency_b - frequency_a;
            float delta_two = frequency_b - 0;
            float i = high_class_set_a + 1 - low_class_set_a; // interval

            float delta = delta_one + delta_two;
            float mode = lmo + ((delta_one / delta) * i);
            cout << "Mode = " << mode;
        }
    } //BRACES FOR "ELSE" SET C [THAT WILL EXECUTE THE MEAN_MEDIAN_MODE OF SET B IF YOU PRESS ANY KEY OTHER THAN 'y' ON SET C.]

    return 0;
}
