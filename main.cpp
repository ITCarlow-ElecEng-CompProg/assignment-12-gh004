//  Gearoid Hanrahan
//  Lab 12
//  Real to Imaginary

#include <iostream>
    //Defining Structures
    struct complexnumb
{
    float real;
    float imag;
};
    complexnumb add(complexnumb struct1, complexnumb struct2);
    complexnumb subtract(complexnumb struct1, complexnumb struct2);
    complexnumb multiply(complexnumb struct1, complexnumb struct2);
    complexnumb divide(complexnumb struct1, complexnumb struct2);


using namespace std;

int main()
{
    cout << "Complex Calculations" << endl;

    struct complexnumb complexentry1, complexentry2, sum, sub, mul, div;

    cout<<"Enter number for a real value:"<<endl;
    cin>>complexentry1.real;

    cout<<"Enter number for imaginary value:"<<endl;
    cin>>complexentry1.imag;

     cout<<"Enter another number for a real value:"<<endl;
    cin>>complexentry2.real;

    cout<<"Enter another number for imaginary value:"<<endl;
    cin>>complexentry2.imag;

    sum=add(complexentry1,complexentry2);
    sum=subtract(complexentry1,complexentry2);
    sum=multiply(complexentry1,complexentry2);
    sum=divide(complexentry1,complexentry2);

           //Displays the results to the ur=ser
        cout << "The sum of "<<complexentry1.real<< "+" << complexentry1.imag<< "j"<< " + "<<complexentry2.real<< "+" <<complexentry2.imag<< "j"<<
        " = " << sum.real << "+" << sum.imag << "j" << endl;

        cout << "The sum of "<<complexentry1.real<< "+" << complexentry1.imag<< "j"<< " - "<<complexentry2.real<< "+" <<complexentry2.imag<< "j"<<
        " = " << sub.real << "+" << sub.imag << "j" << endl;

        cout << "The sum of "<<complexentry1.real<< "+" <<complexentry1.imag<< "j"<< " x "<<complexentry2.real<< "+" <<complexentry2.imag<< "j"<<
        " = " << mul.real << "+" << mul.imag << "j" << endl;

        cout << "The sum of "<<complexentry1.real<< "+" <<complexentry1.imag<< "j"<< " / "<<complexentry2.real<< "+" <<complexentry2.imag<< "j"<<
        " = " << div.real << "+" << div.imag << "j" << endl;


    return 0;
}

//Function to add complex numbers
complexnumb add(complexnumb struct1, complexnumb struct2)
{

    struct complexnumb Sum;


    Sum.real = struct1.real + struct2.real;

    Sum.imag = struct1.imag + struct2.imag;

    return Sum;
}

//Function to subtract complex numbers
complexnumb subtract(complexnumb struct1, complexnumb struct2)
{

    struct complexnumb Sub;

    Sub.real = struct1.real - struct2.real;
    Sub.imag = struct1.imag - struct2.imag;

    return Sub;
}

//Function to multiply complex numbers
complexnumb multiply(complexnumb struct1, complexnumb struct2)
{

    struct complexnumb Mul;


    Mul.real = struct1.real*struct2.real - struct1.imag*struct2.imag;
    Mul.imag = struct1.imag*struct2.real + struct1.real*struct2.imag;

    return Mul;
}

//Function to divide complex numbers
complexnumb divide(complexnumb struct1, complexnumb struct2)
{

    struct complexnumb Div;

    float denominator;


    Div.real = struct1.real*struct2.real + struct1.imag*struct2.imag;
    Div.imag = struct1.imag*struct2.real - struct1.real*struct2.imag;
    denominator = struct2.real*struct2.real + struct2.imag*struct2.imag;
    Div.real = Div.real/denominator;
    Div.imag = Div.imag/denominator;

    return Div;
}
