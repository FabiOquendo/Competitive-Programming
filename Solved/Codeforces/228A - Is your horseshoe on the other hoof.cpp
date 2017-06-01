#include <bits/stdc++.h>

using namespace std;

int main(){

	long s1, s2, s3, s4;
	scanf("%ld %ld %ld %ld", &s1, &s2, &s3, &s4);
	set<long> s;
	s.insert(s1);
	s.insert(s2);
	s.insert(s3);
	s.insert(s4);
	printf("%d", 4-s.size());
		
	return 0;
}