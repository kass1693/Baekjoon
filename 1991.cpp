#include<iostream>

using namespace std;
int n;
char tree[1000];
void A(char tree[], int index) {
	if (tree[index] == '.' || tree[index] == 0 || tree[index] > 'Z' || tree[index] < 'A')
		return;
	printf("%c", tree[index]);
	A(tree, index * 2);
	A(tree, index * 2 + 1);
}
void B(char tree[], int index) {
	if (tree[index] == '.' || tree[index] == 0 || tree[index] > 'Z' || tree[index] < 'A')
		return;	
	B(tree, index * 2);
	printf("%c", tree[index]);
	B(tree, index * 2 + 1);
}
void C(char tree[], int index) {
	if (tree[index] == '.' || tree[index] == 0 || tree[index] > 'Z' || tree[index] < 'A')
		return;
	C(tree, index * 2);
	C(tree, index * 2 + 1);
	printf("%c", tree[index]);
}

int main() {
	
	char a, b, c;
	tree[1] = 'A';
	scanf("%d",&n);

	for (int i = 1; i <= n; i++) {
		cin >> a >> b >> c;
		for (int j = 1;; j++) {
			if (tree[j] == a) {
				tree[j * 2] = b;
				tree[j * 2 + 1] = c;
				break;
			}
		}
	}
	A(tree, 1);
	printf("\n");
	B(tree, 1);
	printf("\n");
	C(tree, 1);
}
