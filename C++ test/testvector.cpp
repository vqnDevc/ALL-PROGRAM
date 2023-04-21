#include <bits/stdc++.h>
int main(){
std::vector<int> myvector; //10 zero-initialized elements

for (int i = 0; i < myvector.size(); i++)
	myvector.push_back(i);
for (int i = 0; i < myvector.size(); i++)	
std::cout << myvector.at(i) << std::endl;
    return 0;
}
