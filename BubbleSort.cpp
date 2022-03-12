#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;
void countSwaps(int a[],int size)
{
	int temp;
	int numSwaps = 0;
    
	for(int i=0;i<size;i++){
		for(int j=i;j<size-1;j++){
			if(a[i]>a[j+1]){
				int temp=a[i];
				a[i]=a[j+1];
				a[j+1]=temp;
				numSwaps++;
			}
		}
	}
	
    int firstElement = a[0];
    int lastElement = a[size -1];

    cout<<"Array is sorted in "<<numSwaps<<" swaps."<<endl;
	cout<<"First Element: "<<firstElement<<endl;
	cout<<"Last Element: "<<lastElement<<endl;
}

int main()
{
	int size;
	cin>>size;
	int array[size];
	for(int i=0;i<size;i++){
		cin>>array[i];
	}
	countSwaps(array,size);
}
