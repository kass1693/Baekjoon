#include<iostream>
#include<algorithm>

using namespace std;

int static compare(const void* first, const void* second)
{
    if (*(int*)first > * (int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}
int main() {
	int ar[3];

	for (int i = 0; i < 3; i++)
		cin >> ar[i];
	qsort(ar, 3,sizeof(int),compare);
    cout << ar[1];
}
