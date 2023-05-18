#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;
};

void init(Node *&root);
Node *makeNode(int value);
Node * addNode(Node *root, int value);
int treeLevel(Node* root);
bool checkAvl(Node* root);
void inOder_PrintTree(Node *root);
void preOrder_PrintTree(Node *root);
void postOrder_PrintTree(Node *root);
Node* turnRight(Node* a);
Node* turnLeft(Node *a);
Node *updateTreeAvl(Node *t);
int count(Node* root, int value);
int countNode(Node* root);
void deleteNode(Node* root);
Node* deleteNumber(Node* root, int value);


void init(Node *&root) {
    root = NULL;
}

Node *makeNode(int value) {
    Node *temp = new Node;
    temp->data = value;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

Node * addNode(Node *root, int value) {
    Node *temp = makeNode(value);
    if (root == NULL) {
        root = temp;
    } else {
        if (value < root->data) {
            root->left = addNode(root->left, value);
        } else {
            root->right = addNode(root->right, value);
        }
    }
    return root;
}

// bac cua cay
int treeLevel(Node* root){
    if(root == NULL) return -1;
    return max(treeLevel(root->left), treeLevel(root->right)) + 1;
}

//check cay Avl
bool checkAvl(Node* root){
    if(root == NULL) return true;
    if(abs(treeLevel(root->left) - treeLevel(root->right)) > 1) return false;
    return checkAvl(root->left) && checkAvl(root->right);
}

// duyet trung thu tu (InOrder)
void inOder_PrintTree(Node *root) {
    if (root != NULL) {
        inOder_PrintTree(root->left);
		cout << root->data << " ";
        inOder_PrintTree(root->right);
    }
}

//duyet tien thu tu (preOrder)
void preOrder_PrintTree(Node *root) {
    if (root != NULL) {
		cout << root->data << " ";
        preOrder_PrintTree(root->left);
        preOrder_PrintTree(root->right);
    }
}

//duyet hau thu tu (postOrder)
void postOrder_PrintTree(Node *root) {
    if (root != NULL) {
        postOrder_PrintTree(root->left);
        postOrder_PrintTree(root->right);
		cout << root->data << " ";
    }
}

// xoay phai
Node* turnRight(Node* a){
    Node* b = a->left;
    Node* d = b->right;
    a->left = d;
    b->right = a;
    return b;
}

//xoay trai
Node* turnLeft(Node *a){
    Node* b = a->right;
    Node* d = b->left;
    a->right = d;
    b->left = a;
    return b;
}

//update cay Avl
Node *updateTreeAvl(Node *t){
	if (abs(treeLevel(t->left) - treeLevel(t->right)) > 1){
		if (treeLevel(t->left) > treeLevel(t->right)){               //bac con trai lon hon bac con phai
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

// dem so luong  gia tri value co trong cay 
int count(Node* root, int value){
	if(root != NULL)
	{
		if(root->data == value){
			return 1 + count(root->left, value) + count(root->right, value);
		}else if(root->data < value){
			return count(root->right, value);
		}else{
			return count(root->left, value);
		}
	}
	return 0;
}

// delete mot not
void deleteNode(Node* root){
	if(root != NULL){
		if(root->left != NULL) deleteNode(root->left);
		if(root->right != NULL) deleteNode(root->right);
		delete(root);
	}
}

// delete mot gia tri x trong cay
Node* deleteNumber(Node* root, int value){
	if(root != NULL){
		if(root->data == value){
			deleteNode(root->left);
			deleteNode(root->right);
			root = NULL;
		}else if(root->data < value){
			root->right = deleteNumber(root->right, value);
		}else{
			root->left = deleteNumber(root->left, value);
		}
	}
	return root;
}

//tim node
Node* find(Node* n, int value){
	if(n != NULL){
		if(n->data == value){
			return n; 
		}else if(n->data > value){
			return find(n->left, value);
		}else{
			return find(n->right, value);
		}
	}
	return NULL;
}

//dem so node trong cay
int countNode(Node* root){
	if(root == NULL){
		return 0;
	}else{
		return countNode(root->left) + countNode(root->right) + 1;
	}
}

int main() {
    Node *root;
    init(root);
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        root = addNode(root, x);
    }
    
    while(!checkAvl(root)){
    	root = updateTreeAvl(root);
	}
	
	inOder_PrintTree(root);
	cout << "\nAmount Node:" << countNode(root);
//	int b; cin >> b;
//	root = deleteNumber(root, b);
//	preOrder_PrintTree(root);
	
    return 0;
}