
#include <iostream>
using namespace std;

class myMath{
  
  public :
    double low_class;
    double high_class;
    double frequency;
    double x;
    double fx;
    double cf_a;
   double cf_b;
   double cf_sum;

  myMath(double low_aclass, double high_aclass, double afrequency, double ax, double afx){
      low_class = low_aclass;
      high_class = high_aclass;
      frequency = afrequency;
      x = ax;
      fx = afx;
    }

  void math_func(){
    cout << "\nEnter low class value: ";
    cin>> low_class;
    cout << "Enter high class value: ";
    cin>> high_class;
    cout << low_class << " - " << high_class << endl;
    cout << "Enter frequency: \n";
    frequency = 0;
    cin >> frequency;
    x = (low_class + high_class)/2;
    cout << "x = " << x << "\n";
    fx = x * frequency;
    cout << "fx = " << fx << endl;
  }

   void for_cf(double* cf_a, double cf_b){
    (*cf_a) = frequency;
    (*cf_a) = (*cf_a) + cf_b;
}

};


int main() {
  double low_setA;
  double high_setA;
  double frequency_A;
  double x_A;
  double fx_A;
myMath setA = myMath(low_setA, high_setA, frequency_A, x_A, fx_A);
  setA.math_func();
  double cf_1_setA = frequency_A;
  double cf_2_setA = 0;
 double* address_of_cfA = &cf_1_setA;
 double value_of_cfA = *address_of_cfA;
 setA.for_cf(address_of_cfA, cf_2_setA);
 cout << "cf = " << cf_1_setA << endl;


  double low_setB;
  double high_setB;
  double frequency_B;
  double x_B;
  double fx_B;
myMath setB = myMath(low_setB, high_setB, frequency_B, x_B, fx_B);
  setB.math_func();
  double cf_1_setB = frequency_B;
  double cf_2_setB = cf_1_setA;
 double* address_of_cfB = &cf_1_setB;
 double value_of_cfB = *address_of_cfB;
 setB.for_cf(address_of_cfB, cf_2_setB);
cout << "cf = " << cf_1_setB << endl;

  double low_setC;
  double high_setC;
  double frequency_C;
  double x_C;
  double fx_C;
myMath setC = myMath(low_setC, high_setC, frequency_C, x_C, fx_C);
  setC.math_func();
  double cf_1_setC = frequency_C;
  double cf_2_setC = cf_1_setB;
 double* address_of_cfC = &cf_1_setC;
 double value_of_cfC = *address_of_cfC;
 setC.for_cf(address_of_cfC, cf_2_setC);
cout << "cf = " << cf_1_setC << endl;

  double low_setD;
  double high_setD;
  double frequency_D;
  double x_D;
  double fx_D;
myMath setD = myMath(low_setD, high_setD, frequency_D, x_D, fx_D);
  setD.math_func();
  double cf_1_setD = frequency_D;
  double cf_2_setD = cf_1_setC;
 double* address_of_cfD = &cf_1_setD;
 double value_of_cfD = *address_of_cfD;
 setD.for_cf(address_of_cfD, cf_2_setD);
cout << "cf = " << cf_1_setD << endl;

  double low_setE;
  double high_setE;
  double frequency_E;
  double x_E;
  double fx_E;
myMath setE = myMath(low_setE, high_setE, frequency_E, x_E, fx_E);
  setE.math_func();
  double cf_1_setE = frequency_E;
  double cf_2_setE = cf_1_setD;
 double* address_of_cfE = &cf_1_setE;
 double value_of_cfE = *address_of_cfE;
 setE.for_cf(address_of_cfE, cf_2_setE);
cout << "cf = " << cf_1_setE << endl;

  double low_setF;
  double high_setF;
  double frequency_F;
  double x_F;
  double fx_F;
myMath setF = myMath(low_setF, high_setF, frequency_F, x_F, fx_F);
  setF.math_func();
  double cf_1_setF = frequency_F;
  double cf_2_setF = cf_1_setE;
 double* address_of_cfF = &cf_1_setF;
 double value_of_cfF = *address_of_cfD;
 setF.for_cf(address_of_cfF, cf_2_setF);
cout << "cf = " << cf_1_setF << endl;
  
  double low_setG;
  double high_setG;
  double frequency_G;
  double x_G;
  double fx_G;
myMath setG = myMath(low_setG, high_setG, frequency_G, x_G, fx_G);
  setG.math_func();
  double cf_1_setG = frequency_G;
  double cf_2_setG = cf_1_setF;
 double* address_of_cfG = &cf_1_setG; 
 double value_of_cfG = *address_of_cfG;
 setG.for_cf(address_of_cfG, cf_2_setG);
cout << "cf = " << cf_1_setG << endl;

//for summation of fx
return 0;
}