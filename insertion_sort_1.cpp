#include<iostream>
using namespace std;
void insertion_sort1(int n,int array[]){
    int current;
    int i=n-1;
    
        int j = i-1;
        current = array[i];
        while(j>=0 && array[j]>current)
        {
            array[j+1]=array[j];
        
            j--;
            
            for(int k = 0; k<n; k++)
        {
            cout<<array[k]<<" ";
        }
        
        cout<<endl;
        
        }
        
        array[j+1] = current;
        
        for(int k = 0; k<n; k++)
        {
            cout<<array[k]<<" ";
        }
        
        cout<<endl;
    }

int main(){
    
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    insertion_sort1(n,array);
}
