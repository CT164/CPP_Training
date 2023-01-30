#include<iostream>
using namespace std;

int main(int argc, char* argv[]){
  int i;
  if(argc<=1){
    cout<<"Enter any arguement";
  }
  else{
    for(i=1;i<argc;i++){
      cout<<argv[i];
    }
  }
}
