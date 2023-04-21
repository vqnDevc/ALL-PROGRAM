#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int value){
    Node* n = new Node;
    n->data = value;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void init(Node* &root){
	root = NULL;
}

Node* insert(Node* root, int value){
    Node* tmp = createNode(value);
    if(root == NULL){
        root = tmp;
    }else{
        if(tmp->data < root->data)
            root->left = insert(root->left, value);
        else    
            root->right = insert(root->right, value);
    }
}

int treeLevel(Node* root){
    if(root == NULL) return -1;
    return max(treeLevel(root->left), treeLevel(root->right)) + 1;
}

bool checkAvl(Node* root){
    if(root == NULL) return true;
    if(abs(treeLevel(root->left) - treeLevel(root->right)) > 1) return false;
    return checkAvl(root->left) && checkAvl(root->right);
}

Node* turnRight(Node* a){
    Node* b = a->left;
    Node* d = b->right;
    a->left = d;
    b->right = a;
    return b;
}

Node* turnLeft(Node *a){
    Node* b = a->right;
    Node* d = b->left;
    a->right = d;
    b->left = a;
    return b;
}

Node *updateTreeAvl(Node *t){
	if (abs(treeLevel(t->left) - treeLevel(t->right)) > 1){
		if (treeLevel(t->left) > treeLevel(t->right)){
			Node *p = t->left;
			if (treeLevel(p->left) >= treeLevel(p->right)){
				t = turnRight(t);
			} else{
				t->left = turnLeft(t->left);
				t = turnRight(t);
			}
		} else {
			Node *p = t->right;
			if (treeLevel(p->right) >= treeLevel(p->left)){
				t = turnLeft(t);
			} else{
				t->right = turnRight(t->right);
				t = turnLeft(t);
			
			}
		}	
	}
	if (t->left != NULL) t->left = updateTreeAvl(t->left);
	if (t->right != NULL) t->right = updateTreeAvl(t->right);
	return t;
}

void printTree(Node* root){
	if(root != NULL){
		printTree(root->left);
		cout<< root->data << " ";
		printTree(root->right);
	}
}

int main(){
    int n, temp;
    cin >> n;
    Node* root;
    init(root);
    
    for(int i=0; i<n; i++){
        cin >> temp;
        root = insert(root, temp);
    }
    printTree(root);
//    while(!checkAvl(root)){
//        root = updateTreeAvl(root);
//    }
//    cout << treeLevel(root);
}