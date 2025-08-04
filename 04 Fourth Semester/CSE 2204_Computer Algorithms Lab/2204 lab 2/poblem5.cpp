#include<iostream>
using namespace std;

int main(){
    system("cls");

    int array[5];

    cout << "Enter the elements of array: ";
    for(int i=0; i<5 ; ++i){
        cin >> array[i];
    }

    int temp;
    for(int i=0; i<5 ; ++i){
        for (int j = 1; j<5; j++)
        {
            if (array[i]<array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }      
        }
    }
    cout << "The max element is  " << array[0];

    return 0;
}