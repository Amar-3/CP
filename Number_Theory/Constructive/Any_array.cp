/*problem satement
an array is give starting from x2 , x3 , xn.
find any array starting from a1 , a2 , a3 , an.
  satisfying
  1≤ai≤109
  for all 1≤i≤n
  
  xi = (ai mod ai−1)
 for all 2≤ i ≤ n

 Constraints
 
 The second line of each test case contains n−1
 integers x2,…,xn
 (1 ≤ xi ≤ 500)
 — the elements of x

solution instinct

since it is mentioned in the question that i have to generate any array point to it any array.

that means sequence can start with any nuber out of range of x  starting from any number > 500 

since ( a + b ) mod a == b for 0<b<a  , maths property
my sequence will be a1=500, 
                    a2=500 + x2(from input)

 
*/

#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
    // look how smartly i avoided use of array for taking and storing input and stroing answer i just run a for loop for input
    // than i did my series pring init.
		int S=1000; 
		cout<<S<<" ";
		for(int i=2;i<=n;i++){
			int x;
			cin>>x;
			S+=x;
			cout<<S<<" ";
		}
		cout<<"\n";
	}
}
