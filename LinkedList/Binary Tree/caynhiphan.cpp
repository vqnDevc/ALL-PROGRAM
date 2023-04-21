#include <iostream>

using namespace std;

typedef char T;

struct Node {
    Node(T value){
        data = value;
        depth = 0;
        height = 0;
        parent = NULL;
        firstChild = NULL;
        nextSibling = NULL;
    }

    T data;
    int depth;
    int height;
    Node * parent;
    Node * firstChild;
    Node * nextSibling;
};

int max(int a, int b){
	return a>b?a:b;
}

// 1. kiem tra 1 nut co phai la goc hay khong
bool isRoot(Node * n);

// 2. kiem tra mot nut co phai la la hay khong
bool isLeave(Node * n);

// 3. in du lieu (duyet) cay theo thu tu truoc
void preOrder(Node * n);

// 3. in du lieu (duyet) cay theo thu tu trong
void inOrder(Node * n);

// 5. in du lieu (duyet) cay theo thu tu sau
void postOrder(Node * n);

// 6. tinh do sau cac dinh cua cay
// (duoc luu vao bien depth trong struct Node)
void depth(Node * n);

// 7. tinh do cao cac dinh cua cay
// (duoc luu vao bien height trong struct Node)
int Height(Node * n);

// Tao cay nhu trong slide 13
Node * buildTestTree(){
    Node * n1 = new Node('A');

    Node * n2 = new Node('B');
    n1->firstChild = n2;
    n2->parent = n1;

    Node * n3 = new Node('C');
    n2->nextSibling = n3;
    n3->parent = n1;

    Node * n4 = new Node('D');
    n3->nextSibling = n4;
    n4->parent = n1;

    Node * n5 = new Node('E');
    n2->firstChild = n5;
    n5->parent = n2;

    Node * n6 = new Node('F');
    n5->nextSibling = n6;
    n6->parent = n2;

    Node * n7 = new Node('G');
    n4->firstChild = n7;
    n7->parent = n4;
    
//    Node * n8 = new Node( 'H');
//    n3->firstChild = n8;
    
    return n1;
}

// Chuong trinh chinh
int main() {
    Node * root = buildTestTree();

    depth(root);
    int a = Height(root);
    cout << a << endl;

    preOrder(root); cout << endl;
//    inOrder(root); cout << endl;
//    postOrder(root); cout << endl;

    return 0;
}

// 1. kiem tra 1 nut co phai la goc hay khong
bool isRoot(Node * n) {
	return (n->parent == NULL);
}

// 2. kiem tra mot nut co phai la la hay khong
bool isLeave(Node * n) {
	return (n->firstChild == NULL);
}

// 3. in du lieu (duyet) cay theo thu tu truoc
void preOrder(Node * n) {
	if(n != NULL){
		preOrder(n->firstChild);
		cout << n->data << " ";	
		preOrder(n->nextSibling);	
			
	}
}

// 4. in du lieu (duyet) cay theo thu tu trong
void inOrder(Node * n) {
    cout << n->data << " " << n->depth << " " << n->height << endl;
}

// 5. in du lieu (duyet) cay theo thu tu sau
void postOrder(Node * n) {
    cout << n->data << " " << n->depth << " " << n->height << endl;
}

// 6. tinh do sau cac dinh cua cay
// (duoc luu vao bien depth trong struct Node)
void depth(Node * n) {
    if (isRoot(n)) {
        n->depth = 0;
    }
    else {
        n->depth = n->parent->depth + 1;
    }
	
	cout << n->depth << endl;
}

// 7. tinh do cao cac dinh cua cay
// (duoc luu vao bien height trong struct Node)
int Height(Node* n) {
    if (isLeave(n)) {
        n->height = 0;
    }
    else {
    	Node *tmp = n->firstChild;
    	if(tmp->nextSibling == NULL){
    		n->height = Height(tmp) + 1;
		}else{
    		while(tmp->nextSibling != NULL){
    			int x = max ( Height(tmp), Height(tmp->nextSibling) ) + 1;
    			tmp = tmp->nextSibling;
    			n->height = max (n->height, x) ;
			}
			delete tmp;			
		}
    }
    return n->height;
}