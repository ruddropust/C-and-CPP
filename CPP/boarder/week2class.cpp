#include<bits/stdc++.h>
using namespace std;

int top = 0;
int A[stack_size];
void push(int value){
	if(top==stack_size)
	{
		cout<<"Overflow\n";
	}
	A[top]=value;
	top++;
}
void pop(){
	if(top==-1)
	{
		cout<<"Underflow\n";
	}
	A[top]=value;
	top++;
}

int main() {
	

   return 0;
}