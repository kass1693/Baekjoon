#include<iostream>

using namespace std;

class A{
public:
	int x, y, z;
	A(){
	}
	A(int x, int y, int z){
		this->x=x;
		this->y=y;
		this->z=z;
	}
	
	void com(A a){
		if(this->x < a.x && this->y < a.y)
			this->z++; 	
	}
};

int main(){
	int n;
	int x, y;
	scanf("%d",&n);
	
	A *a[50]; 
	for(int i=0; i<n;i++){
		scanf("%d %d",&x, &y);
		a[i] = new A(x,y,1);
	}
	for(int i=0; i<n;i++){
		for(int j=0; j<n;j++){
			a[i]->com(*a[j]);
		}
	}
	for(int i=0; i<n;i++){
		printf("%d ", a[i]->z);
	}
}
