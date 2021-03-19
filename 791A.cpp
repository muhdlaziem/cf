#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int l,b;
	scanf("%d%d",&l, &b);
	if(l == b) printf("1\n");
	else{
	    int cnt = 0;
	    while(l <=b){
	        l *=3;
	        b *=2;
	        cnt++;
	    }
	    printf("%d\n",cnt);
	}
	return 0;
}
