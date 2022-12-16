#include <iostream>
#include <stack>
#include <vector>
using namespace std;
 
// Find the next greater element for every element in an array
vector<int> findNextGreaterElements(vector<int> const &input)
{
    int n = input.size();
    vector<int> result(n, -1);

    stack<int> s;
   
    for (int i = 0; i < n; i++)
    {
        // loop till we have a greater element on top or stack becomes empty.
 
        // Keep popping elements from the stack smaller than the current
        // element, and set their next greater element to the current element
 
        while (!s.empty() && input[s.top()] < input[i])
        {
            result[s.top()] = input[i];
            s.pop();
        }
 
        // push current "index" into the stack
        s.push(i);
    }
 
    return result;
}
 
int main()
{
    vector<int> input = { 2, 7, 3, 5, 4, 6, 8 };
 
    vector<int> result = findNextGreaterElements(input);
    for (int i: result) {
        cout << i << ' ';
    }
 
    return 0;
}