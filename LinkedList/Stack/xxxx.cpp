#include<bits/stdc++.h>
#include<stack>
#include<queue>

using namespace std;

void swap(stack<int> &st){
	queue<int>tmp;
	while(!st.empty()){
		tmp.push(st.top());
		st.pop();
	}
	while(!tmp.empty()){
		st.push(tmp.front());
		tmp.pop();
	}
}

int main(){
    int n,m,x;
    cin >> n >> m >> x;
    
    stack<int>st1;
    stack<int>st2;
    
    for(int i = 0; i < n; i++){
        int value1; cin >> value1;
        st1.push(value1);
    }
    swap(st1);
    
    for(int i = 0; i < m; i++){
        int value2; cin >> value2;
        st2.push(value2);
    }
    swap(st2);
    
    int result = 0;
    int count = 0;
    
   	if(x < st1.top() || x < st2.top()){
   		count = 0;
	}else{
		
//       	 	int k = 0;
    		while(!st1.empty() && !st2.empty()){
    			
    			if(st1.top() < st2.top()){
    				result += st1.top();
    				st1.pop();
    				count++;
				}else{
					result += st2.top();
					st2.pop();
					count++;
				}
    		
//    			if(k == 0){
//        			result = st1.top() + result;
//        			st1.pop();
//        			count++;  
//					k = 1;	
//				}else{
//	        		result = st2.top() + result;
//        			st2.pop();
//        			count++;
//					k = 0;	
//				}
//			
				if(result > x){
					break;
				}
			}
			
		}
    
	cout<<count;
    return 0;
}