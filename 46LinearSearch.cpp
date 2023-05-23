#include<iostream>
using namespace std;

int LinearSearch(int a[], int n , int key){
    for (int i = 0; i < n; i++)
    {
        if(a[i]==key){
            return i;
        }
    }
    return -1;         ///invalid index
    

}
int main(){
    int n;
    cin>>n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

 
    cout<<"Enter Key"<<endl;
    int key;
    cin>>key;

    int pos= LinearSearch(a,n,key);

    if(pos==-1){
        cout<<"Key not found"<<endl;
    }
    else{
        cout<<"Key found at index: "<<pos<<endl;
    }

   
    
    
    
    return 0;
}