#include <bits/stdc++.h>

// This function will insert the elements after making stack empty
// Will be called inside sortStack function
void sortInsert(stack<int> &s, int num){
    // If stack is empty or the value of top of the stack is less than current element then push it into the stack
    if(s.empty() || (!s.empty() && s.top()<=num)){
        s.push(num);
        return;
    }
    
    // If element is greater than current element then pop top element and again call sortInsert function until smaller no. is encountered
    int n = s.top();
    s.pop();
    
    sortInsert(s, num);

    // At last insert the element which is popped
    s.push(n);
}

// This is the main implemented function which will be called inside main function
void sortStack(stack<int> &stack)
{
    // If the stack is empty return
	if(stack.empty())
        return;
    
    // Store the value of top of the stack and pop it
    int num = stack.top();
    stack.pop();
    
    // Recursively call the sortStack function to make stack empty
    sortStack(stack);
    
    // After stack is empty call sortInsert function to insert the elements in sorted order
    sortInsert(stack, num);
}