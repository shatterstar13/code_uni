#include <iostream>
using namespace std;
int main(){
    int num[10]{ 1,2,3,4,1,2,3,4,1,2}, temp{};
    for(int i=0;i<10;i++){
        int count =0;
        temp = num[i];
        for(int j=0;j<10;j++){
            if(temp=num[j]){
                count++;
            }
        }
    if(count>1){
        cout<< temp;
    }    
    }
}