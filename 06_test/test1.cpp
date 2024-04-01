#include <stdio.h>
#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

bool comp(string s1, string s2){
	return s1 > s2;	//string 사전 역순 
}
int main(){
	//문자열 배열
	string sArr[5] = {"abc", "aa", "abcd", "aza", "bcda"};
	
	// sort(sArr, sArr+5, comp); //  사전 역순으로 정렬
    sort(sArr, sArr+5); // 사전순 오른차순 정렬 
	
	//출력 
	for(int i=0;i<5;++i){
		cout << sArr[i] << endl;
	}
	
	return 0;
}