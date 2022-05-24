#include <stdio.h>
#include <stdlib.h>
int PalindromaRic(int a[], int s, int d);
int Palindroma(int a[], int n);

int main()
{	
	int valore = 0;
	int a[] = {'k', 'a', 'y', 'a', 'r'}, n = 5;
	valore = Palindroma(a, 5);
	if(valore)
		printf("PALINDROMA!\n");
	else
		printf("NON PALINDROMA!\n");
}

int Palindroma(int a[], int n)
{
	return PalindromaRic(a, 0, n-1);
}

int PalindromaRic(int a[], int s, int d)
{
	if(s >= d)
		return 1;
	if(a[s] == a[d])
		return PalindromaRic(a, s+1, d-1);
	return 0;

}