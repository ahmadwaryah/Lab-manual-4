#include <iostream>
using namespace std;
//int main()
//{
//	cout<<"Give the Numbers\n";
//	int x, k,l;
//	l=0;
//	for(x=0;x<10;x++)
//	{
//		cin>>k;
//		l= l+k;
//	}
//	cout<<"Sum of the 10 Natural Numbers Is : "<<l<<endl;
//}
//int main ()
//{
//		int x,c,v,b,n,m;
//	cout<<"Which Tablle do you want: ";
//	cin>>v;
//
//	for (x=1;x<11;x++)
//	{
//		c=v*x;
//		cout<<v<<" X "<<x<<"="<<c<<endl;
//	}
//
//}


//int main ()
//{
//int i,c,x,v;
//c=1;
//cout<<"Which Number: ";
//cin>>x;
//for (i=1;i<=x;i++)
//{
//	c=c*i;
//	
//} 
//	cout<<x<<"!"<<"="<<c<<endl;
//}

int main ()
{
	int i,x,c,v,b,n,m;
    cout << "How many terms: " << endl;
    cin >>x;
    cout << "Write the first 2 numbers." << endl;
    cin >>c;
    cin >>v;
    n=0;
    cout <<c<<","<<v;
    for (i=0;i<(x-2);i++)
    {
    n=c+v;
        c=v;
        v=n;
        cout<<","<<n;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}