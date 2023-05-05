#include<bits/stdc++.h>
using namespace std;

void printArray(vector<int> &vt){
    for(int i = 0; i < vt.size(); i++){
        cout << vt[i] << " ";
    }
    cout<<"\n";
}

void merge(vector<int> &vt, int left, int mid, int right){
    vector<int> vt1(vt.begin()+left, vt.begin()+mid+1);
    vector<int> vt2(vt.begin()+mid+1, vt.begin()+right+1);
    // printArray(vt1);
    // printArray(vt2);
    int n1 = vt1.size();
    int n2 = vt2.size();
    int index=left, index1=0, index2=0;
    while(index1 < n1 && index2 < n2){
        if(vt1[index1] <= vt2[index2]){
            vt[index++] = vt1[index1++];
        }else{
            vt[index++] = vt2[index2++];
        }
    }

    while(index1 < n1){
        vt[index++] = vt1[index1++];
    }

    while(index2 < n2){
        vt[index++] = vt2[index2++];
    }
}

void mergeSort(vector<int> &vt, int left, int right){
    if(left < right){
        int mid = (left+right)/2;
        mergeSort(vt,left,mid);
        mergeSort(vt,mid+1,right);
        merge(vt, left, mid, right);
    }
}

int main()
{
    int n; cin >> n;
    int m=n;
    vector<int> vt;
    while(m--){
        int tmp; cin>>tmp;
        vt.push_back(tmp);
    }
    mergeSort(vt,0,n-1);
    printArray(vt);
    return 0;
}
