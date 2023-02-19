#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int firstOccurence(vector<int> v,int t){
    int s=0,e=v.size()-1,m=s+(e-s)/2;
    int ans=-1;
while(s<=e){
if(v[m]==t){
ans=m;
e=m-1;
}
else if(t<v[m]){
e=m-1;
}
else{
s=m+1;
}
m=s+(e-s)/2;

}
return ans;
}

int lastOccurence(vector<int> v,int t){
    int s=0,e=v.size()-1,m=s+(e-s)/2;
    int ans=-1;
while(s<=e){
if(v[m]==t){
ans=m;
s=m+1;
}
else if(t<v[m]){
e=m-1;
}
else{
s=m+1;
}
m=s+(e-s)/2;

}
return ans;
}
int main(){
    vector<int> v{1,3,40,4,4,4,4,30};
//    cout<<firstOccurence(v,4);
// lower_bound(v.begin(),v.end(),4);
int a=firstOccurence(v,4);int b=lastOccurence(v,4);
cout<<(b-a+1);
 }