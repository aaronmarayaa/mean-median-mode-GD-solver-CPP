# Mean, Median, Mode solver

 This is a solver that allows users to input data, and the computer will compute the ***mean, median, and mode*** of ***grouped data*** using a specific formula.

First, it will ask how much data you're about to input:
 ```cpp
    int number_of_class;
    cout << "How many classes? ";
    cin >> number_of_class;
 ```
 $~$
 
Next, it will ask for input such as `low class`, `high class`, and `frequency`; then it will solve for the `x`, `fx`, and `cf`, which is the summation of `frequency` values.

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
After this loop statement gets the data. It will now solve for the ***mean, median,*** and ***mode*** values.

First, it will solve for the ***mean*** value. The mean formula for grouped data is:

$$
\bar{x} = \frac{\sum fx}{n}
$$

>The `mean` variable represents $\bar{x}$ ,<br/>
 `sum_of_fx` variable represents ${\sum fx}$ ,<br/>
 `sum_of_frequency` variable represents $n$

$~$

The `for_mean()` function has a parameter of `frequency[]`, which foreshadows the `array_for_frequency[]` variable; `fx[]`, which foreshadows the `array_for_fx[]` variable; and `number_of_class`, which foreshadows the `number_of_class` variable inside the `main()` function.
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

The first statement inside the function is a loop statement, which takes the `sum_of_frequency` and the `sum_of_fx`.
```cpp
float sum_of_frequency = 0;
float sum_of_fx = 0;
    for(int i = 0; i < number_of_class; i++){
        sum_of_frequency += frequency[i];
        sum_of_fx += fx[i];
    }
```

$~$

Then the `sum_of_frequency` will be printed as _n_, and the `sum_of_fx` will be printed as a _summation of fx_:
```cpp
    cout << "\nn = " << sum_of_frequency << endl;
    cout << "summation of fx = " << sum_of_fx << endl;
```

$~$

Finally, we will divide `sum_of_fx` to `sum_of_frequency` to get the value of `mean`; then it will print the value of `mean`:
```cpp
    float mean = sum_of_fx / sum_of_frequency;
    cout << "\nMean = " << mean << endl;
```

$~$
***
Next is the value of the ***median***, the formula for the ***median*** is:

$$
\tilde{x} = lmd + (\frac{\frac{n}{2} - < cf}{fmd})i
$$

>The `median` variable represents  $\tilde{x}$ , <br/>
 `lmd` variable represents  $Lmd$ , <br/>
 `n_divide_2` variable represents  $\frac{n}{2}$ , <br/>
 `cf[i - 1]` variable represents  $< cf$ , <br/>
 `fmd` variable represents  $fmd$ , <br/>
 `interval` variable represents  $i$ .

$~$

This `for_median()` function solves for the mean value, which has the parameters `low-class[]` which foreshadows the `array_for_low_class[]` variable; `high_class[]` which foreshadows the `array_for_high_class[]` variable; `frequency[]` which foreshadows the `array_for_frequency[]` variable; `number_of_class` which foreshadows the `number_of_class` variable, `cf[]` which foreshadows the `array_for_cf[]` variable inside the `main` function:
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

The code block below loops through the number of class(es) input by the user, which takes the sum of `frequency[]` values, and assigns it to the `sum_of_frequency` variable. Then it will be divided by _2_ and assigned as the value of the `n_divide_2` variable.
```cpp
float sum_of_frequency = 0;
    float n_divide_2;
        for(int j = 0; j < number_of_class; j++){
            sum_of_frequency += frequency[j];
        }

    n_divide_2 = sum_of_frequency / 2; 
```
>Note that the `n_divide_2` is the basis of what range in the `cf[]` the value of `n_divide_2` fits; if the `n_divide_2` is less than or equal to the value of `cf[]`, the class that corresponds with that `cf[]` will be the median class.

***example:***

`n_divide_2` = **18.5**
|class|cf |
| --- |---|
|16-22|16 |
|23-29|26 |

Median class = **23-29** <br/>
$< cf$ = **16**
>The **18.5** value of `n_divide_2` is within the scope of `cf` value, which is 26.

$~$

This block of code has two versions; the first version checks if the `n_divide_2` is less than or equal to the first value of the `cf[0]` or the first value of the array specifically; then the code will take the first element of `low_class[]`, `high_class[]`, `cf[]`, and `frequency[]`, then solve for the ***median***:
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
>This code uses `cf[0]` as the value of $< cf$ because there is no less than value than the first value.

but if `n_divide_2` is not within the scope of the first value of `cf[]`, the second version will be executed.

$~$
Since $< cf$ is the value of less than the median class' `cf[]`, the second version on getting the value of median uses `cf[i - 1]`:
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
>There's also a `cf[-1] = cf[0]` declaration in the code block, which means if the loop is about to take the less than of the first element in the array (`cf[i - 1]`), the `cf[-1]` (because cf[0 - 1]) is initialized as the first element in the array (`cf[-1] = cf[0];`); so that the 'cf[-1]` would not be a garbage value. 

$~$

***
After getting the ***mean*** and ***median*** values; the program will now solve for the ***mode*** value.
But first, the program will get the modal class of data:

The `modal_class` function has two parameters; `frequency[]` which foreshadows the `array_for_frequency[]` variable, and `number_of_class`, which foreshadows the `number_of_class` variable inside the `main()` function.
```cpp
int modal_class(float frequency[], int number_of_class){
    int max = 0;
    for(int i = 0; i < number_of_class; i++){
            if(max < frequency[i]){
                max = frequency[i];
            }
    }
    return max;
}
```
Its function is to take the maximum value in the array of `frequency[]` and assign it as the value of the `max` variable, then return `max`.

$~$

Finally, the ***mode*** value; ***mode*** formula is:

$$
\hat{x} = Lmo + [\frac{\Delta1}{\Delta1 + \Delta2}]i
$$

>The `mode` variable represents $\hat{x}$ , <br/>
`lmo` variable represents $Lmo$ , <br/>
`delta_one` variable represents $\Delta1$ , <br/>
`delta_two` variable represents $\Delta2$ , <br/>
`interval` variable represents $i$ .

$~$
This `for_mode()` function solves for the mode value; it has a `frequency[]` parameter that foreshadows the `array_for_frequency[]` variable; a `number_of_class` parameter that foreshadows the `number_of_class`, `low_class` parameter that foreshadows the `array_for_low_class`, and a `high_class` parameter that foreshadows the `array_for_high_class` in the `main()` function.
```cpp
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
```
Inside the function, variables have been declared to easily recognize every value.
```cpp
    float lmo;
    float delta_one;
    float delta_two;
    float interval;
    float delta;
    float mode;
```
$~$
The program will loop to get the values of `delta_one`, `delta_two`, `lmo`, and `interval`.
```cpp
    for(int i = 0; i < number_of_class; i++){
        lmo = low_class[i] - 0.5;
        delta_one = frequency[i] - frequency[i - 1];
        delta_two = frequency[i] - frequency[i + 1];
        interval = high_class[i] + 1 - low_class[i];
    }
```
$~$
Then the program uses an `if` statement to check if the highest value solved by the `modal_class()` function is equal to the current value of `frequency[]` while looping,
```cpp
    if(modal_class(frequency, number_of_class) == frequency[i]){
                delta = delta_one + delta_two;
                mode = lmo + ((delta_one / delta) * interval);
    }
```
if so, then solve for the ***mode*** value, and print it.
```cpp
    cout << "Mode = " << mode << endl;
```

***
Lastly, to make these functions execute, they were called inside the `main()` function.
```cpp
    for_mean(array_for_frequency, array_for_fx, number_of_class);
    for_median(array_for_low_class, array_for_high_class, array_for_frequency, number_of_class, array_for_cf);
    for_mode(array_for_frequency, number_of_class, array_for_low_class, array_for_high_class);
```
