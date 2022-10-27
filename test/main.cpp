#include <iostream>
#include <string>
#include <cctype>
#include <functional>
#include <algorithm>
#include <fstream>
#include<sstream>
#include <vector>
#include <windows.h>
using namespace std;


int main(){

// Bubble sort  0(n2)

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){

 cin >>arr[i];
}
for(int i=0;i<n-1;i++){
for(int j=0;j<n-1;j++){
   if(arr[j]>arr[j+1]){
    int temp=arr[j+1];
    arr[j+1]=arr[j];
    arr[j]=temp;
   }

}
}
for(int i=0;i<n;i++){

 cout<<arr[i]<<" ";
}
return 0;
};












