#include <iostream>
//#include <conio.h>
#include <assert.h>

using namespace std;

template <class T>
struct NodeBST {
    NodeBST(T k){
        key = k;
        parent = NULL;
        left = NULL;
        right = NULL;
    }
    T key;
    NodeBST<T> * parent;
    NodeBST<T> * left;
    NodeBST<T> * right;
};

template <class T>
NodeBST<T> * find(NodeBST<T> * n, T k);

template <class T>
void insert(NodeBST<T> * & n, T k);

template <class T>
void erase(NodeBST<T> * & n, T k);

template <class T>
T min(NodeBST<T> * n);

template <class T>
T max(NodeBST<T> * n);

template <class T>
T predecessor(NodeBST<T> * n, T k);

template <class T>
T successor(NodeBST<T> * n, T k);

template <class T>
void inOrder(NodeBST<T> * n);

template <class T>
bool isLeave(NodeBST<T> * n);

template <class T>
bool isRoot(NodeBST<T> * n);

template <class T>
bool isLeftChild(NodeBST<T> * n);

template <class T>
bool isRightChild(NodeBST<T> * n);

template <class T>
void createBST(NodeBST<T> * & n) {
    insert(n, 4); cout << "4\n";
    insert(n, 2); cout << "2\n";
    insert(n, 6); cout << "6\n";
    insert(n, 1); cout << "1\n";
    insert(n, 3); cout << "3\n";
    insert(n, 5); cout << "5\n";
    insert(n, 7); cout << "7\n";
}

template <class T>
void Init(NodeBST<T>* &n){
	n = NULL;
}

// Chuong trinh chinh
int main(){
	NodeBST<int> * node;
	Init(node);
	createBST(node);
	cout << "inOrder: "; inOrder(node); cout << "\n";
	cout << "min = " << min(node) << "\n";
	cout << "max = " << max(node) << "\n";
	cout << "predecessor = " << predecessor(node, 1) << "\n";
	cout << "successor = " << successor(node, 7) << "\n";
	cout << "erase "; erase(node, 2);
	cout << "inOrder: "; 
	if(node != NULL) inOrder(node); 
	else cout<<"NULL"; 
	cout << "\nmax = " << max(node) << "\n";
	return 0;
}

template <class T>
NodeBST<T> * find(NodeBST<T> * n, T k) {
    if(n != NULL){
    	if(n->key == k){
    		return n;
		}
    	if(n->key > k){
    		return find(n->left, k);
		}else{
			return find(n->right, k);
		}
	}
    return NULL;
}

template <class T>
void insert(NodeBST<T> * & n, T k) {
    if (n == NULL) {
        n = new NodeBST<T>(k);
    }
    else {
        if (n->key >= k) {
			insert(n->left, k);
			n->left->parent = n;
        }
        else {
			insert(n->right, k);
			n->right->parent = n;
        }
    }
}

template <class T>
void deleteNode(NodeBST<T> * n){
	if(n != NULL){
		if(isLeftChild(n)){
			n->parent->left = NULL;
		}
		if(isRightChild(n)){
			n->parent->right = NULL;
		}
		deleteNode(n->left);
		deleteNode(n->right);
		delete n;
	}	
}

template <class T>
void erase(NodeBST<T> * & n, T k) {
    NodeBST<T> * node = find(n, k);

    // khong tim thay gia tri can xoa
    if (node == NULL) return;

    // nut can xoa (node) la la
    if (isLeave(node)) {
		NodeBST<T> * tmp = node->parent;
		if(isLeftChild(node)){
			tmp->left = NULL;
		}
		if(isRightChild(node)){
			tmp->right = NULL;
		}
		delete node;
		return;
    }

    // nut can xoa (node) la dinh trong khong co con trai (left = NULL)
    if (node->left == NULL) {
		NodeBST<T> * tmp = node->parent;
		if(isLeftChild(node)){
			tmp->left = node->right;
			node->right->parent = tmp;
		}
		if(isRightChild(node)){
			tmp->right = node->right;
			node->right->parent = tmp;
		}
		delete node;
        return;
    }

    // nut can xoa (node) la dinh trong khong co con phai (right = NULL)
    if (node->left == NULL) {
		NodeBST<T> * tmp = node->parent;
		if(isLeftChild(node)){
			tmp->left = node->left;
			node->left->parent = tmp;
		}
		if(isRightChild(node)){
			tmp->right = node->left;
			node->left->parent = tmp;
		}
		delete node;
        return;
    }
	
    // nut can xoa (node) la dinh trong co 2 con
	deleteNode(node);
	return;
}

template <class T>
T min(NodeBST<T> * n) {
    assert(n != NULL);
    NodeBST<T> * tmp = n;
	while(tmp->left != NULL){
		tmp = tmp->left;
	}
    return (tmp->key);
}

template <class T>
T max(NodeBST<T> * n) {
    assert(n != NULL);
    NodeBST<T> * tmp = n;
	while(tmp->right != NULL){
		tmp = tmp->right;
	}
    return (tmp->key);
}

template <class T>
T predecessor(NodeBST<T> * n, T k) {
    NodeBST<T> * node = find(n, k);
   	if(node != NULL){
    	NodeBST<T> * tmp = node;
    	tmp = tmp->parent;
    	    return (tmp->right->key);
	   }
}

template <class T>
T successor(NodeBST<T> * n, T k) {
    NodeBST<T> * node = find(n, k);
    assert (node != NULL);
    NodeBST<T> * tmp = node;
   	if(node != NULL){
    	NodeBST<T> * tmp = node;
    	tmp = tmp->parent;
    	    return (tmp->left->key);
	   }
}

template <class T>
bool isLeave(NodeBST<T> * node) {
    return (node->left==NULL && node->right==NULL );
}

template <class T>
bool isRoot(NodeBST<T> * node) {
    return (node->parent == NULL);
}

template <class T>
bool isLeftChild(NodeBST<T> * node) {
    return (node->parent != NULL && node->key <= node->parent->key );
}

template <class T>
bool isRightChild(NodeBST<T> * node) {
    return (node->parent != NULL && node->key > node->parent->key );
}

template <class T>
void inOrder(NodeBST<T> * node) {
    if (node != NULL){
    	cout << node->key << " ";
    	inOrder(node->left);
    	inOrder(node->right);    	
	} 
}