#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int n,count = 0;
    string arr;
    cin >> n;
    for(int i = 1 ; i <= n ; i++){
        cin >> arr[i];
     }
    
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == arr[i+1]){
            count++;
        }
    }
   
     cout<<count<<endl;
    
   return 0;
}