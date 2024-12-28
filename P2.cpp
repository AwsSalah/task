#include<iostream>
using namespace std;
int main(){
 string s;
 s="codeforces" ;
 int t;
 char a ;
 
 cin>>t;
 
 for(int i=1 ; i<=t ; i++){
 
	cin>>a; 
	for( int j=0 ; j<10 ; j++){
		
		
			if(s[j]==a){
			cout<<"YES"<<"\n";
				break;
			}
		else
		if(s.size()==j+1)
		{
		    cout<<"NO"<<"\n";
		    break;
		}
		
	} 
} 
		
}