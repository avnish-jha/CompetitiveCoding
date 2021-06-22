#include<bits/stdc++.h>
using namespace std;
main(){
	
 	map<int, int> m;
 	
 	
 		m[18] = 19;
 		m[8] = 9;
	 
	 
	map <int, int>::iterator it;
	 
	for(it=m.begin();it!=m.end();++it){
		cout<<it->first<<" "<<it->second<<endl;
	}
	 
	 
	 
}
