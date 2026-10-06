#include<stdio.h>
#include<vector>
using namespace std;

int main(){
    int n,a=0,b=0,max=0;
    scanf("%d",&n);
    vector<int> arr(n);
    for(auto &x:arr){
        scanf("%d",&x);
    }
    for(auto v:arr){
        if(v==1){
            a+=1;
            b+=1;
            if(b>max){
                max=b;
            }
        }
        else if(v==0){
            b=0;
        }
    }
    printf("%d",max);
    return 0;
}
