#include<bits/stdc++.h>
using namespace std;
void permutaions(string s,int i,int n){
    //base case
    if(n==i){
        cout<<s<<endl;
        return ;
    }
    // generate all permutaions
    for(int j=i;j<n;j++){
        swap(s[i],s[j]);
        permutaions(s,i+1,n);
    }
   
}
int main(){
string s="abc";
int n=s.size();
permutaions(s,0,n);
return 0;
}