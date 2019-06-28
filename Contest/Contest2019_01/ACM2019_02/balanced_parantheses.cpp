#include<bits/stdc++.h> 
using namespace std; 
  
// function to check if paranthesis are balanced 
bool areParanthesisBalanced(string expr) { 
    stack<char> s; 
    char x; 
  
    // Traversing the Expression 
    for (int i=0; i<expr.length(); i++) { 
        if (expr[i]=='('||expr[i]=='['||expr[i]=='{') { 
            // Push the element in the stack 
            s.push(expr[i]); 
            continue; 
        } 
  
        // IF current current character is not opening 
        // bracket, then it must be closing. So stack 
        // cannot be empty at this point. 
        if (s.empty()) 
           return false; 
  
        switch (expr[i]) { 
        case ')': 
  
            // Store the top element in a 
            x = s.top(); 
            s.pop(); 
            if (x=='{' || x=='[') 
                return false; 
            break; 
  
        case '}': 
  
            // Store the top element in b 
            x = s.top(); 
            s.pop(); 
            if (x=='(' || x=='[') 
                return false; 
            break; 
  
        case ']': 
  
            // Store the top element in c 
            x = s.top(); 
            s.pop(); 
            if (x =='(' || x == '{') 
                return false; 
            break; 
        } 
    } 
  
    // Check Empty Stack 
    return (s.empty()); 
} 

int main() { 
	//Given an expression string exp , write a program to examine whether the pairs and the orders of �{�,�}�,�(�,�)�,�[�,�]� are correct in exp. 
	//For example, the program should print true for exp = �[()]{}{[()()]()}� and false for exp = �[(])�
    string expr = "{()}[]"; 
  
    if (areParanthesisBalanced(expr)) 
        cout << "yes"; 
    else
        cout << "no"; 
    return 0; 
} 
