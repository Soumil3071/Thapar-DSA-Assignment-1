
#include <bits/stdc++.h>
using namespace std;


int main() {
    int rows=3;
    int cols=3;
    int c=1;
    int rsum=0;
    int csum=0;

    int arr[rows][cols];
   cout<<"Original Matrix"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            arr[i][j]=c;
            c++;
        }
    }
    for(int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    cout<<"Sum of rows:-"<<endl;
    for(int i=0;i<rows;i++){
        rsum=0;
        for (int j=0;j<cols;j++){
            rsum+=arr[i][j];
        }
        cout<<rsum<<endl;
    }
    cout<<"Sum of columns:-"<<endl;
    for(int i=0;i<rows;i++){
        csum=0;
        for (int j=0;j<cols;j++){
            csum+=arr[j][i];
        }
        cout<<csum<<" ";
    }
    


}