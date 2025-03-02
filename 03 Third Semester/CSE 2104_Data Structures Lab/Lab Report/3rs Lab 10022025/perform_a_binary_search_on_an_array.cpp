#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number : " ;
    cin >> n ;
    
    int Data[n];
    cout << "Enter the Array Elements : " ;
    for(int i=0; i<n ; i++){
        cin >> Data[i] ;
    }
    
    int beg=0;
    int End=n-1;
    int mid=int((beg+End)/2);
    
    int item,loc;
    cout << "Enter number you want to search : " ;
    cin >> item ;
    
    while(beg<=End && Data[mid]!=item){
        if(item<Data[mid]){
            End = mid-1;
        }
        else{
            beg = mid+1;
        }
        mid = int((beg+End)/2);
    }
    
    if(Data[mid]==item) loc=mid;
    else loc = -1 ;
    
    cout << "location is :" << loc ;

    return 0;
}