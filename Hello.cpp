#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>

using namespace std;

void myGrade(int avg)
{ 
    if (avg >= 80 && avg <=100)
    cout << "You pass with distinction";
    else if (avg>= 65 && avg <80)
    cout<<"You pass with Good grade";
    else if (avg >= 50 && avg <65)
    cout<<"You pass";
    else cout << "Failed";

}

int main()
{
int sum =0;
int count;
cout << "How many marks are there \n";
cin >> count;

for(int i = 0; i < count; i++){
    int marks;
    cout << "Enter your mark/s \n";
    cin>> marks;
    if(marks<0||marks>100){
    cout << "Invalid mark. Please enter a mark between 0 and 100.\n";
    continue;
    }
    sum+=marks;
}

int avg = sum/count;

cout << "Your average is: " << avg << "\n"; 
myGrade(avg);


return 0;
}