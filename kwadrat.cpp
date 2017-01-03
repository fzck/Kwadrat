#include <iostream>
#include <cmath>
using namespace std;

int determinant(int a, int b, int c){
	return (sqrt( (b*b)-(4*a*c) ));
}

int case1(int a, int b, int det){
	int x = ( (-1 * b) + det ) / (2 * a);
	return x;
	
}
int case2(int a, int b, int det){	
	int x = ( (-1 * b) - det ) / (2 * a);
	return x;
	
}

int main(){
	
	int a, b, c, x1, x2;
	cout << "\tinput values for a, b & c\n"<<endl;
	
	cout<<"\ta:";
	cin >> a;
	cout<<endl;
	
	cout<<"\tb:";
	cin >> b;
	cout<<endl;
	
	cout<<"\tc:";
	cin >> c;
	cout<<endl<<endl;
	 
	/*
	cout << "\ta:\t"<< a <<endl;
	cout << "\tb:\t"<< b <<endl;
	cout << "\tc:\t"<< c <<endl<<endl;
	*/
	int det = determinant(a,b,c);
	cout <<"\tdeterminant: " <<det<<endl;
	if (det < 0){
		cout << "\tImaginary root/s" <<endl;
	}else{
		x1 = case1(a,b,det);
		x2 = case2(a,b,det);
		cout << "\tx:\t"<<x1<<", "<<x2<<endl;
	}
	
	return 0;
	
}



