#include <iostream>
using namespace std;
int main(){
    int sub1,sub2,sub3;
    cout<<"Enter the marks of subject 1:";
    cin>>sub1;
    cout<<"Enter the marks of subject 2:";  
    cin>>sub2;
    cout<<"Enter the marks of subject 3:";
    cin>>sub3;
    float avg;
    avg=(sub1+sub2+sub3)/3;
    cout<<"The Average of 3 subjects is:"<<avg;
    return 0;
}