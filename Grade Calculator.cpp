#include <iostream>
using namespace std;

int main() 
{
    int number;  
    cout<<"Enter the number of subjects: "<<endl;
    cin>>number; 

    int marks[number];  // Declaring an array to store the marks of each subject
    
    cout<<"Enter marks for "<<number<<" subjects:"<<endl; // Asking the user to enter marks for each subject
    for (int i=0; i<number; i++) 
	{
        cout<<"Mark for subject "<<(i + 1) << ": ";
        cin>>marks[i]; 
    }

    int sum=0;
    for(int i=0; i<number; i++) // Calculating the sum of all subject marks
	{
        sum+=marks[i];  
    }

    float average = static_cast<float>(sum) / number; // Calculating the percentage by dividing the sum by the number of subjects

    char grade; // Gicing grades according to marks entered by the user
    if (average >= 90) 
	{
        grade = 'A+';  
    } 
	else if (average >= 80) 
	{
        grade = 'A';  
    } 
	else if (average >= 70) 
	{
        grade = 'B';  
    } 
	else if (average >= 60) 
	{
        grade = 'C';  
    } 
	else 
	{
        grade = 'F';  
    }
    cout<<"\nPercentage: "<<average<<endl;
    cout<<"Grade: "<<grade<<endl;

    return 0;
}
