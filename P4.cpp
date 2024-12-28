#include<iostream>
using namespace std;
int main(){
	
int n ,x,i;
cin>>n;
int a[n];
 
for( i=0 ; i<n ; i++)
	cin>>a[i];
	cin>>x;
	for(i=0 ;i<n ; i++){
		
			if(a[i]==x){
			cout<<i<<endl;
			break;
				}
		
			else{
				continue;	
			}
 
	}
if(i>=n)
cout<<-1<<endl;
 
 
}