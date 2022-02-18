// Assignment 1: Problem 1
// BMI Calculator

 #include<iostream>
 #include<math.h>
 using namespace std;

int main() {

   float weight_pounds=0, weight_kg;
   float height_feet=0, inches=0;
   float height_metres=0;
   float Result_bmi=0;
   float foot, metres1=0;

   cout<<"****Program that calculate the user's body mass index BMI ******\n\n";
   cout<<"What is your weight in (lbs): \n"; cin>>weight_pounds; cout<<"\n";
   
   cout<<"What is your height? \n";
   cout<<"Feet: " ;cin>>height_feet; cout<<"\n";
   cout<<"Inches: ";cin>>inches; cout<<"\n";

    // Calculate with feet and inches the heigth in m2.
    // 1 foot have 12 inches
    // 1 metre have 3.28084 feet
      foot = inches / 12;
      height_feet = height_feet + foot;

      height_metres = height_feet / 3.28084 ; 

      weight_kg = weight_pounds / 2.20462; 
  
      Result_bmi = weight_kg / pow(height_metres, 2); 

      cout<<"Height (m) : "<<height_metres <<"\n"; 
      cout<<"Weight (kg): "<<weight_kg <<"\n"; 
      cout<<"BMI : "<<Result_bmi<<"\n"; 
      
    //Calculate with pounds the weight in kg.
    // 1kg have 2.20462 pounds.

    return 0;

}

 

   
