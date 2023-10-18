#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<5;i++){
        int sum=0;
        for(int j=0;j<5;j++){
            sum+=arr[i][j];
        }
        cout<<"total marks of student "<<i+1<<":"<<sum<<endl;
        cout<<"average marks of student "<<i+1<<":"<<sum/5<<endl;
    }

}