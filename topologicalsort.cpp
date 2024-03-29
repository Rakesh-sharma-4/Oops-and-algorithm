#include <iostream>
#include<vector>
using namespace std;

int main(){
    int n{};
    cout << "Enter the number of nodes: ";
    cin >> n;
    int arr[n][n];
    cout << "\nEnter the directed graph\n";
    for(int i{0}; i<n; i++){
        for(int j{0}; j<n; j++){
            cin >> arr[i][j];
        }
    }
    int map[n]={0};
    int flag[n]={0};                      
    for(int i=0; i<n; i++){            
        for(int j=0; j<n; j++){
            map[i] = map[i] + arr[j][i];
        }
    }
    cout << "\nTopological order is: ";
    int count{};
    while(count<n){
        for(int i=0; i<n; i++){
            if(map[i]==0 && flag[i]==0){ 
                cout << i << " ";
                flag[i] = 1;
            }
            for(int j=0; j<n; j++){  
                if(arr[j][i]==1){
                    map[i]--;
                }
            }
        } 
        count++;   
    }
    cout << endl;
}