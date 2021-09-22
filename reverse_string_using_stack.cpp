#include<bits/stdc++.h>
using namespace std;
#define MAX 50


class Stack
{
	public:
		int top;
		char arr[MAX];
	
	Stack()
	{
		top = -1;
	}
	
	void push(char val)
	{
		if(top>= (MAX-1))
		{
			cout<<"STACK OVERFLOWED";
		}
		else
		{
			++top;
			arr[top] = val;
		}
	}
	
	char pop()
	{
		if(top == -1)
		{
			cout<<"STACK UNDERFLOW";
			return '#';
		}
		else
		{
			char x = arr[top];
			--top;
			return x;
		}
	}
	
	bool Empty()
	{
		if(top == -1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};
int main()
{
	Stack s;
 	string str;
 	cout<<"ENTER STRING TO BE REVERSED: ";
 	cin>>str;
 	
 	int len = str.length();
 	
 	for(int i=0; i<len; i++)
 	{
 		s.push(str[i]);	
	}
	
	while(s.Empty() == false)
	{
		cout<<s.pop();
	}
	return 0;
}
