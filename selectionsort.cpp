#include<iostream>
#include<ctime>
using namespace std;
void selectionSort(int *a,int n){
    int minIndex,temp;
    for(int i=0;i<n;i++){
        minIndex=i;
        for (int j=i+1; j < n; j++)
        {
            if(a[minIndex]>a[j]){
                minIndex=j;
            }
        }
        temp=a[i];
        a[i]=a[minIndex];
        a[minIndex]=temp;
    }
}

int main(){
    clock_t start,end;
    start=clock();
    int n;
    int *a;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    a=new int[n];
    cout<<"Enter the elements"<<endl;
    
    for (int i = 0; i < n; i++)
        cin>>a[i];
    
    selectionSort(a,n);

    cout<<"After sorting"<<endl;
    for (int i = 0; i < n; i++)
        cout<<" "<<a[i];
    delete [] a;
    end=clock();
    cout<<"Time taken : "<<start-end;
    return 0;
}