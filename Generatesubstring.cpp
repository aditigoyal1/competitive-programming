#include<iostream>
#include<cstring>
using namespace std;

void print(char *c,int start_index,int i)
{
	for(int j=start_index;j<i;j++)
	{
		cout<<c[j];
	}
	cout<<endl;
	return;
}
void printSubstring(char *c,int start_index,int end)
{
	if(start_index==end)
	{
		return;
	}
	for(int i=start_index;i<end;i++)
	{
		print(c,start_index,i);
	}
	
	printSubstring(c,start_index+1,end);
}






int main(){
	char c[20]="helloaditi";
	printSubstring(c,0,strlen(c));
	return 0;
}
