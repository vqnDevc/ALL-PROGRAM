#include<bits/stdc++.h>

using namespace std;

void printArray(vector<int> &a, int n){
    for (int i = 0; i < n; i++){
    	cout << a[i] << " ";
	}
	cout << endl;
}

void quickSort(vector<int> &a, int l, int r){
	int p = a[(l+r)/2];
	int i = l, j = r;
	while (i < j){
		while (a[i] < p){
			i++;
		}
		while (a[j] > p){
			j--;
		}
		if (i <= j){
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
	}
	if (i < r){
		quickSort(a, i, r);
	}
	if (l < j){
		quickSort(a, l, j);
	}
}

long long int mergeNumber(int a, int b){
    int k = 0, x = b;
    while(x>0){
        x/=10;
        k++;
    }
    return a*pow(10,k) + b;
}

void solution(vector<int> &a, int n){
    int k = a[0];
    for(int i=1; i<n-1; i++){
        if(mergeNumber(k,a[i]) < mergeNumber(a[i], k) ){
            int value = mergeNumber(a[i], k);
            int tmp = a[i];
            a.erase(a.begin()+i, a.begin()+i+1);
            a.insert(a.begin(),tmp);
            k = value;
        }
    }
}
bool cmp(string a, string b){
    return a.length() < b.length();
}

int main(){
    int n; cin >> n;
    int m = n;
    vector<string> s;
    while(m--){
        int value; cin >> value;
        string ss = to_string(value);
        s.push_back(ss);
    }
    
    // quickSort(a,0,n-1);
    // solution(a,n);
    // printArray(a,n);
    sort(s.begin(), s.end());
    reverse(s.begin(),s.end());
    for(int i=0; i<s.size(); i++){
        cout << s[i]<<" ";
    }
    return 0;
}