#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=4;
    int arr[n][n]={{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
    int arr_new[n][n];
    int i1=0,j1=0,i2=n-1,j2=0;
    while(i1<n){
        arr_new[i1][j1]=arr[i2][j2];
        if((j1 == n-1)&&(i2 == 0)){
            j1=0;
            i1++;
            i2=n-1;
            j2++;
        }
        else{
            j1++;
            i2--;
        }
    }
   for(int j=0;j<n;j++){
       for(int i=0;i<n;i++){
           cout<<arr_new[j][i]<<" ";
       }
       cout<<endl;
   } 
}  
