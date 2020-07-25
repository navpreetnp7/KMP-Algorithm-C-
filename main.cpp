#include <iostream>

using namespace std;

int main()
{
    string s; cin>>s;
    int n = s.length();
    int lps[n];
    lps[0]=0;
    int j=0;
    int i=1;
    while(i<n){
        if(s[i]==s[j]){
            j++;
            lps[i]=j;
            i++;
        }
        else{
            if(j!=0) j=lps[j-1];
            else{
                lps[i]=0;
                i++;
            }
        }
    }
    for(int i=0;i<n;i++) cout<<lps[i]<<" ";

}
