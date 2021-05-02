#include <iostream>
using namespace std;

int main(){
    int jarak1, jarak2, jarak3, jarak4, jarak5, jarak6, jarak7, jarak8, jarak9, jarak10, jarak11, jarak12, A[0];
    
    cout<<"           A-------B-------C      "<<endl;
    cout<<"          /       /       /       "<<endl;
    cout<<"         /       /       /        "<<endl;
    cout<<"        D-------E-------F         "<<endl;
    cout<<"       /       /       /          "<<endl;
    cout<<"      /       /       /           "<<endl;
    cout<<"     G-------H-------I            "<<endl<<endl;
    
    cout<<"Mengukur rute terpendek dari A ke I"<<endl;
    
    cout<<"Jarak kota A ke B : ";
	cin>>jarak1;
    cout<<"Jarak kota A ke D : ";
	cin>>jarak2;
    cout<<"Jarak kota B ke C : ";
	cin>>jarak3;
    cout<<"Jarak kota B ke E : ";
	cin>>jarak4;
    cout<<"Jarak kota D ke E : ";
	cin>>jarak5;
    cout<<"Jarak kota D ke G : ";
	cin>>jarak6;
    cout<<"Jarak kota C ke F : ";
	cin>>jarak7;
    cout<<"Jarak kota E ke F : ";
	cin>>jarak8;
    cout<<"Jarak kota G ke H : ";
	cin>>jarak9;
    cout<<"Jarak kota E ke H : ";
	cin>>jarak10;
	cout<<"Jarak kota F ke I : ";
	cin>>jarak11;
	cout<<"Jarak kota H ke I : ";
	cin>>jarak12;
	
	A[0]=jarak1+jarak3+jarak7+jarak11;
	A[1]=jarak1+jarak4+jarak8+jarak11;
	A[2]=jarak1+jarak4+jarak10+jarak12;
	A[3]=jarak2+jarak6+jarak9+jarak12;
	A[4]=jarak2+jarak5+jarak10+jarak12;
	A[5]=jarak2+jarak5+jarak8+jarak11;
	
	int i, min;
        min = A[0];
        for(i = 0; i < 6; i++){
    		if (A[i] < min)  {
			min = A[i];
			}
        }
   	
	
    if(min == A[0]){
    	cout<<"Jarak terpendek adalah dari Kota A melalui Kota B - Kota C - Kota F - Kota I sejauh "<<min<<endl;
	}
	else if(min == A[1]){
		cout<<"Jarak terpendek adalah dari Kota A melalui Kota B - Kota E - Kota F - Kota I sejauh "<<min<<endl;
	}
	else if(min == A[2]){
		cout<<"Jarak terpendek adalah dari Kota A melalui Kota B - Kota E - Kota H - Kota I sejauh "<<min<<endl;
	}	
	else if(min == A[3]){
		cout<<"Jarak terpendek adalah dari Kota A melalui Kota D - Kota G - Kota H - Kota I sejauh "<<min<<endl;
	}	
	else if(min == A[4]){
		cout<<"Jarak terpendek adalah dari Kota A melalui Kota D - Kota E - Kota H - Kota I sejauh "<<min<<endl;
	}
	else if(min == A[5]){
		cout<<"Jarak terpendek adalah dari Kota A melalui Kota D - Kota E - Kota F - Kota I sejauh "<<min<<endl;
	}
	
return 0;
}
