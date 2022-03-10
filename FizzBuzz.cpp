class Solution {
public:
    vector<string> fizzBuzz(int n) {
#include<iostream>
#include<string>

using namespace std;

std::vector<std::string> output;
//cout<<"how many?"<<endl;
cin>>n;

string answer[n+1];
string word;

for(int i=1; i<=n; i++)
{
if(i%3==0 && i%5==0)
{
 
	answer[i] = "FizzBuzz";

	
}
else if(i%3==0)
{

    answer[i] = "Fizz";

}
else if(i%5==0)
{
	
	answer[i] = "Buzz";

}
else
{

    answer[i] = to_string(i); 

}

    output.push_back(answer[i]);

    
}
return output;
    }
};
