/*
    COSC-1437-58000: Programming Fundamentals II
    Unit 2 Assignment
    Matthew Bishop | matthew.bishop469@my.tccd.edu
    April 06, 2020
    IDE: VS Code
*/

#include <iostream>
#include <vector>
#include <cassert>
#include <stack>
#include <set>
#include <utility>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

typedef map<string, int> MapT;
typedef MapT::const_iterator MapIterT;

class MyClassVector1 { 
  vector<int> vec; 
  public: 
    MyClassVector1(vector<int> v)  
    { 
      vec = v; 
    } 
    void print() 
    { 
      /// print the value of vector 
      for (int i = 0; i < vec.size(); i++) 
        cout << vec[i] << " "; 
    } 
};

class MyClassVector2 { 
  vector<int> vec; 
  public: 
    MyClassVector2(vector<int> v)  
    { 
      vec = v; 
    } 
    void print() 
    { 
      /// print the value of vector 
      for (int i = 0; i < vec.size(); i++) 
        cout << vec[i] << " "; 
    } 
};

class MyClassVector3 { 
  vector<int> vec; 
  public: 
    MyClassVector3(vector<int> v)  
    { 
      vec = v; 
    } 
    void print() 
    { 
      /// print the value of vector 
      for (int i = 0; i < vec.size(); i++) 
        cout << vec[i] << " "; 
    } 
};

template <typename T>
void outVector(vector<T> v)
{
  for (int i = 0; i < v.size(); i++)
  {
    cout << (i != 0 ? ", " : "") << v[i];
  }
  cout << endl;
}

bool less_than_7(int value)
{
  return value < 7; // check if value is less than 7
}

int main()
{
  /*** Vectors ***/
  vector<double> vd; // vd elements are floating point numbers
  vector<int> vi; // vi elements are integer numbers
  vector<string> vs; // vs elemets are string objects
  
  double vdValues[3] = {2.2, 3.3, 4.4};
  int viValues[3] = {2, 3, 4};
  string vsValues[3] = {"two", "three", "four"};
  // insert array values instead of multiple push back calls. 
  vd.insert(vd.end(), begin(vdValues), end(vdValues));
  vi.insert(vi.end(), begin(viValues), end(viValues));
  vs.insert(vs.end(), begin(vsValues), end(vsValues));
  // loop through arrays and cout
  outVector(vd);
  outVector(vi);
  outVector(vs);

  /*** Vector_as_Class_Member ***/
  // https://www.geeksforgeeks.org/passing-vector-constructor-c/

  vector<int> vec1; 
  for (int i = 1; i <= 5; i++) 
    vec1.push_back(i); 
  MyClassVector1 obj1(vec1); 
  obj1.print(); 

  vector<int> vec2; 
  for (int i = 1; i <= 5; i++) 
    vec2.push_back(i); 
  MyClassVector2 obj2(vec2); 
  obj2.print(); 

  vector<int> vec3; 
  for (int i = 1; i <= 5; i++) 
    vec3.push_back(i); 
  MyClassVector3 obj3(vec3); 
  obj3.print(); 

  cout << endl;

  /*** STL_Iterators ***/
  vector<int> vint(3);
  int vintValues[7] = {40, 50, 60, 70, 80, 90, 100};
  vint[0] = 10;
  vint[1] = 20;
  vint[2] = 30;
  vint.insert(vint.end(), begin(vintValues), end(vintValues));

  // Display elements of the vector:
  vector<int>::iterator it;
  for (it = vint.begin(); it != vint.end(); ++it)
  {
    // Like pointer, iterator is dereferenced to 
    // access the value of the element pointed by it:
    cout << " " << *it;
  }

  cout << endl;

  /*** Stack ***/
  stack<int> st; // create new stack

  st.push(100); // add int to top of stack
  assert(st.size() == 1); // assert only one value in stack
  assert(st.top() == 100); // assert top value is 100

  st.top() = 456; // set top value of stack to 456
  assert(st.top() == 456); // assert top of stack is 456

  st.pop(); // remove top value of stack
  assert(st.empty() == true); // assert stack is empty

  /*** Set ***/
  set<int> iset; // create new unique set

  iset.insert(11); // insert value
  iset.insert(-11); // insert value
  iset.insert(55); // insert value
  iset.insert(22); // insert value
  iset.insert(22); // value already exists
  if (iset.find(55) != iset.end()) { // check that set sorted properly
    iset.insert(55); // shouldn't be run
  }
  assert(iset.size() == 4); // check set size
  set<int>::iterator it2; // create iterator for for loop
  for(it2 = iset.begin(); it2 != iset.end(); it2++)
  {
    cout << " " << *it2; // output each memeber of the set
  }

  cout << endl;

  /*** Pair_Structure ***/
  pair<string, string> strstr; // create pair of strings
  strstr.first = "Hello"; // set first value
  strstr.second = "World"; // set second value

  pair<int, string> intstr; // create int string pair
  intstr.first = 1; // set first value
  intstr.second = "one"; // set second value

  pair<string, int> strint("two", 2); // create stirng int pair initialized with values
  assert(strint.first == "two"); // assert first value is correct string
  assert(strint.second == 2); // assert second value is correct int

  /*** Map_Insert ***/
  MapT amap; // create custom type 
  pair<MapIterT, bool> result =
    amap.insert(make_pair("Fred", 45)); // create pair with MapT object as first value and success as second value
  
  assert(result.second == true); // assert assignment was successful
  assert(result.first->second == 45); // assert map second value in pairs first value is 45

  /*** Map_Summary ***/
  map<string, string> phone_book; // create a string string map;
  phone_book["411"] = "Directory"; // set string key to string value
  phone_book["911"] = "Emergency"; // set string key to string value
  phone_book["508-678-2811"] = "BCC"; // set string key to string value
  if (phone_book.find("411") != phone_book.end()) // check if 411 is at end of map kinda like pushing on a stack
  {
    phone_book.insert(make_pair(string("411"), string("Directory")));
  }
  assert(phone_book.size() == 3); // make sure theres only 3 values
  map<string, string>::const_iterator it3; // create iterator for for loop
  for (it3 = phone_book.begin(); it3 != phone_book.end(); ++it3)
  {
    cout << " " << it3->first << " " << it3->second << endl;// output pairs from front to back, like popping off a stack
  }
  
  /*** Sort Algorithm ***/
  int arr[100]; // create array with 100 values
  sort(arr, arr + 100); // sort array start through to array end
  vector<int> v1; // create vector
  sort(v1.begin(), v1.end()); // sort from beginning to end of vector

  /*** Predicate_Algorithm ***/
  // less_than_7 declared top of file
  vector<int> v2; // create new int vector
  int count_less = count_if(v2.begin(), v2.end(), less_than_7); // count values in vecotr if value is less than 7

  return 0;
}