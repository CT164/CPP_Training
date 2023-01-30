//print all permutations of a given string


#include <iostream>
using namespace std;
 
 
void permute(string s, int i){
    if (i==s.length()-1){
        cout << s << endl;
        return;
	}
	for(int j=i;j<s.length();j++){
		swap(s[i],s[i]);
		permute(s,i+1);
		swap(s[i],s[j]);
	}
}
 

int main(){
    string str;
    cin>>str;
 	permute(str, 0);
    return 0;
}
