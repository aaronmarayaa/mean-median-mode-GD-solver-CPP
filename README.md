# Mean, Median, Mode solver

 This is a solver that allow users to input data, and the computer will compute the value of ***mean, median, and mode*** of ***grouped data*** using a specific formula.

First it will ask how many data(s) you're about to input:
 ```cpp
    int number_of_class;
    cout << "How many classes? ";
    cin >> number_of_class;
 ```
 $~$
 
Next, it will ask for the user to input such as `low class`, `high class`, and `frequency`; then it will solve for the `x`(which has the formula `array_for_x[i] = (array_for_low_class[i] + array_for_high_class[i])/2;`; and `fx` that has the formula ` array_for_fx[i] = array_for_x[i] * array_for_frequency[i];`, then solve for the `cf` which is the summation of `frequency` values(` array_for_cf[i] = array_for_cf[i-1] + array_frequency[i];`).

 ```C++
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
```
$~$
***
After loop this loop statement get the datas. It will now solve for the ***mean, median, mode*** value.

first it will solve for the ***mean*** value. The mean formula of grouped data is:

$$
\bar{x} = \frac{\sum fx}{n}
$$
>The _`mean` variable_ represents the ***$\bar{x}$*** ,<br/>
the _`sum_of_fx` variable_ represents the ***${\sum fx}$*** ,<br/>
the `sum_of_frequency` variable represents the ***$n$***

$~$

The `for_mean()` function has a parameter of `frequency[]` which foreshadows `array_for_frequency[]` variable; `fx[]` which foreshadows `array_for_fx[]` variable; and `number_of_class` which foreshadows `number_of_class` variable inside the `main()` function.
```cpp
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
```

$~$

The first statement inside the function is a loop statement which takes the `sum_of_frequency` and the `sum_of_fx`.
```cpp
float sum_of_frequency = 0;
float sum_of_fx = 0;
    for(int i = 0; i < number_of_class; i++){
        sum_of_frequency += frequency[i];
        sum_of_fx += fx[i];
    }
```

$~$

Then the `sum_of_frequency` will be printed as _n_; and the `sum_of_fx` will be printed as _summation of fx_:
```cpp
    cout << "\nn = " << sum_of_frequency << endl;
    cout << "summation of fx = " << sum_of_fx << endl;
```

$~$

Finally, we will divide `sum_of_fx` to `sum_of_frequency` to get the value of `mean`; then it will print the value of `mean`;
```cpp
    float mean = sum_of_fx / sum_of_frequency;
    cout << "\nMean = " << mean << endl;
```

$~$
***
Next is the value of ***median***, the formula for median is:

$$
\tilde{x} = Lmd + (\frac{\frac{n}{2} - <cf}{fmd})i
$$

>The _`median`_ variable represents the ***$\tilde{x}$*** , <br/>
the _`lmd`_ variable represents the ***$Lmd$*** , <br/>
the _`n_divide_2`_ variable represets the ***$\frac{n}{2}$*** , <br/>
the _`cf[i - 1]`_ variable represents the ***$<cf$*** , <br/>
the _`fmd`_ variable represents the ***$fmd$*** , <br/>
the _`interval`_ variable represents the ***$i$*** .

$~$

This `for_median()` function solve for the mean value which has the parameter of `low-class[]` which foreshadows the `array_for_low_class[]` variable; `high_class[]` which foreshadows the `array_for_high_class[]` variable; `frequency[]` which foreshadows the `array_for_frequency[]` variable; `number_of_class` which foreshadows the `number_of_class` variable, `cf[]` which foreshadows the `array_for_cf[]` variable inside the `main` function;
```cpp
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
```
$~$

The code block below loops through the number of class(es) input by the user, which takes the sum of `frequency[]` values and assign it to `sum_of_frequency` variable. Then it will be divided by _2_ and assigned as the value of `n_divide_2` variable.
```cpp
float sum_of_frequency = 0;
    float n_divide_2;
        for(int j = 0; j < number_of_class; j++){
            sum_of_frequency += frequency[j];
        }

    n_divide_2 = sum_of_frequency / 2; 
```
>Note that the `n_divide_2` is the standard of what range in the `cf[]` does the value of `n_divide_2` fits; if the `n_divide_2` is less than or equal to the value of `cf[]`; the class that corresponds with that `cf[]` will be the median class.

***example:***

`n_divide_2` = **18.5**
|class|cf |
| --- |---|
|16-22|16 |
|23-29|26 |

Median class = **23-29**
$<cf$ = **16**
>The **18.5** value of `n_divide_2` is within the scope of `cf` value, which is 26.

$~$

This block of code has two version; the first version check if the `n_divide_2` is less than or equal to the first value of the `cf[0]` or the first value of the array specifically; then the code will take all the first element in `low_class[]`, `high_class[]`, `cf[]`, and `frequency` array, then solve for the ***median***:
```cpp
float median = 0;
        //if n_divide_2 is less than the cf of the first class; then execute the body
        if(n_divide_2 <= cf[0]){ 
            float lmd = low_class[0] - 0.5;
            cf[0];
            float fmd = frequency[0];
            float interval = high_class[0] + 1 - low_class[0];

            median = (((n_divide_2 - cf[0]) / fmd) * interval);
        }
```
>This code uses `cf[0]` as the value of $<cf$ because there is no less than value other than the first value.

but if the `n_divide_2` is not within the scope of the first value of `cf[]` the second version will be executed.

$~$
Since the $<cf$ is the value of less than the median class' `cf[]`, the second version on getting the value of median use `cf[i - 1]`:
```cpp
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
```

