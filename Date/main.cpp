#include<iostream>
#include<String>
using namespace std;
int main(){

    cout<<"Enter the following qualities:\n";
cout<<"1.Height\n";
cout<<"2.Colour\n";
cout<<"3.Age\n";
cout<<"4.weight\n";
int age,height, weight;
string colour;
cout<<"Enter your age:\n";
cin>>age;
cout<<age;
cout<<"Enter your height:\n";
cin>>height;
cout<<height;
cout<<"Enter your weight:\n";
cin>>weight;
cout<<weight;
cout<<"Enter your colour";
cin>>colour;
if(age>=18)
cout<<"My type\n";
else
cout<<"Not my type,sorry\n";
if(height<=6)
    cout<<"my type\n";
else
cout<<"Not my type,sorry\n";
if(colour=="Black")
cout<<"My type\n";
else
    cout<<"Not for me sorry girl";
return 0;
}
