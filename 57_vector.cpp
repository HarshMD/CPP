// Vector is a dynamic array provided by the standard template library(stl).
// Unlike normal arrays, vectors can resize themselves automatically when elements are added or removed

/* vector<int> numbers;     //integer
   vector<string> names[5];    //string
   vector<float> price = {99.5, 3.14, 13.2}; */

#include<vector>
#include<iostream>

using namespace std;

int main(){
   
   vector<int> num; //empty vector array banaya
    
    // Add elements at the end of vector
   num.push_back(10);
   num.push_back(20);
   num.push_back(30);
   num.push_back(40);
   num.push_back(50);
    // Show all elements of vector
   cout<<"All elements of num vector: "<<endl;
      for(int val: num){
        cout<<val<<endl;
      }

   // remove elements from vector
   num.pop_back();
   cout<<"All elements of num vector: "<<endl;
      for(int val: num){
        cout<<val<<endl;
      }

   // add elements at a given position
   num.insert(num.begin(),6);
   num.insert(num.begin()+2,6);
   num.insert(num.end(),6);
   cout<<"All elements of num vector: "<<endl;
      for(int val: num){
        cout<<val<<endl;
      }

   // remove elements at a given position
   num.erase(num.begin()+1);
   cout<<"All elements of num vector: "<<endl;
      for(int val: num){
        cout<<val<<endl;
      }

   // check size of the vector
   cout<<"Size of vector: "<<num.size()<<endl;

   num.clear();
   cout<<"All elements of num vector: "<<endl;
      for(int val: num){
        cout<<val<<endl;
      }

   cout<<"Vector is empty: "<< (num.empty()?"Yes":"No");

   return 0;
}