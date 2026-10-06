#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    vector<long long> a(n);
    for(auto &x:a){
        scanf("%lld",&x);
    }
    sort(a.begin(),a.end());
    auto p=unique(a.begin(),a.end());
    a.erase(p,a.end());
    printf("%d\n",(int)a.size());
    bool t=true;
    for(auto &v:a){
        if(!t){
            printf(" ");
        }
        t=false;
        printf("%lld",v);
    }
    printf("\n");
    return 0;
}
