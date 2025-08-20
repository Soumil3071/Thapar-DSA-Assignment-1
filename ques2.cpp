
#include <bits/stdc++.h>
using namespace std;

int n=7;
int arr[7]={9,8,7,3,21,5,3};
void del(int x){
    for (int i=x;i<n-1;i++){
        arr[i]=arr[i+1];
    }
   n--;
}
int main() {
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;){
            if(arr[i]==arr[j]){
                del(j);
            }
            else{
                j++;
            }
        }
    }
    cout<<"elements after removing duplicates are:-"<<endl;
    for (int a=0;a<n;a++){
        cout<<arr[a]<<endl;
    }
    
    return 0;
}