#include <iostream>
using namespace std;

int main() {
    int n,max,min,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
    
        cin>>a[i];
    }
    min=a[0];
    max=a[0];
    for( i=0;i<n;i++)
    {
        {
    if(min>a[i])
    min=a[i];}
    
    if(max<a[i])
    max=a[i];
    }
cout<<min<<endl<<max;
    
    
	// your code goes here
	return 0;
}
